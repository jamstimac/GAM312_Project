// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamesStimac/StorytellerCrowAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorytellerCrowAIController() {}
// Cross Module References
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AStorytellerCrowAIController_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AStorytellerCrowAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStorytellerCrowAIController::execGoToNextWaypoint)
	{
		P_GET_OBJECT(ATargetPoint,Z_Param_NextWaypoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToNextWaypoint(Z_Param_NextWaypoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStorytellerCrowAIController::execGetNextWaypoint)
	{
		P_GET_OBJECT(AActor,Z_Param_CurrentWaypoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetNextWaypoint(Z_Param_CurrentWaypoint);
		P_NATIVE_END;
	}
	void AStorytellerCrowAIController::StaticRegisterNativesAStorytellerCrowAIController()
	{
		UClass* Class = AStorytellerCrowAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextWaypoint", &AStorytellerCrowAIController::execGetNextWaypoint },
			{ "GoToNextWaypoint", &AStorytellerCrowAIController::execGoToNextWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics
	{
		struct StorytellerCrowAIController_eventGetNextWaypoint_Parms
		{
			AActor* CurrentWaypoint;
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWaypoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::NewProp_CurrentWaypoint = { "CurrentWaypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorytellerCrowAIController_eventGetNextWaypoint_Parms, CurrentWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorytellerCrowAIController_eventGetNextWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::NewProp_CurrentWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the next waypoint for AI movement\n" },
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
		{ "ToolTip", "Get the next waypoint for AI movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorytellerCrowAIController, nullptr, "GetNextWaypoint", nullptr, nullptr, sizeof(StorytellerCrowAIController_eventGetNextWaypoint_Parms), Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics
	{
		struct StorytellerCrowAIController_eventGoToNextWaypoint_Parms
		{
			ATargetPoint* NextWaypoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorytellerCrowAIController_eventGoToNextWaypoint_Parms, NextWaypoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::NewProp_NextWaypoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Move AI to next waypoint\n" },
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
		{ "ToolTip", "Move AI to next waypoint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorytellerCrowAIController, nullptr, "GoToNextWaypoint", nullptr, nullptr, sizeof(StorytellerCrowAIController_eventGoToNextWaypoint_Parms), Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStorytellerCrowAIController_NoRegister()
	{
		return AStorytellerCrowAIController::StaticClass();
	}
	struct Z_Construct_UClass_AStorytellerCrowAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCurrentWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCurrentWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurNextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurNextWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnedTargetPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnedTargetPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStorytellerCrowAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_JamesStimac,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStorytellerCrowAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStorytellerCrowAIController_GetNextWaypoint, "GetNextWaypoint" }, // 34239658
		{ &Z_Construct_UFunction_AStorytellerCrowAIController_GoToNextWaypoint, "GoToNextWaypoint" }, // 4104038589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorytellerCrowAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StorytellerCrowAIController.h" },
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Comment", "// Array of waypoints set within world\n" },
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
		{ "ToolTip", "Array of waypoints set within world" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorytellerCrowAIController, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurCurrentWaypoint_MetaData[] = {
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurCurrentWaypoint = { "OurCurrentWaypoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorytellerCrowAIController, OurCurrentWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurCurrentWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurCurrentWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurNextWaypoint_MetaData[] = {
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurNextWaypoint = { "OurNextWaypoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorytellerCrowAIController, OurNextWaypoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurNextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurNextWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_ReturnedTargetPoint_MetaData[] = {
		{ "ModuleRelativePath", "StorytellerCrowAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_ReturnedTargetPoint = { "ReturnedTargetPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorytellerCrowAIController, ReturnedTargetPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_ReturnedTargetPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_ReturnedTargetPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStorytellerCrowAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurCurrentWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_OurNextWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorytellerCrowAIController_Statics::NewProp_ReturnedTargetPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStorytellerCrowAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStorytellerCrowAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStorytellerCrowAIController_Statics::ClassParams = {
		&AStorytellerCrowAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStorytellerCrowAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStorytellerCrowAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStorytellerCrowAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStorytellerCrowAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStorytellerCrowAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStorytellerCrowAIController, 48228845);
	template<> JAMESSTIMAC_API UClass* StaticClass<AStorytellerCrowAIController>()
	{
		return AStorytellerCrowAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStorytellerCrowAIController(Z_Construct_UClass_AStorytellerCrowAIController, &AStorytellerCrowAIController::StaticClass, TEXT("/Script/JamesStimac"), TEXT("AStorytellerCrowAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStorytellerCrowAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
