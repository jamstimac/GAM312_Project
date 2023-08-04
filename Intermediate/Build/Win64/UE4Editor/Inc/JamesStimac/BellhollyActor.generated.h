// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JAMESSTIMAC_BellhollyActor_generated_h
#error "BellhollyActor.generated.h already included, missing '#pragma once' in BellhollyActor.h"
#endif
#define JAMESSTIMAC_BellhollyActor_generated_h

#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execIncrementCharacterHerbCount); \
	DECLARE_FUNCTION(execOnOverlapEndIncrement); \
	DECLARE_FUNCTION(execOnOverlapBeginCanPickUp);


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execIncrementCharacterHerbCount); \
	DECLARE_FUNCTION(execOnOverlapEndIncrement); \
	DECLARE_FUNCTION(execOnOverlapBeginCanPickUp);


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABellhollyActor(); \
	friend struct Z_Construct_UClass_ABellhollyActor_Statics; \
public: \
	DECLARE_CLASS(ABellhollyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ABellhollyActor)


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABellhollyActor(); \
	friend struct Z_Construct_UClass_ABellhollyActor_Statics; \
public: \
	DECLARE_CLASS(ABellhollyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ABellhollyActor)


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABellhollyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABellhollyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABellhollyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABellhollyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABellhollyActor(ABellhollyActor&&); \
	NO_API ABellhollyActor(const ABellhollyActor&); \
public:


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABellhollyActor(ABellhollyActor&&); \
	NO_API ABellhollyActor(const ABellhollyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABellhollyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABellhollyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABellhollyActor)


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Herb() { return STRUCT_OFFSET(ABellhollyActor, Herb); } \
	FORCEINLINE static uint32 __PPO__HerbCollisionSphere() { return STRUCT_OFFSET(ABellhollyActor, HerbCollisionSphere); }


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_10_PROLOG
#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_INCLASS \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_BellhollyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_BellhollyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class ABellhollyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_BellhollyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
