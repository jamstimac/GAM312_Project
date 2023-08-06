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
	JAMESSTIMAC_API UEnum* Z_Construct_UEnum_JamesStimac_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_JamesStimac();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacGameMode_NoRegister();
	JAMESSTIMAC_API UClass* Z_Construct_UClass_AJamesStimacGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	static UEnum* EGamePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JamesStimac_EGamePlayState, Z_Construct_UPackage__Script_JamesStimac(), TEXT("EGamePlayState"));
		}
		return Singleton;
	}
	template<> JAMESSTIMAC_API UEnum* StaticEnum<EGamePlayState>()
	{
		return EGamePlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePlayState(EGamePlayState_StaticEnum, TEXT("/Script/JamesStimac"), TEXT("EGamePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JamesStimac_EGamePlayState_Hash() { return 872214924U; }
	UEnum* Z_Construct_UEnum_JamesStimac_EGamePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JamesStimac();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePlayState"), 0, Get_Z_Construct_UEnum_JamesStimac_EGamePlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
				{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
				{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** GamePlayState enum declaration */" },
				{ "EGameOver.Name", "EGamePlayState::EGameOver" },
				{ "EPlaying.Name", "EGamePlayState::EPlaying" },
				{ "EUnknown.Name", "EGamePlayState::EUnknown" },
				{ "ModuleRelativePath", "JamesStimacGameMode.h" },
				{ "ToolTip", "GamePlayState enum declaration" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JamesStimac,
				nullptr,
				"EGamePlayState",
				"EGamePlayState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AJamesStimacGameMode::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void AJamesStimacGameMode::StaticRegisterNativesAJamesStimacGameMode()
	{
		UClass* Class = AJamesStimacGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AJamesStimacGameMode::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics
	{
		struct JamesStimacGameMode_eventGetCurrentState_Parms
		{
			EGamePlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JamesStimacGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_JamesStimac_EGamePlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Returns the current playing state */" },
		{ "ModuleRelativePath", "JamesStimacGameMode.h" },
		{ "ToolTip", "Returns the current playing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamesStimacGameMode, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(JamesStimacGameMode_eventGetCurrentState_Parms), Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJamesStimacGameMode_NoRegister()
	{
		return AJamesStimacGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJamesStimacGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AJamesStimacGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJamesStimacGameMode_GetCurrentState, "GetCurrentState" }, // 2989326043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamesStimacGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class declaration */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JamesStimacGameMode.h" },
		{ "ModuleRelativePath", "JamesStimacGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Class declaration" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AJamesStimacGameMode, 998898584);
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
