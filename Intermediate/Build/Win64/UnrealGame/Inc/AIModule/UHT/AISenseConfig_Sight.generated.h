// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Sight.h"

#ifdef AIMODULE_AISenseConfig_Sight_generated_h
#error "AISenseConfig_Sight.generated.h already included, missing '#pragma once' in AISenseConfig_Sight.h"
#endif
#define AIMODULE_AISenseConfig_Sight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseConfig_Sight *****************************************************
struct Z_Construct_UClass_UAISenseConfig_Sight_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Sight(); \
	friend struct ::Z_Construct_UClass_UAISenseConfig_Sight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseConfig_Sight_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseConfig_Sight, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister) \
	DECLARE_SERIALIZER(UAISenseConfig_Sight)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Sight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Sight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Sight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Sight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseConfig_Sight(UAISenseConfig_Sight&&) = delete; \
	UAISenseConfig_Sight(const UAISenseConfig_Sight&) = delete; \
	AIMODULE_API virtual ~UAISenseConfig_Sight();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseConfig_Sight;

// ********** End Class UAISenseConfig_Sight *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
