// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnHitEventActor_GameExplanation.generated.h"

UCLASS()
class JAMESSTIMAC_API AOnHitEventActor_GameExplanation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOnHitEventActor_GameExplanation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// CollisionComponent
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* MyComp;

	// OnHit between this comp and another actor with a comp, print a message to the screen.
	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* otherComp, FVector NormalImpulse , const FHitResult& Hit);


};
