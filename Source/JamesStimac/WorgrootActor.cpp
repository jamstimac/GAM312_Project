// Fill out your copyright notice in the Description page of Project Settings.


#include "WorgrootActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "JamesStimacCharacter.h"

// Sets default values for this actor's properties
AWorgrootActor::AWorgrootActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize collision sphere
	HerbCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Herb Sphere Component"));
	HerbCollisionSphere->InitSphereRadius(150.0f);
	HerbCollisionSphere->SetCollisionProfileName("Trigger");
	HerbCollisionSphere->SetupAttachment(RootComponent);

	// Static Mesh initialization
	Herb = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	Herb->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	Herb->SetMobility(EComponentMobility::Stationary);
	Herb->SetWorldScale3D(FVector(2, 2, 2));
	Herb->SetRelativeScale3D(FVector(2, 2, 2));
	Herb->SetupAttachment(HerbCollisionSphere);

	// constructor helpers for Static meshes for herb
	ConstructorHelpers::FObjectFinder<UStaticMesh>WorgMeshObj(TEXT("StaticMesh'/Game/StaticMeshes/Worgroot.Worgroot'"));
	if (WorgMeshObj.Succeeded())
	{
		Herb->SetStaticMesh(WorgMeshObj.Object);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Could not find Worgroot SM")));
	}

	// bind Canpickup function to onbegin overlap
	HerbCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AWorgrootActor::OnOverlapBeginCanPickUp);
	HerbCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AWorgrootActor::OnOverlapEndIncrement);

}

// Called when the game starts or when spawned
void AWorgrootActor::BeginPlay()
{
	Super::BeginPlay();

	// get playercontroller to enable input
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (OurPlayerController)
	{
		EnableInput(OurPlayerController);
	}
}

// Called every frame
void AWorgrootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// On Overlap with collision check if player can pick up an herb
void AWorgrootActor::OnOverlapBeginCanPickUp(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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
				InputComponent->BindAction("Interact", IE_Pressed, this, &AWorgrootActor::PickUp);
			}
			//FIXME: add code to connect input specific HUD elements with collision overlap
		}
	}
}

// On Overlap end with collision check if player has picked up an herb
void AWorgrootActor::OnOverlapEndIncrement(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (this->IsActorBeingDestroyed())
		{
			IncrementCharacterHerbCount(OtherActor);
		}
		//FIXME: add code to disconnect input specific HUD elements with collision overlap
		InputComponent->RemoveActionBinding("Interact", IE_Pressed);
	}
}

// Cast to character and incremenet character herb count once picked up
void AWorgrootActor::IncrementCharacterHerbCount(AActor* OtherActor)
{
	AJamesStimacCharacter* OtherCharacter = Cast<AJamesStimacCharacter>(OtherActor);
	// if other actor is player character
	if (OtherCharacter != NULL) 
	{
		// increment herb count
		OtherCharacter->WorgrootCount++;
		// show what current herb count for Worgroot is
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Current Worgroot count: %i"), OtherCharacter->WorgrootCount));
	}
}

// PickUp the herb and IncrementCharacterHerbCount once picked up
void AWorgrootActor::PickUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("You've picked up a Worgroot!")));
	// destroy actor to act like it was picked up (can be transitioned with an animation once that is implemented for character)
	this->Destroy();
}

