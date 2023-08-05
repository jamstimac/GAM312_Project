// Fill out your copyright notice in the Description page of Project Settings.


#include "OnHitEventActor_GameExplanation.h"
#include "Components/BoxComponent.h"

// Sets default values
AOnHitEventActor_GameExplanation::AOnHitEventActor_GameExplanation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// A simple collision sphere
	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	MyComp->SetSimulatePhysics(true);
	MyComp->SetNotifyRigidBodyCollision(true);

	MyComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	MyComp->OnComponentHit.AddDynamic(this, &AOnHitEventActor_GameExplanation::OnCompHit);

	RootComponent = MyComp;
}

// Called when the game starts or when spawned
void AOnHitEventActor_GameExplanation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOnHitEventActor_GameExplanation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AOnHitEventActor_GameExplanation::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// FIXME: Activates instantly even though the actor doesn't hit another actor until much after it prints to screen
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (GEngine)
		{
			// print to screen the GameIntroMessage (want to make this a variable)
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Welcome to the land of Alghemmy. There is much to do. Head into town and discover your first potion.")));
			
			// Once Printed, remove component.
			MyComp->DestroyComponent();
		}
	}
	
	
}