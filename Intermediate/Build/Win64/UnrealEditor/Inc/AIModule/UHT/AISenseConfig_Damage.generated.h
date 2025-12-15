// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Damage.h"

#ifdef AIMODULE_AISenseConfig_Damage_generated_h
#error "AISenseConfig_Damage.generated.h already included, missing '#pragma once' in AISenseConfig_Damage.h"
#endif
#define AIMODULE_AISenseConfig_Damage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseConfig_Damage ****************************************************
struct Z_Construct_UClass_UAISenseConfig_Damage_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Damage(); \
	friend struct ::Z_Construct_UClass_UAISenseConfig_Damage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseConfig_Damage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseConfig_Damage, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister) \
	DECLARE_SERIALIZER(UAISenseConfig_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Damage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Damage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseConfig_Damage(UAISenseConfig_Damage&&) = delete; \
	UAISenseConfig_Damage(const UAISenseConfig_Damage&) = delete; \
	AIMODULE_API virtual ~UAISenseConfig_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseConfig_Damage;

// ********** End Class UAISenseConfig_Damage ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
