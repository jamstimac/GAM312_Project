// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "JamesStimacHUD.generated.h"

UCLASS()
class AJamesStimacHUD : public AHUD
{
	GENERATED_BODY()

public:
	AJamesStimacHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

