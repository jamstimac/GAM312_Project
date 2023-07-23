// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/OnHitEventActor_GameExplanation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnHitEventActor_GameExplanation() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AOnHitEventActor_GameExplanation_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AOnHitEventActor_GameExplanation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
// End Cross Module References
	void AOnHitEventActor_GameExplanation::StaticRegisterNativesAOnHitEventActor_GameExplanation()
	{
	}
	UClass* Z_Construct_UClass_AOnHitEventActor_GameExplanation_NoRegister()
	{
		return AOnHitEventActor_GameExplanation::StaticClass();
	}
	struct Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnHitEventActor_GameExplanation.h" },
		{ "ModuleRelativePath", "OnHitEventActor_GameExplanation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnHitEventActor_GameExplanation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::ClassParams = {
		&AOnHitEventActor_GameExplanation::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnHitEventActor_GameExplanation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnHitEventActor_GameExplanation, 3671269161);
	template<> JAMESSTIMAC_API UClass* StaticClass<AOnHitEventActor_GameExplanation>()
	{
		return AOnHitEventActor_GameExplanation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnHitEventActor_GameExplanation(Z_Construct_UClass_AOnHitEventActor_GameExplanation, &AOnHitEventActor_GameExplanation::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AOnHitEventActor_GameExplanation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnHitEventActor_GameExplanation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
