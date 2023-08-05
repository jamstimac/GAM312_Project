// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/BellhollyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBellhollyActor() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_ABellhollyActor_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_ABellhollyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABellhollyActor::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABellhollyActor::execIncrementCharacterHerbCount)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementCharacterHerbCount(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABellhollyActor::execOnOverlapEndIncrement)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEndIncrement(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABellhollyActor::execOnOverlapBeginCanPickUp)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBeginCanPickUp(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABellhollyActor::StaticRegisterNativesABellhollyActor()
	{
		UClass* Class = ABellhollyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementCharacterHerbCount", &ABellhollyActor::execIncrementCharacterHerbCount },
			{ "OnOverlapBeginCanPickUp", &ABellhollyActor::execOnOverlapBeginCanPickUp },
			{ "OnOverlapEndIncrement", &ABellhollyActor::execOnOverlapEndIncrement },
			{ "PickUp", &ABellhollyActor::execPickUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics
	{
		struct BellhollyActor_eventIncrementCharacterHerbCount_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventIncrementCharacterHerbCount_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Cast to character and incremenet character herb count\n" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "Cast to character and incremenet character herb count" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABellhollyActor, nullptr, "IncrementCharacterHerbCount", nullptr, nullptr, sizeof(BellhollyActor_eventIncrementCharacterHerbCount_Parms), Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics
	{
		struct BellhollyActor_eventOnOverlapBeginCanPickUp_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BellhollyActor_eventOnOverlapBeginCanPickUp_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms), &Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// On Overlap with collision check if player can pick up an herb\n" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "On Overlap with collision check if player can pick up an herb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABellhollyActor, nullptr, "OnOverlapBeginCanPickUp", nullptr, nullptr, sizeof(BellhollyActor_eventOnOverlapBeginCanPickUp_Parms), Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics
	{
		struct BellhollyActor_eventOnOverlapEndIncrement_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapEndIncrement_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapEndIncrement_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapEndIncrement_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BellhollyActor_eventOnOverlapEndIncrement_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// On Overlap end with collision check if player has picked up an herb\n" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "On Overlap end with collision check if player has picked up an herb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABellhollyActor, nullptr, "OnOverlapEndIncrement", nullptr, nullptr, sizeof(BellhollyActor_eventOnOverlapEndIncrement_Parms), Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABellhollyActor_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABellhollyActor_PickUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// PickUp the herb and IncrementCharacterHerbCount once picked up\n" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "PickUp the herb and IncrementCharacterHerbCount once picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABellhollyActor_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABellhollyActor, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABellhollyActor_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABellhollyActor_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABellhollyActor_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABellhollyActor_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABellhollyActor_NoRegister()
	{
		return ABellhollyActor::StaticClass();
	}
	struct Z_Construct_UClass_ABellhollyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Herb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Herb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HerbCollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HerbCollisionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABellhollyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABellhollyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABellhollyActor_IncrementCharacterHerbCount, "IncrementCharacterHerbCount" }, // 1343457284
		{ &Z_Construct_UFunction_ABellhollyActor_OnOverlapBeginCanPickUp, "OnOverlapBeginCanPickUp" }, // 3510819351
		{ &Z_Construct_UFunction_ABellhollyActor_OnOverlapEndIncrement, "OnOverlapEndIncrement" }, // 2852381330
		{ &Z_Construct_UFunction_ABellhollyActor_PickUp, "PickUp" }, // 357354291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABellhollyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BellhollyActor.h" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABellhollyActor_Statics::NewProp_Herb_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// The Actor that will appear in the world\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "The Actor that will appear in the world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABellhollyActor_Statics::NewProp_Herb = { "Herb", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABellhollyActor, Herb), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABellhollyActor_Statics::NewProp_Herb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABellhollyActor_Statics::NewProp_Herb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABellhollyActor_Statics::NewProp_HerbCollisionSphere_MetaData[] = {
		{ "Category", "Herb Collision Sphere" },
		{ "Comment", "// declare sphere comp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BellhollyActor.h" },
		{ "ToolTip", "declare sphere comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABellhollyActor_Statics::NewProp_HerbCollisionSphere = { "HerbCollisionSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABellhollyActor, HerbCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABellhollyActor_Statics::NewProp_HerbCollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABellhollyActor_Statics::NewProp_HerbCollisionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABellhollyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABellhollyActor_Statics::NewProp_Herb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABellhollyActor_Statics::NewProp_HerbCollisionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABellhollyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABellhollyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABellhollyActor_Statics::ClassParams = {
		&ABellhollyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABellhollyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABellhollyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABellhollyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABellhollyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABellhollyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABellhollyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABellhollyActor, 3958119539);
	template<> JAMESSTIMAC_API UClass* StaticClass<ABellhollyActor>()
	{
		return ABellhollyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABellhollyActor(Z_Construct_UClass_ABellhollyActor, &ABellhollyActor::StaticClass, TEXT("/Script/JamesStimac"), TEXT("ABellhollyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABellhollyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
