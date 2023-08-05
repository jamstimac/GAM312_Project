// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

UCLASS()
class JAMESSTIMAC_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Cameras are assigned in Unreal Editor
	UPROPERTY(EditAnywhere, Category = Cameras)
		AActor* CameraOne;

	UPROPERTY(EditAnywhere, Category = Cameras)
		AActor* CameraTwo;
	
	UPROPERTY(EditAnywhere, Category = Cameras)
		AActor* CameraThree;

	UPROPERTY()
		AActor* PlayerCamera;

	// sets time to smooth out transition from One camera to the next
	const float SmoothBlendTime = 0.85f; 

	// from the current camera, switch to the next camera in rotation
	void NextCamera();

	// from the current camera, switch to the previous camera in rotation
	void PreviousCamera();

	// leave these viewports
	void LeaveCameraDirector();

	
};
