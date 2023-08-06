// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JamesStimacCharacter.h"
#include "MedKitActor.generated.h"

UCLASS()
class JAMESSTIMAC_API AMedKitActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMedKitActor();

public:	

	// On Overlap with another actor return health
	UFUNCTION()
		void OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor);

	UPROPERTY()
		AJamesStimacCharacter* MyCharacterRef;
};
