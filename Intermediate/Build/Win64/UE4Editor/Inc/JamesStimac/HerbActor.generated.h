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
#ifdef JAMESSTIMAC_HerbActor_generated_h
#error "HerbActor.generated.h already included, missing '#pragma once' in HerbActor.h"
#endif
#define JAMESSTIMAC_HerbActor_generated_h

#define JamesStimac_Source_JamesStimac_HerbActor_h_12_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_HerbActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementCharacterHerbCount); \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execOnOverlapEndIncrement); \
	DECLARE_FUNCTION(execOnOverlapBeginCanPickUp);


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementCharacterHerbCount); \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execOnOverlapEndIncrement); \
	DECLARE_FUNCTION(execOnOverlapBeginCanPickUp);


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHerbActor(); \
	friend struct Z_Construct_UClass_AHerbActor_Statics; \
public: \
	DECLARE_CLASS(AHerbActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AHerbActor)


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHerbActor(); \
	friend struct Z_Construct_UClass_AHerbActor_Statics; \
public: \
	DECLARE_CLASS(AHerbActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AHerbActor)


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHerbActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHerbActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHerbActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHerbActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHerbActor(AHerbActor&&); \
	NO_API AHerbActor(const AHerbActor&); \
public:


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHerbActor(AHerbActor&&); \
	NO_API AHerbActor(const AHerbActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHerbActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHerbActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHerbActor)


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HerbCollisionSphere() { return STRUCT_OFFSET(AHerbActor, HerbCollisionSphere); }


#define JamesStimac_Source_JamesStimac_HerbActor_h_9_PROLOG
#define JamesStimac_Source_JamesStimac_HerbActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_INCLASS \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_HerbActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_HerbActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class AHerbActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_HerbActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
