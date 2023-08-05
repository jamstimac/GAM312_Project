// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitchActor.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
ALightSwitchActor::ALightSwitchActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set light intensity for pointlight
	LightIntensity = 3000.0f;

	// initialize point light
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = LightIntensity;
	// PointLight->bVisible is no longer accessible except through helper functions
	PointLight->SetVisibility(true);
	RootComponent = PointLight;

	// Initialize collision sphere
	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere Component"));
	LightSphere->InitSphereRadius(300.0f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetupAttachment(RootComponent);

	// key lights to overlap events
	LightSphere->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchActor::OnOverlapBegin);
	LightSphere->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchActor::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ALightSwitchActor::BeginPlay()
{
	Super::BeginPlay();
	
	// show collision radius
	DrawDebugSphere(GetWorld(), GetActorLocation(), 300.f, 50, FColor::Green, true, -1, 0, 2);
}

// Called every frame
void ALightSwitchActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// When Entering Collision, toggleLight()
void ALightSwitchActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Light On")));
		ToggleLight();
	}
}

// When leaving collision, toggleLight()
void ALightSwitchActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, FString::Printf(TEXT("Light ff")));
		ToggleLight();
	}
}

// called in OnOverlapEnd and OnOverlapBegin (toggles bVisible value of USceneComponent)
void ALightSwitchActor::ToggleLight()
{
	// set bVisible value
	PointLight->ToggleVisibility();
}

