// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/JamesStimacCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamesStimacCharacter() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacCharacter_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJamesStimacCharacter::execPlayFlash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayFlash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execSetMagicChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MagicChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagicChange(Z_Param_MagicChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execSetMagicState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagicState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execSetMagicValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagicValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execSetDamageState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execRecievePointDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecievePointDamage(Z_Param_Damage,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Out_HitInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execDamageTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execGetMagicIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execGetHealthIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execUpdateMagic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMagic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execUpdateHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth(Z_Param_HealthChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execGetMagic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMagic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJamesStimacCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	void AJamesStimacCharacter::StaticRegisterNativesAJamesStimacCharacter()
	{
		UClass* Class = AJamesStimacCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTimer", &AJamesStimacCharacter::execDamageTimer },
			{ "GetHealth", &AJamesStimacCharacter::execGetHealth },
			{ "GetHealthIntText", &AJamesStimacCharacter::execGetHealthIntText },
			{ "GetMagic", &AJamesStimacCharacter::execGetMagic },
			{ "GetMagicIntText", &AJamesStimacCharacter::execGetMagicIntText },
			{ "PlayFlash", &AJamesStimacCharacter::execPlayFlash },
			{ "RecievePointDamage", &AJamesStimacCharacter::execRecievePointDamage },
			{ "SetDamageState", &AJamesStimacCharacter::execSetDamageState },
			{ "SetMagicChange", &AJamesStimacCharacter::execSetMagicChange },
			{ "SetMagicState", &AJamesStimacCharacter::execSetMagicState },
			{ "SetMagicValue", &AJamesStimacCharacter::execSetMagicValue },
			{ "UpdateHealth", &AJamesStimacCharacter::execUpdateHealth },
			{ "UpdateMagic", &AJamesStimacCharacter::execUpdateMagic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Damage Timer */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Damage Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "DamageTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics
	{
		struct JamesStimacCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Get Health */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Get Health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(JamesStimacCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics
	{
		struct JamesStimacCharacter_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Get Magic text */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Get Magic text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "GetHealthIntText", nullptr, nullptr, sizeof(JamesStimacCharacter_eventGetHealthIntText_Parms), Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics
	{
		struct JamesStimacCharacter_eventGetMagic_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventGetMagic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Get Magic */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Get Magic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "GetMagic", nullptr, nullptr, sizeof(JamesStimacCharacter_eventGetMagic_Parms), Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_GetMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_GetMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics
	{
		struct JamesStimacCharacter_eventGetMagicIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventGetMagicIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Get Magic Text */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Get Magic Text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "GetMagicIntText", nullptr, nullptr, sizeof(JamesStimacCharacter_eventGetMagicIntText_Parms), Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics
	{
		struct JamesStimacCharacter_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JamesStimacCharacter_eventPlayFlash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JamesStimacCharacter_eventPlayFlash_Parms), &Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Play Flash */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Play Flash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "PlayFlash", nullptr, nullptr, sizeof(JamesStimacCharacter_eventPlayFlash_Parms), Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics
	{
		struct JamesStimacCharacter_eventRecievePointDamage_Parms
		{
			float Damage;
			const UDamageType* DamageType;
			FVector HitLocation;
			FVector HitNormal;
			UPrimitiveComponent* HitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			AController* InstigatedBy;
			AActor* DamageCauser;
			FHitResult HitInfo;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventRecievePointDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::NewProp_HitInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** runs when interacting weith an element that calls ApplyPointDamage */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "runs when interacting weith an element that calls ApplyPointDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "RecievePointDamage", nullptr, nullptr, sizeof(JamesStimacCharacter_eventRecievePointDamage_Parms), Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set damage State */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Set damage State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "SetDamageState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics
	{
		struct JamesStimacCharacter_eventSetMagicChange_Parms
		{
			float MagicChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::NewProp_MagicChange = { "MagicChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventSetMagicChange_Parms, MagicChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::NewProp_MagicChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Magic Change*/" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Set Magic Change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "SetMagicChange", nullptr, nullptr, sizeof(JamesStimacCharacter_eventSetMagicChange_Parms), Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Magic State*/" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Set Magic State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "SetMagicState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  Set Magic Value */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Set Magic Value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "SetMagicValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics
	{
		struct JamesStimacCharacter_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacCharacter_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::NewProp_HealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Update Health */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Update Health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(JamesStimacCharacter_eventUpdateHealth_Parms), Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Update Magic */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Update Magic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacCharacter, nullptr, "UpdateMagic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJamesStimacCharacter_NoRegister()
	{
		return AJamesStimacCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJamesStimacCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_redFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOverheatMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunOverheatMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorgrootCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorgrootCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElfsearCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ElfsearCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BellhollyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BellhollyCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamesStimacCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJamesStimacCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJamesStimacCharacter_DamageTimer, "DamageTimer" }, // 525185443
		{ &Z_Construct_UFunction_AJamesStimacCharacter_GetHealth, "GetHealth" }, // 2319105695
		{ &Z_Construct_UFunction_AJamesStimacCharacter_GetHealthIntText, "GetHealthIntText" }, // 3086256326
		{ &Z_Construct_UFunction_AJamesStimacCharacter_GetMagic, "GetMagic" }, // 3520142100
		{ &Z_Construct_UFunction_AJamesStimacCharacter_GetMagicIntText, "GetMagicIntText" }, // 1769605422
		{ &Z_Construct_UFunction_AJamesStimacCharacter_PlayFlash, "PlayFlash" }, // 4204842723
		{ &Z_Construct_UFunction_AJamesStimacCharacter_RecievePointDamage, "RecievePointDamage" }, // 2459543648
		{ &Z_Construct_UFunction_AJamesStimacCharacter_SetDamageState, "SetDamageState" }, // 511876741
		{ &Z_Construct_UFunction_AJamesStimacCharacter_SetMagicChange, "SetMagicChange" }, // 3605374081
		{ &Z_Construct_UFunction_AJamesStimacCharacter_SetMagicState, "SetMagicState" }, // 2973982660
		{ &Z_Construct_UFunction_AJamesStimacCharacter_SetMagicValue, "SetMagicValue" }, // 858472334
		{ &Z_Construct_UFunction_AJamesStimacCharacter_UpdateHealth, "UpdateHealth" }, // 2759025922
		{ &Z_Construct_UFunction_AJamesStimacCharacter_UpdateMagic, "UpdateMagic" }, // 3737608196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JamesStimacCharacter.h" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JamesStimacCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JamesStimacCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Health Variables*/" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Health Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullHealth = { "FullHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FullHealth), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_HealthPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, PreviousHealth), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Magic Variables */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Magic Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullMagic = { "FullMagic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FullMagic), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullMagic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, Magic), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Magic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Magic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicPercentage_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicPercentage = { "MagicPercentage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, MagicPercentage), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousMagic = { "PreviousMagic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, PreviousMagic), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousMagic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicValue_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicValue = { "MagicValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, MagicValue), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_redFlash_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_redFlash = { "redFlash", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, redFlash), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_redFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_redFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicCurve_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicCurve = { "MagicCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, MagicCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunDefaultMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Materials to update gun while using */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Materials to update gun while using" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunDefaultMaterial = { "GunDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, GunDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunDefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOverheatMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOverheatMaterial = { "GunOverheatMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, GunOverheatMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOverheatMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOverheatMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, ProjectileClass), Z_Construct_UClass_AJamesStimacProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AJamesStimacCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AJamesStimacCharacter), &Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_WorgrootCount_MetaData[] = {
		{ "Category", "HerbCount" },
		{ "Comment", "/** How many of Worgroot are acquired */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "How many of Worgroot are acquired" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_WorgrootCount = { "WorgrootCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, WorgrootCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_WorgrootCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_WorgrootCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ElfsearCount_MetaData[] = {
		{ "Category", "HerbCount" },
		{ "Comment", "/** How many of Elfear are acquired */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "How many of Elfear are acquired" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ElfsearCount = { "ElfsearCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, ElfsearCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ElfsearCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ElfsearCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BellhollyCount_MetaData[] = {
		{ "Category", "HerbCount" },
		{ "Comment", "/** How many of Hollybell are acquired */" },
		{ "ModuleRelativePath", "JamesStimacCharacter.h" },
		{ "ToolTip", "How many of Hollybell are acquired" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BellhollyCount = { "BellhollyCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamesStimacCharacter, BellhollyCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BellhollyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BellhollyCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamesStimacCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FullMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_Magic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_PreviousMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_redFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_MagicCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOverheatMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_WorgrootCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_ElfsearCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamesStimacCharacter_Statics::NewProp_BellhollyCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamesStimacCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamesStimacCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJamesStimacCharacter_Statics::ClassParams = {
		&AJamesStimacCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJamesStimacCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJamesStimacCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamesStimacCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJamesStimacCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJamesStimacCharacter, 1055614639);
	template<> JAMESSTIMAC_API UClass* StaticClass<AJamesStimacCharacter>()
	{
		return AJamesStimacCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJamesStimacCharacter(Z_Construct_UClass_AJamesStimacCharacter, &AJamesStimacCharacter::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AJamesStimacCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamesStimacCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
