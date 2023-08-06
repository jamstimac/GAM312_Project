// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireActor.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
ACampFireActor::ACampFireActor()
{	
	// commenting this out to stay in line with UnreallCPP HUD Tutorial 
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// PrimaryActorTick.bCanEverTick = true;

	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
	MyBoxComponent->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	RootComponent = MyBoxComponent;

	Fire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("My Fire"));
	Fire->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	Fire->SetupAttachment(RootComponent);

	MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACampFireActor::OnOverlapBegin);
	MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &ACampFireActor::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ACampFireActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACampFireActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
// declare overlap begin function
void ACampFireActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// if we are overlapping something other than ourselves
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		// change bool CanApplyDamage to true
		bCanApplyDamage = true;

		// get ref to Character from cast to OtherActor
		MyCharacter = Cast<AActor>(OtherActor);

		// get sweep result for MyHit from overlap
		MyHit = SweepResult;
		GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ACampFireActor::ApplyFireDamage, 2.2f, true, 0.0f);

	}

}
// declare overlap end function
void ACampFireActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// reset bCanApplyDamage to false
	bCanApplyDamage = false;
	// clear ApplyFireDamage func timer
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
}
/** Apply damage to collidiing element (Called in a event timer) */
void ACampFireActor::ApplyFireDamage()
{
	if (bCanApplyDamage)
	{
		UGameplayStatics::ApplyPointDamage(MyCharacter, 200.0f, GetActorLocation(), MyHit, nullptr, this, FireDamageType);
	}
}

