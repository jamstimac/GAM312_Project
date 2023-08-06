// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
struct FVector;
class UPrimitiveComponent;
class AController;
class AActor;
struct FHitResult;
#ifdef JAMESSTIMAC_JamesStimacCharacter_generated_h
#error "JamesStimacCharacter.generated.h already included, missing '#pragma once' in JamesStimacCharacter.h"
#endif
#define JAMESSTIMAC_JamesStimacCharacter_generated_h

#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayFlash); \
	DECLARE_FUNCTION(execSetMagicChange); \
	DECLARE_FUNCTION(execSetMagicState); \
	DECLARE_FUNCTION(execSetMagicValue); \
	DECLARE_FUNCTION(execSetDamageState); \
	DECLARE_FUNCTION(execRecievePointDamage); \
	DECLARE_FUNCTION(execDamageTimer); \
	DECLARE_FUNCTION(execGetMagicIntText); \
	DECLARE_FUNCTION(execGetHealthIntText); \
	DECLARE_FUNCTION(execUpdateMagic); \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execGetMagic); \
	DECLARE_FUNCTION(execGetHealth);


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFlash); \
	DECLARE_FUNCTION(execSetMagicChange); \
	DECLARE_FUNCTION(execSetMagicState); \
	DECLARE_FUNCTION(execSetMagicValue); \
	DECLARE_FUNCTION(execSetDamageState); \
	DECLARE_FUNCTION(execRecievePointDamage); \
	DECLARE_FUNCTION(execDamageTimer); \
	DECLARE_FUNCTION(execGetMagicIntText); \
	DECLARE_FUNCTION(execGetHealthIntText); \
	DECLARE_FUNCTION(execUpdateMagic); \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execGetMagic); \
	DECLARE_FUNCTION(execGetHealth);


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamesStimacCharacter(); \
	friend struct Z_Construct_UClass_AJamesStimacCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAJamesStimacCharacter(); \
	friend struct Z_Construct_UClass_AJamesStimacCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_STANDARD_CONSTRUCTORS \
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


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamesStimacCharacter(AJamesStimacCharacter&&); \
	NO_API AJamesStimacCharacter(const AJamesStimacCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamesStimacCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamesStimacCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamesStimacCharacter)


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AJamesStimacCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AJamesStimacCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AJamesStimacCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AJamesStimacCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AJamesStimacCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AJamesStimacCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AJamesStimacCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AJamesStimacCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__FullHealth() { return STRUCT_OFFSET(AJamesStimacCharacter, FullHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AJamesStimacCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__HealthPercentage() { return STRUCT_OFFSET(AJamesStimacCharacter, HealthPercentage); } \
	FORCEINLINE static uint32 __PPO__PreviousHealth() { return STRUCT_OFFSET(AJamesStimacCharacter, PreviousHealth); } \
	FORCEINLINE static uint32 __PPO__FullMagic() { return STRUCT_OFFSET(AJamesStimacCharacter, FullMagic); } \
	FORCEINLINE static uint32 __PPO__Magic() { return STRUCT_OFFSET(AJamesStimacCharacter, Magic); } \
	FORCEINLINE static uint32 __PPO__MagicPercentage() { return STRUCT_OFFSET(AJamesStimacCharacter, MagicPercentage); } \
	FORCEINLINE static uint32 __PPO__PreviousMagic() { return STRUCT_OFFSET(AJamesStimacCharacter, PreviousMagic); } \
	FORCEINLINE static uint32 __PPO__MagicValue() { return STRUCT_OFFSET(AJamesStimacCharacter, MagicValue); } \
	FORCEINLINE static uint32 __PPO__redFlash() { return STRUCT_OFFSET(AJamesStimacCharacter, redFlash); } \
	FORCEINLINE static uint32 __PPO__MagicCurve() { return STRUCT_OFFSET(AJamesStimacCharacter, MagicCurve); }


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_19_PROLOG
#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_INCLASS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class AJamesStimacCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_JamesStimacCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
