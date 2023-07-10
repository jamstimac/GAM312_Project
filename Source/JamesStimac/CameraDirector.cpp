// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

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
	
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float TimeBetweenCameraChange = 2.0f;
	const float SmoothBlendTime = 0.75f; // sets time to smooth out transition from One camera to the next

	TimeToNextCameraChange -= DeltaTime;

	if (TimeToNextCameraChange <= 0.0f)
	{
		TimeToNextCameraChange += TimeBetweenCameraChange;
		
		// find the actor that handles control for the local player
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0); 

		// if OurPlayerController is true
		if (OurPlayerController)
		{
			// both sides of this could be updated to make sure nullptrs are not used as cameras
			// If CameraTwo is true and Our current target is CameraOne
			if (CameraTwo && (OurPlayerController->GetViewTarget() == CameraOne))
			{
				// cut smoothly to camera 2
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
			// if CameraOne is true
			else if (CameraOne)
			{
				// instantly cut to camera 1
				OurPlayerController->SetViewTarget(CameraOne);
			}
		}
	}

}

