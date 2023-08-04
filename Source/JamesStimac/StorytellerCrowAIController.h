// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "StorytellerCrowAIController.generated.h"

UCLASS()
class JAMESSTIMAC_API AStorytellerCrowAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
private:
	// bools for waypoints
	bool bCanMoveToWPOne;
	bool bCanMoveToWPTwo;
	bool bReturnedToStart;

	// Array of waypoints set within world
	UPROPERTY()
		TArray<AActor*> Waypoints;

	UPROPERTY()
		AActor* OurCurrentWaypoint;

	UPROPERTY()
		ATargetPoint* OurNextWaypoint;

	UPROPERTY()
		ATargetPoint* ReturnedTargetPoint;

	// Get the next waypoint for AI movement
	UFUNCTION()
		ATargetPoint* GetNextWaypoint(AActor* CurrentWaypoint);

	// Move AI to next waypoint
	UFUNCTION()
		void GoToNextWaypoint(ATargetPoint* NextWaypoint);


};
