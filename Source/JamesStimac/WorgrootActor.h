// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorgrootActor.generated.h"


UCLASS()
class JAMESSTIMAC_API AWorgrootActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AWorgrootActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The Actor that will appear in the world
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UStaticMeshComponent* Herb;

	// declare sphere comp
	UPROPERTY(VisibleAnywhere, category = "Herb Collision Sphere")
		class USphereComponent* HerbCollisionSphere;

	// On Overlap with collision check if player can pick up an herb
	UFUNCTION()
		void OnOverlapBeginCanPickUp(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// On Overlap end with collision check if player has picked up an herb
	UFUNCTION()
		void OnOverlapEndIncrement(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Cast to character and incremenet character herb count
	UFUNCTION()
		void IncrementCharacterHerbCount(AActor* OtherActor);

	// PickUp the herb and IncrementCharacterHerbCount once picked up
	UFUNCTION()
		void PickUp();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
