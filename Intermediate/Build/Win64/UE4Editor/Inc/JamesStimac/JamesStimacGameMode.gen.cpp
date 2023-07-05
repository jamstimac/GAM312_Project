// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/JamesStimacGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamesStimacGameMode() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacGameMode_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
// End Cross Module References
	void AJamesStimacGameMode::StaticRegisterNativesAJamesStimacGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJamesStimacGameMode_NoRegister()
	{
		return AJamesStimacGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJamesStimacGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamesStimacGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JamesStimacGameMode.h" },
		{ "ModuleRelativePath", "JamesStimacGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamesStimacGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamesStimacGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJamesStimacGameMode_Statics::ClassParams = {
		&AJamesStimacGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJamesStimacGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamesStimacGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJamesStimacGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJamesStimacGameMode, 225321585);
	template<> JAMESSTIMAC_API UClass* StaticClass<AJamesStimacGameMode>()
	{
		return AJamesStimacGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJamesStimacGameMode(Z_Construct_UClass_AJamesStimacGameMode, &AJamesStimacGameMode::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AJamesStimacGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamesStimacGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
