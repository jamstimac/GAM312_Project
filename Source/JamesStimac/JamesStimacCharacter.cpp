// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamesStimacCharacter.h"
#include "JamesStimacProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Engine.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"


DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AJamesStimacCharacter

AJamesStimacCharacter::AJamesStimacCharacter()
{
	// set herb counts
	WorgrootCount = 0;
	ElfsearCount = 0;
	BellhollyCount = 0;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	// bUsingMotionControllers = true;
}

void AJamesStimacCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// initialize inminigame bool
	bInAlchemyMinigame = false;

	// initialize health variables
	FullHealth = 100.0f;
	Health = FullHealth;
	HealthPercentage = 1.0f;
	PreviousHealth = HealthPercentage;
	bCanBeDamaged = true;

	// initialize magic variables
	FullMagic = 100.0f;
	Magic = FullMagic;
	MagicPercentage = 1.0f;
	PreviousMagic = MagicPercentage;
	MagicValue = 0.0f;
	bCanUseMagic = true;

	// if MagicCurve != nullptr
	if (MagicCurve)
	{
		// timeline specific variables
		FOnTimelineFloat TimelineCallback;
		FOnTimelineEventStatic TimelineFinishedCallback;

		// bind timeline to Set Magic Value and Set Magic State ufunctions
		TimelineCallback.BindUFunction(this, FName("SetMagicValue"));
		TimelineFinishedCallback.BindUFunction(this, FName{ TEXT("SetMagicState") });
		// set variables for timeline [interpolation and Timeline Finished State Func]
		MyTimeline.AddInterpFloat(MagicCurve, TimelineCallback);
		MyTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);
	}

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

void AJamesStimacCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyTimeline.TickTimeline(DeltaTime);

	GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, FString::Printf(TEXT("Current health: %f"), Health));
}


//////////////////////////////////////////////////////////////////////////
// Input

void AJamesStimacCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// bind raycast event
	PlayerInputComponent->BindAction("Raycast", IE_Pressed, this, &AJamesStimacCharacter::DisplayRaycast);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AJamesStimacCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AJamesStimacCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AJamesStimacCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AJamesStimacCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AJamesStimacCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AJamesStimacCharacter::LookUpAtRate);
}

///////////////////////////////////////////////////////////////////////////
// AJamesStimacCharacter:: interaction functions()

void AJamesStimacCharacter::DisplayRaycast()
{
	// variables related to Raycast: vectors, hitresult, and collision query.
	FHitResult* HitResult = new FHitResult();
	FVector StartTrace = FirstPersonCameraComponent->GetComponentLocation();
	FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
	FVector EndTrace = ((ForwardVector * 500.f) + StartTrace);
	float SphereRadius = 10.f;
	int32 SphereSegments = 32;
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_Visibility, *TraceParams))
	{
		DrawDebugSphere(GetWorld(), HitResult->Location, SphereRadius, SphereSegments, FColor(255, 0, 0), false, 5.f);

		if (HitResult != nullptr) {

			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("You found %s"), *HitResult->GetActor()->GetName()));
		}
	} // end LineTrace if
}

void AJamesStimacCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr && !FMath::IsNearlyZero(Magic, 0.001f) && bCanUseMagic)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AJamesStimacProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AJamesStimacProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			
			
				// try and play the sound if specified
				if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}

				// try and play a firing animation if specified
				if (FireAnimation != nullptr)
				{
					// Get the animation object for the arms mesh
					UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
					if (AnimInstance != nullptr)
					{
						AnimInstance->Montage_Play(FireAnimation, 1.f);
					}
				}

				// Stop MyTimeline
				MyTimeline.Stop();

				// Clear event timer
				GetWorldTimerManager().ClearTimer(MagicTimerHandle);

				// Reduce magic since using ability
				SetMagicChange(-20.f);

				// reset timer for UpdateMagic
				GetWorldTimerManager().SetTimer(MagicTimerHandle, this, &AJamesStimacCharacter::UpdateMagic, 5.0f, false);
			}
		}
	}


}

void AJamesStimacCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AJamesStimacCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AJamesStimacCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AJamesStimacCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AJamesStimacCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AJamesStimacCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AJamesStimacCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AJamesStimacCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AJamesStimacCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AJamesStimacCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AJamesStimacCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AJamesStimacCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

///////////////////////////////////////////////////////////////////////////
// AJamesStimacCharacter:: Minigame functions()

// Setter function for InAlchemyMinigame
void AJamesStimacCharacter::SetInAlchemyMinigame(bool inMinigame)
{
	bInAlchemyMinigame = inMinigame;
}
// Getter function for InAlchemyMinigame
bool AJamesStimacCharacter::GetInAlchemyMinigame()
{
	return bInAlchemyMinigame;
}

///////////////////////////////////////////////////////////////////////////
// AJamesStimacCharacter:: HUD functions()

/** Get Health */
float AJamesStimacCharacter::GetHealth()
{
	// return protected variable HealthPercentage
	return HealthPercentage;
}

/** Update Health */
void AJamesStimacCharacter::UpdateHealth(float HealthChange)
{
	// set previous health
	PreviousHealth = HealthPercentage;

	// Health changed with damage (and clamped within range of 0 -> FullHealth
	Health += HealthChange;
	Health = FMath::Clamp(Health, 0.0f, FullHealth);

	// Current Health percentage set to Health out of FullHealth
	HealthPercentage = Health / FullHealth;
}


/** Get Health text */
FText AJamesStimacCharacter::GetHealthIntText()
{
	// convert to an int (percentage) from a float
	int32 HP = FMath::RoundHalfFromZero(HealthPercentage * 100);

	// Create HP string from int HP
	FString HPS = FString::FromInt(HP);

	// append HP string with percent sign into HealthHUD string
	FString HealthHUD = HPS + FString(TEXT("%"));

	// create FText element from HealthHUD string
	FText HPText = FText::FromString(HealthHUD);

	// return HPText
	return HPText;
}

/** Damage Timer */
void AJamesStimacCharacter::DamageTimer()
{
	// set timer for function SetDamageState
	GetWorldTimerManager().SetTimer(HealthTimerHandle, this, &AJamesStimacCharacter::SetDamageState, 2.0f, false);
}

/** runs when interacting weith an element that calls ApplyPointDamage */
float AJamesStimacCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// change bool CanBeDamaged (so as not to create "exponential damage" that can kill player in one tick)
	bCanBeDamaged = false;

	// set bool for HUD flash to true
	redFlash = true;
	
	// call update health with current damage (negative so that it subtracts from Current health)
	UpdateHealth(-DamageAmount);

	// call Damage Timer
	DamageTimer();

	return DamageAmount;

}

/** Set damage State (Called on Timer) */
void AJamesStimacCharacter::SetDamageState()
{
	// reset bool CanBeDamaged 
	bCanBeDamaged = true;
}

/** Get Magic */
float AJamesStimacCharacter::GetMagic()
{
	// return protected variable MagicPercentage
	return MagicPercentage;
}

/** Update Magic */
void AJamesStimacCharacter::UpdateMagic()
{
	// store current MagicPercentage in PreviousMagic
	PreviousMagic = MagicPercentage;

	// Update magic percentage as Magic out of FullMagic
	MagicPercentage = Magic / FullMagic;

	// set MagicValue to 1 (Since restored)
	MagicValue = 1.0f;

	// set timeline to start
	MyTimeline.PlayFromStart();
}

/** Get Magic Text */
FText AJamesStimacCharacter::GetMagicIntText()
{
	// Convert magic percentage float float to int (percent value) MP
	int32 MP = FMath::RoundHalfFromZero(MagicPercentage * FullMagic);

	// Create MP string from int MP
	FString MPS = FString::FromInt(MP);

	// Append MP string with percent sign, store in MagicHUD
	FString MagicHUD = MPS + FString(TEXT("%"));

	// Create FText element from MagicHUD string
	FText MPText = FText::FromString(MagicHUD);
	return MPText;
}

/**  Set Magic Value */
void AJamesStimacCharacter::SetMagicValue()
{
	// Store the current playback position of MyTimeline
	TimelineValue = MyTimeline.GetPlaybackPosition();

	// Add Previous Magic value to (1.0f * Previous MagicCurve as a float value pulled from the stored playback position at call)
	CurveFloatValue = PreviousMagic + (MagicValue * MagicCurve->GetFloatValue(TimelineValue));

	// Magic is the CurveFloatValue (based on previous magic) times FullHealth value
	Magic = CurveFloatValue * FullHealth;

	// clamp magic wtihin range from 0 -> FullMagic
	Magic = FMath::Clamp(Magic, 0.0f, FullMagic);

	// set MagicPercentage equal to the CurveFloatValue
	MagicPercentage = CurveFloatValue;

	// clamp this within 0 -> 1 (float) for easy conversion to percentage
	MagicPercentage = FMath::Clamp(MagicPercentage, 0.0f, 1.0f);
}

/** Set Magic Change*/
void AJamesStimacCharacter::SetMagicChange(float MagicChange)
{
	// change bool CanUseMagic to False 

	bCanUseMagic = false;

	// Store Curernt Magic Percentage in PreviousMagic
	PreviousMagic = MagicPercentage;

	// MagicValue is MagicChange out of FullMagic
	MagicValue = (MagicChange / FullMagic);

	// if GunOverheatMaterial != nullptr
	if (GunOverheatMaterial)
	{
		// set FP_Gun matrial to GunOverheatMaterial
		FP_Gun->SetMaterial(0, GunOverheatMaterial);
	}

	// Set MyTimeline to play from start
	MyTimeline.PlayFromStart();
}


/** Set Magic State*/
void AJamesStimacCharacter::SetMagicState()
{
	// reset bool CanUseMagic
	bCanUseMagic = true; 

	// MagicValue set to 0 (since used)
	MagicValue = 0.0;

	// if GunDefaultMaterial != nullptr
	if (GunDefaultMaterial)
	{
		// set FP_Gun material to GunDefaultMaterial
		FP_Gun->SetMaterial(0, GunDefaultMaterial);
	}
}


/** Play Flash */
bool AJamesStimacCharacter::PlayFlash()
{
	// if bool refFlash is true
	if (redFlash)
	{
		// change bool value
		redFlash = false;

		// return true
		return true;
	}
	// else return false
	return false;
}
