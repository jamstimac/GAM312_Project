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
#ifdef JAMESSTIMAC_CampFireActor_generated_h
#error "CampFireActor.generated.h already included, missing '#pragma once' in CampFireActor.h"
#endif
#define JAMESSTIMAC_CampFireActor_generated_h

#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyFireDamage); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyFireDamage); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACampFireActor(); \
	friend struct Z_Construct_UClass_ACampFireActor_Statics; \
public: \
	DECLARE_CLASS(ACampFireActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ACampFireActor)


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACampFireActor(); \
	friend struct Z_Construct_UClass_ACampFireActor_Statics; \
public: \
	DECLARE_CLASS(ACampFireActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(ACampFireActor)


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACampFireActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACampFireActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACampFireActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACampFireActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACampFireActor(ACampFireActor&&); \
	NO_API ACampFireActor(const ACampFireActor&); \
public:


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACampFireActor(ACampFireActor&&); \
	NO_API ACampFireActor(const ACampFireActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACampFireActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACampFireActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACampFireActor)


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_PRIVATE_PROPERTY_OFFSET
#define JamesStimac_Source_JamesStimac_CampFireActor_h_11_PROLOG
#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_INCLASS \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_CampFireActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_CampFireActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class ACampFireActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_CampFireActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
