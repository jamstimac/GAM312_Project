// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/OnHitEvent_GameExplanation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnHitEvent_GameExplanation() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AOnHitEvent_GameExplanation_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AOnHitEvent_GameExplanation();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
// End Cross Module References
	void AOnHitEvent_GameExplanation::StaticRegisterNativesAOnHitEvent_GameExplanation()
	{
	}
	UClass* Z_Construct_UClass_AOnHitEvent_GameExplanation_NoRegister()
	{
		return AOnHitEvent_GameExplanation::StaticClass();
	}
	struct Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OnHitEvent_GameExplanation.h" },
		{ "ModuleRelativePath", "OnHitEvent_GameExplanation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnHitEvent_GameExplanation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::ClassParams = {
		&AOnHitEvent_GameExplanation::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnHitEvent_GameExplanation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnHitEvent_GameExplanation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnHitEvent_GameExplanation, 3773926615);
	template<> JAMESSTIMAC_API UClass* StaticClass<AOnHitEvent_GameExplanation>()
	{
		return AOnHitEvent_GameExplanation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnHitEvent_GameExplanation(Z_Construct_UClass_AOnHitEvent_GameExplanation, &AOnHitEvent_GameExplanation::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AOnHitEvent_GameExplanation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnHitEvent_GameExplanation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
