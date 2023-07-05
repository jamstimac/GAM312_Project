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
struct FVector;
struct FHitResult;
#ifdef JAMESSTIMAC_JamesStimacProjectile_generated_h
#error "JamesStimacProjectile.generated.h already included, missing '#pragma once' in JamesStimacProjectile.h"
#endif
#define JAMESSTIMAC_JamesStimacProjectile_generated_h

#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_SPARSE_DATA
#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamesStimacProjectile(); \
	friend struct Z_Construct_UClass_AJamesStimacProjectile_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAJamesStimacProjectile(); \
	friend struct Z_Construct_UClass_AJamesStimacProjectile_Statics; \
public: \
	DECLARE_CLASS(AJamesStimacProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamesStimac"), NO_API) \
	DECLARE_SERIALIZER(AJamesStimacProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJamesStimacProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJamesStimacProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamesStimacProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamesStimacProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamesStimacProjectile(AJamesStimacProjectile&&); \
	NO_API AJamesStimacProjectile(const AJamesStimacProjectile&); \
public:


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJamesStimacProjectile(AJamesStimacProjectile&&); \
	NO_API AJamesStimacProjectile(const AJamesStimacProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamesStimacProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamesStimacProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamesStimacProjectile)


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AJamesStimacProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AJamesStimacProjectile, ProjectileMovement); }


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_12_PROLOG
#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_RPC_WRAPPERS \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_INCLASS \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_SPARSE_DATA \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_INCLASS_NO_PURE_DECLS \
	JamesStimac_Source_JamesStimac_JamesStimacProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMESSTIMAC_API UClass* StaticClass<class AJamesStimacProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JamesStimac_Source_JamesStimac_JamesStimacProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
