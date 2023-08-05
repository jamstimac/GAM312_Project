// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef JAMESSTIMAC_LightSwitchActor_generated_h
#error "LightSwitchActor.generated.h already included, missing '#pragma once' in LightSwitchActor.h"
#endif
#define JAMESSTIMAC_LightSwitchActor_generated_h

#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchActor(); \
	friend struct Z_Construct_UClass_ALightSwitchActor_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchActor)


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchActor(); \
	friend struct Z_Construct_UClass_ALightSwitchActor_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchActor)


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchActor(ALightSwitchActor&&); \
	NO_API ALightSwitchActor(const ALightSwitchActor&); \
public:


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchActor(ALightSwitchActor&&); \
	NO_API ALightSwitchActor(const ALightSwitchActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchActor)


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_PRIVATE_PROPERTY_OFFSET
#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_9_PROLOG
#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_INCLASS \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_LightSwitchActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class ALightSwitchActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_LightSwitchActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
