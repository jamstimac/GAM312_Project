// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/JamesStimacHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamesStimacHUD() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacHUD_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
// End Cross Module References
	void AJamesStimacHUD::StaticRegisterNativesAJamesStimacHUD()
	{
	}
	UClass* Z_Construct_UClass_AJamesStimacHUD_NoRegister()
	{
		return AJamesStimacHUD::StaticClass();
	}
	struct Z_Construct_UClass_AJamesStimacHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamesStimacHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "JamesStimacHUD.h" },
		{ "ModuleRelativePath", "JamesStimacHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamesStimacHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamesStimacHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJamesStimacHUD_Statics::ClassParams = {
		&AJamesStimacHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJamesStimacHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamesStimacHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamesStimacHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJamesStimacHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJamesStimacHUD, 745874189);
	template<> JAMESSTIMAC_API UClass* StaticClass<AJamesStimacHUD>()
	{
		return AJamesStimacHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJamesStimacHUD(Z_Construct_UClass_AJamesStimacHUD, &AJamesStimacHUD::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AJamesStimacHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamesStimacHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
