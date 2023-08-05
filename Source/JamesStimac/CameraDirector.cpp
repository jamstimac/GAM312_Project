// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Inputcomponent.h"
// include character class so that we can leave CameraDirector and return to default player camera
#include "Camera/PlayerCameraManager.h"

// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// Enable input for the player Will include code to show cursor later.
	if (OurPlayerController)
	{
		EnableInput(OurPlayerController);
		// OurPlayerController->bShowMouseCursor = true;
	}

	// this will change to an input choice later currently just sets external camera as player camera.
	// NextCamera();
	
	// Initialize input on BeginPlay (Code following pulled from https://tinyurl.com/UnrealisticInput and https://tinyurl.com/UnrealDevForums).
	// bind input for Swap Camera and Leave Camera Director functs.
	if (InputComponent)
	{
		InputComponent->BindAction("CameraSwapNext", IE_Pressed, this, &ACameraDirector::NextCamera);
		InputComponent->BindAction("CameraSwapPrev", IE_Pressed, this, &ACameraDirector::PreviousCamera);
		InputComponent->BindAction("LeaveCameraDirector", IE_Pressed, this, &ACameraDirector::LeaveCameraDirector);
	}
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// called once at begin play to set first camera, then go to camera right of current camera (will not go between extremes)
void ACameraDirector::NextCamera() 
{
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// If playercontroller not nullptr
	if (OurPlayerController) 
	{
		// if all cameras true
		// Camera Order from center/start (ie Camera One or Cauldron Camera) left = SacksCamera, right = pots camera
		if (CameraOne && CameraTwo && CameraThree) 
		{
			// if on Camera 1 (Cauldron Camera)
			if (OurPlayerController->GetViewTarget() == CameraOne)
			{
				// cut smoothly to camera 2 (Pots Camera)
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
			// if on Camera 2 (Pots Camera)
			else if (OurPlayerController->GetViewTarget() == CameraTwo)
			{
				// FIXME: Should start a sound or some signifier that can't go this direction anymore
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("You cannot go further this direction")));
				// Do Not cut to either camera
				// OurPlayerController->SetViewTargetWithBlend(CameraThree, SmoothBlendTime);
			}
			// either when not on a camera yet or when on camera 3
			else 
			{
				// On First use of camera director, store original viewtarget for later purposes
				if (OurPlayerController->GetViewTarget() != NULL && OurPlayerController->GetViewTarget() != CameraOne && OurPlayerController->GetViewTarget() != CameraTwo && OurPlayerController->GetViewTarget() != CameraThree)
				{
					GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("You have entered the Alchemy Minigame")));
					PlayerCamera = OurPlayerController->GetViewTarget();
				}

				// smoothly cut to camera 1 (Cauldron Camera)
				OurPlayerController->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
				
			}
		}
	}
}

// got to camera left of current camera (will not go between extremes)
void ACameraDirector::PreviousCamera() 
{
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// If playercontroller not nullptr
	if (OurPlayerController)
	{
		// If all cameras true
		// Camera Order from center/start (ie Camera One or Cauldron Camera) left = SacksCamera, right = pots camera
		if (CameraOne && CameraTwo && CameraThree) 
		{
			// if on CameraOne (Cauldron camera)
			if (OurPlayerController->GetViewTarget() == CameraOne)
			{
				// cut smoothly to camera 3 (Sacks Camera)
				OurPlayerController->SetViewTargetWithBlend(CameraThree, SmoothBlendTime);
			}
			// if on CameraTwo (Pots Camera)
			else if (OurPlayerController->GetViewTarget() == CameraTwo)
			{
				// smoothly cut to camera 1 (Cauldron Camera)
				OurPlayerController->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
			}
			else
			{
				//FIXME: should play sound or some other signifier that cannot continue in this direction
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("You cannot go further this direction")));
				// do not smoothly cut to camera 2
				// OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
		}
	}
}

// Leave camera director and return to default player camera
void ACameraDirector::LeaveCameraDirector()
{
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// If playercontroller not nullptr
	if (OurPlayerController)
	{
		AActor* CurrentViewport;
		CurrentViewport = OurPlayerController->GetViewTarget();
		
		// if CurrentViewport is not nullptr
		if (CurrentViewport) 
		{
			// If PlayerCamera is not nullptr
			if (PlayerCamera) 
			{
				// if CurrentViewport equals one of the CameraDirector cameras
				if (CurrentViewport == CameraOne || CurrentViewport == CameraTwo || CurrentViewport == CameraThree) 
				{
					// reset player viewport to original
					GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("You have left the Alchemy Minigame")));
					OurPlayerController->SetViewTargetWithBlend(PlayerCamera, SmoothBlendTime);
					
				}// end of same camera if
			}// end of playercamera if
		}// end of currentviewport if
	}// end of ourplayercontroller if
}

