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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOnHitEventActor_GameExplanation::execOnCompHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_otherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AOnHitEventActor_GameExplanation::StaticRegisterNativesAOnHitEventActor_GameExplanation()
	{
		UClass* Class = AOnHitEventActor_GameExplanation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompHit", &AOnHitEventActor_GameExplanation::execOnCompHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics
	{
		struct OnHitEventActor_GameExplanation_eventOnCompHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* otherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnHitEventActor_GameExplanation_eventOnCompHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnHitEventActor_GameExplanation_eventOnCompHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnHitEventActor_GameExplanation_eventOnCompHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnHitEventActor_GameExplanation_eventOnCompHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnHitEventActor_GameExplanation_eventOnCompHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// OnHit between this comp and another actor with a comp, print a message to the screen.\n" },
		{ "ModuleRelativePath", "OnHitEventActor_GameExplanation.h" },
		{ "ToolTip", "OnHit between this comp and another actor with a comp, print a message to the screen." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnHitEventActor_GameExplanation, nullptr, "OnCompHit", nullptr, nullptr, sizeof(OnHitEventActor_GameExplanation_eventOnCompHit_Parms), Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOnHitEventActor_GameExplanation_NoRegister()
	{
		return AOnHitEventActor_GameExplanation::StaticClass();
	}
	struct Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnHitEventActor_GameExplanation_OnCompHit, "OnCompHit" }, // 3375346530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnHitEventActor_GameExplanation.h" },
		{ "ModuleRelativePath", "OnHitEventActor_GameExplanation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::NewProp_MyComp_MetaData[] = {
		{ "Category", "OnHitEventActor_GameExplanation" },
		{ "Comment", "// CollisionComponent\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OnHitEventActor_GameExplanation.h" },
		{ "ToolTip", "CollisionComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnHitEventActor_GameExplanation, MyComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::NewProp_MyComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnHitEventActor_GameExplanation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::ClassParams = {
		&AOnHitEventActor_GameExplanation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnHitEventActor_GameExplanation_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AOnHitEventActor_GameExplanation, 1404713462);
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
