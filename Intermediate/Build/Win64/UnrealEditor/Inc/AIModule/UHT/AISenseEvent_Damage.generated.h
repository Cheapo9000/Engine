// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseEvent_Damage.h"

#ifdef AIMODULE_AISenseEvent_Damage_generated_h
#error "AISenseEvent_Damage.generated.h already included, missing '#pragma once' in AISenseEvent_Damage.h"
#endif
#define AIMODULE_AISenseEvent_Damage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseEvent_Damage *****************************************************
struct Z_Construct_UClass_UAISenseEvent_Damage_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Damage_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseEvent_Damage(); \
	friend struct ::Z_Construct_UClass_UAISenseEvent_Damage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseEvent_Damage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseEvent_Damage, UAISenseEvent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseEvent_Damage_NoRegister) \
	DECLARE_SERIALIZER(UAISenseEvent_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseEvent_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseEvent_Damage(UAISenseEvent_Damage&&) = delete; \
	UAISenseEvent_Damage(const UAISenseEvent_Damage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseEvent_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent_Damage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent_Damage) \
	AIMODULE_API virtual ~UAISenseEvent_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseEvent_Damage;

// ********** End Class UAISenseEvent_Damage *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
