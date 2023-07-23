// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/WorgrootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorgrootActor() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AWorgrootActor_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AWorgrootActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
// End Cross Module References
	void AWorgrootActor::StaticRegisterNativesAWorgrootActor()
	{
	}
	UClass* Z_Construct_UClass_AWorgrootActor_NoRegister()
	{
		return AWorgrootActor::StaticClass();
	}
	struct Z_Construct_UClass_AWorgrootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorgrootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorgrootActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorgrootActor.h" },
		{ "ModuleRelativePath", "WorgrootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorgrootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorgrootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorgrootActor_Statics::ClassParams = {
		&AWorgrootActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWorgrootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorgrootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorgrootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorgrootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorgrootActor, 2195419753);
	template<> JAMESSTIMAC_API UClass* StaticClass<AWorgrootActor>()
	{
		return AWorgrootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorgrootActor(Z_Construct_UClass_AWorgrootActor, &AWorgrootActor::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AWorgrootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorgrootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
