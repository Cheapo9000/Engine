// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Damage.h"

#ifdef AIMODULE_AISense_Damage_generated_h
#error "AISense_Damage.generated.h already included, missing '#pragma once' in AISense_Damage.h"
#endif
#define AIMODULE_AISense_Damage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;

// ********** Begin ScriptStruct FAIDamageEvent ****************************************************
struct Z_Construct_UScriptStruct_FAIDamageEvent_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDamageEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIDamageEvent;
// ********** End ScriptStruct FAIDamageEvent ******************************************************

// ********** Begin Class UAISense_Damage **********************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReportDamageEvent);


struct Z_Construct_UClass_UAISense_Damage_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Damage(); \
	friend struct ::Z_Construct_UClass_UAISense_Damage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISense_Damage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISense_Damage, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISense_Damage_NoRegister) \
	DECLARE_SERIALIZER(UAISense_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Damage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Damage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISense_Damage(UAISense_Damage&&) = delete; \
	UAISense_Damage(const UAISense_Damage&) = delete; \
	AIMODULE_API virtual ~UAISense_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_59_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISense_Damage;

// ********** End Class UAISense_Damage ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
