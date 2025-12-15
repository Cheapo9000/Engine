// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Blueprint.h"

#ifdef AIMODULE_AISenseConfig_Blueprint_generated_h
#error "AISenseConfig_Blueprint.generated.h already included, missing '#pragma once' in AISenseConfig_Blueprint.h"
#endif
#define AIMODULE_AISenseConfig_Blueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseConfig_Blueprint *************************************************
struct Z_Construct_UClass_UAISenseConfig_Blueprint_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Blueprint(); \
	friend struct ::Z_Construct_UClass_UAISenseConfig_Blueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseConfig_Blueprint, UAISenseConfig, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister) \
	DECLARE_SERIALIZER(UAISenseConfig_Blueprint)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Blueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Blueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseConfig_Blueprint(UAISenseConfig_Blueprint&&) = delete; \
	UAISenseConfig_Blueprint(const UAISenseConfig_Blueprint&) = delete; \
	AIMODULE_API virtual ~UAISenseConfig_Blueprint();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseConfig_Blueprint;

// ********** End Class UAISenseConfig_Blueprint ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
