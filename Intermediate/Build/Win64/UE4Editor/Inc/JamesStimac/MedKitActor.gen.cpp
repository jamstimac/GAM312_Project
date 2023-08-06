// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/MedKitActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMedKitActor() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AMedKitActor_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AMedKitActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMedKitActor::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AMedKitActor::StaticRegisterNativesAMedKitActor()
	{
		UClass* Class = AMedKitActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AMedKitActor::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics
	{
		struct MedKitActor_eventOnOverlap_Parms
		{
			AActor* MyOverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyOverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::NewProp_MyOverlappedActor = { "MyOverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MedKitActor_eventOnOverlap_Parms, MyOverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MedKitActor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::NewProp_MyOverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// On Overlap with another actor return health\n" },
		{ "ModuleRelativePath", "MedKitActor.h" },
		{ "ToolTip", "On Overlap with another actor return health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedKitActor, nullptr, "OnOverlap", nullptr, nullptr, sizeof(MedKitActor_eventOnOverlap_Parms), Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedKitActor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedKitActor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMedKitActor_NoRegister()
	{
		return AMedKitActor::StaticClass();
	}
	struct Z_Construct_UClass_AMedKitActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacterRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacterRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMedKitActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMedKitActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMedKitActor_OnOverlap, "OnOverlap" }, // 3058219162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedKitActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MedKitActor.h" },
		{ "ModuleRelativePath", "MedKitActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedKitActor_Statics::NewProp_MyCharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "MedKitActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMedKitActor_Statics::NewProp_MyCharacterRef = { "MyCharacterRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMedKitActor, MyCharacterRef), Z_Construct_UClass_AJamesStimacCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMedKitActor_Statics::NewProp_MyCharacterRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMedKitActor_Statics::NewProp_MyCharacterRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMedKitActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedKitActor_Statics::NewProp_MyCharacterRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMedKitActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMedKitActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMedKitActor_Statics::ClassParams = {
		&AMedKitActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMedKitActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMedKitActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMedKitActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMedKitActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMedKitActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMedKitActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMedKitActor, 3168642265);
	template<> JAMESSTIMAC_API UClass* StaticClass<AMedKitActor>()
	{
		return AMedKitActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMedKitActor(Z_Construct_UClass_AMedKitActor, &AMedKitActor::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AMedKitActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMedKitActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
