// Fill out your copyright notice in the Description page of Project Settings.


#include "MedKitActor.h"

// Sets default values
AMedKitActor::AMedKitActor()
{
	// commenting this out in line with UnrealCPP HUD Tutorial
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// PrimaryActorTick.bCanEverTick = true;

	// Bind OnOverlap function to OnActorBeginOverlap
	OnActorBeginOverlap.AddDynamic(this, &AMedKitActor::OnOverlap);
}

// On Overlap with another actor return health
void AMedKitActor::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, FString::Printf(TEXT("Getting healed 1 ")));
	if ((OtherActor != nullptr) && (OtherActor != this))
	{

		// get character ref from Cast to OtherActor
		MyCharacterRef = Cast<AJamesStimacCharacter>(OtherActor);

		GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, FString::Printf(TEXT("Getting healed 2 ")));
		if (MyCharacterRef && (MyCharacterRef->GetHealth() < 1.0f))
		{
			GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, FString::Printf(TEXT("Getting healed 3 ")));
			MyCharacterRef->UpdateHealth(100.0f);
			this->Destroy();
		}
	}
}

