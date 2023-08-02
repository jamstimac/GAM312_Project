// Fill out your copyright notice in the Description page of Project Settings.


#include "HerbActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "JamesStimacCharacter.h"

// Sets default values
AHerbActor::AHerbActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize collision sphere
	HerbCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Herb Sphere Component"));
	HerbCollisionSphere->InitSphereRadius(150.0f);
	HerbCollisionSphere->SetCollisionProfileName("Trigger");
	HerbCollisionSphere->SetupAttachment(RootComponent);

	// bind Canpickup function to onbegin overlap
	HerbCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AHerbActor::OnOverlapBeginCanPickUp);
	HerbCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AHerbActor::OnOverlapEndIncrement);
}

// Called when the game starts or when spawned
void AHerbActor::BeginPlay()
{
	Super::BeginPlay();
	
	// enable input
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (OurPlayerController)
	{
		EnableInput(OurPlayerController);
	}

	
}

// Called every frame
void AHerbActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// PickUp the herb and IncrementCharacterHerbCount once picked up
void AHerbActor::PickUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("You've picked up this herb")));
	// destroy actor to act like it was picked up (can be transitioned with an animation once that is implemented for character)
	Herb->Destroy();
	this->Destroy();
}

// Cast to character and incremenet character herb count
void AHerbActor::IncrementCharacterHerbCount(AActor* OtherActor)
{
	AJamesStimacCharacter* OtherCharacter = Cast<AJamesStimacCharacter>(OtherActor);
	// if other actor is player character
	if (OtherCharacter != NULL) {

		//FIXME: currently only implemented for Worgroot (need to find a way to diferentiate the names of individual herbactors
		OtherCharacter->WorgrootCount++;

		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Current herb count Worgroot: %i"), OtherCharacter->WorgrootCount));
		// increment counts for individual herbs
		/*if (CurrentHerbName == TEXT("Hollybell"))
		{
			OtherCharacter->HollybellCount++;
		}
		if (CurrentHerbName == TEXT("Worgroot"))
		{
		OtherCharacter->WorgrootCount++;
		}
		if (CurrentHerbName == TEXT("Elfsear"))
		{
			OtherCharacter->ElfsearCount++;
		}*/
	}
}

// bind pickup function with interact input mapping when player is overlapping collision
void AHerbActor::OnOverlapBeginCanPickUp(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AJamesStimacCharacter* OtherCharacter = Cast<AJamesStimacCharacter>(OtherActor);

	// if colliding actor is player character
	if (OtherCharacter != NULL) {
		// if reference not null and not duplicate
		if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
		{
			// uses base engine InputComponent to bind Interact keybinding to Function PickUp
			if (InputComponent)
			{
				InputComponent->BindAction("Interact", IE_Pressed, this, &AHerbActor::PickUp);
			}
			//FIXME: add code to connect input specific HUD elements with collision overlap
		}
	}
}

void AHerbActor::OnOverlapEndIncrement(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (this->IsActorBeingDestroyed())
		IncrementCharacterHerbCount(OtherActor);
		
		//FIXME: add code to disconnect input specific HUD elements with collision overlap
	}
}

// bind increment function with interact input mapping when player leaves collision && actor is destroyed



