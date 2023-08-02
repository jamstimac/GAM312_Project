// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAMESSTIMAC_JamesStimacCharacter_generated_h
#error "JamesStimacCharacter.generated.h already included, missing '#pragma once' in JamesStimacCharacter.h"
#endif
#define JAMESSTIMAC_JamesStimacCharacter_generated_h

#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_RPC_WRAPPERS
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamesStimacCharacter(); \
	friend struct Z_Construct_UClass_AJamesStimacCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAJamesStimacCharacter(); \
	friend struct Z_Construct_UClass_AJamesStimacCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJamesStimacCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJamesStimacCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamesStimacCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamesStimacCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamesStimacCharacter(AJamesStimacCharacter&&); \
	NO_API AJamesStimacCharacter(const AJamesStimacCharacter&); \
public:


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamesStimacCharacter(AJamesStimacCharacter&&); \
	NO_API AJamesStimacCharacter(const AJamesStimacCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamesStimacCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamesStimacCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AJamesStimacCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AJamesStimacCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AJamesStimacCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AJamesStimacCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AJamesStimacCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AJamesStimacCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AJamesStimacCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AJamesStimacCharacter, L_MotionController); }


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_17_PROLOG
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_INCLASS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class AJamesStimacCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_JamesStimacCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
