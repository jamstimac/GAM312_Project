// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Inputcomponent.h"

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
	// bind input from Swap Camera to functs.
	if (InputComponent)
	{
		InputComponent->BindAction("CameraSwapNext", IE_Pressed, this, &ACameraDirector::NextCamera);
		InputComponent->BindAction("CameraSwapPrev", IE_Pressed, this, &ACameraDirector::PreviousCamera);
	}
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// called once at begin play to set first camera, then checks and continues to select cameraTwo or CameraThree
void ACameraDirector::NextCamera() {
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// If CameraTwo is true and Our current target is CameraOne
	if (OurPlayerController) 
	{
		// if all cameras true
		if (CameraOne && CameraTwo && CameraThree) {
			// if on Camera 1
			if (OurPlayerController->GetViewTarget() == CameraOne)
			{
				// cut smoothly to camera 2
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
			// if on Camera 2
			else if (OurPlayerController->GetViewTarget() == CameraTwo)
			{
				// smoothly cut to camera 3
				OurPlayerController->SetViewTargetWithBlend(CameraThree, SmoothBlendTime);
			}
			// either when not on a camera yet or when on camera 3
			else 
			{
				// smoothly cut to camera 1
				OurPlayerController->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
			}
		}
	}
}

void ACameraDirector::PreviousCamera() {
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	// If CameraTwo is true and Our current target is CameraOne
	if (OurPlayerController)
	{
		// If all cameras true
		if (CameraOne && CameraTwo && CameraThree) {
			// if on CameraOne 
			if (OurPlayerController->GetViewTarget() == CameraOne)
			{
				// cut smoothly to camera 3
				OurPlayerController->SetViewTargetWithBlend(CameraThree, SmoothBlendTime);
			}
			// if on CameraTwo
			else if (OurPlayerController->GetViewTarget() == CameraTwo)
			{
				// smoothly cut to camera 3
				OurPlayerController->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
			}
			// ie. if on Camera 1
			else
			{
				// smoothly cut to camera 2
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
		}
	}
}
