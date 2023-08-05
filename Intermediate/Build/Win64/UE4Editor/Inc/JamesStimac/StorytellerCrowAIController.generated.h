// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
class AActor;
#ifdef JAMESSTIMAC_StorytellerCrowAIController_generated_h
#error "StorytellerCrowAIController.generated.h already included, missing '#pragma once' in StorytellerCrowAIController.h"
#endif
#define JAMESSTIMAC_StorytellerCrowAIController_generated_h

#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoToNextWaypoint); \
	DECLARE_FUNCTION(execGetNextWaypoint);


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoToNextWaypoint); \
	DECLARE_FUNCTION(execGetNextWaypoint);


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStorytellerCrowAIController(); \
	friend struct Z_Construct_UClass_AStorytellerCrowAIController_Statics; \
public: \
	DECLARE_CLASS(AStorytellerCrowAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AStorytellerCrowAIController)


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStorytellerCrowAIController(); \
	friend struct Z_Construct_UClass_AStorytellerCrowAIController_Statics; \
public: \
	DECLARE_CLASS(AStorytellerCrowAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AStorytellerCrowAIController)


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStorytellerCrowAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStorytellerCrowAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStorytellerCrowAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStorytellerCrowAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStorytellerCrowAIController(AStorytellerCrowAIController&&); \
	NO_API AStorytellerCrowAIController(const AStorytellerCrowAIController&); \
public:


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStorytellerCrowAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStorytellerCrowAIController(AStorytellerCrowAIController&&); \
	NO_API AStorytellerCrowAIController(const AStorytellerCrowAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStorytellerCrowAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStorytellerCrowAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStorytellerCrowAIController)


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(AStorytellerCrowAIController, Waypoints); } \
	FORCEINLINE static uint32 __PPO__OurCurrentWaypoint() { return STRUCT_OFFSET(AStorytellerCrowAIController, OurCurrentWaypoint); } \
	FORCEINLINE static uint32 __PPO__OurNextWaypoint() { return STRUCT_OFFSET(AStorytellerCrowAIController, OurNextWaypoint); } \
	FORCEINLINE static uint32 __PPO__ReturnedTargetPoint() { return STRUCT_OFFSET(AStorytellerCrowAIController, ReturnedTargetPoint); }


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_10_PROLOG
#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_INCLASS \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class AStorytellerCrowAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_StorytellerCrowAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
