// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Sight.h"

#ifdef AIMODULE_AISense_Sight_generated_h
#error "AISense_Sight.generated.h already included, missing '#pragma once' in AISense_Sight.h"
#endif
#define AIMODULE_AISense_Sight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAISightEvent *****************************************************
struct Z_Construct_UScriptStruct_FAISightEvent_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAISightEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAISightEvent;
// ********** End ScriptStruct FAISightEvent *******************************************************

// ********** Begin Class UAISense_Sight ***********************************************************
struct Z_Construct_UClass_UAISense_Sight_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Sight(); \
	friend struct ::Z_Construct_UClass_UAISense_Sight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISense_Sight_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISense_Sight, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISense_Sight_NoRegister) \
	DECLARE_SERIALIZER(UAISense_Sight) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense_Sight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Sight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense_Sight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Sight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISense_Sight(UAISense_Sight&&) = delete; \
	UAISense_Sight(const UAISense_Sight&) = delete; \
	AIMODULE_API virtual ~UAISense_Sight();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_203_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_206_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISense_Sight;

// ********** End Class UAISense_Sight *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
