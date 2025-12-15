// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Team.h"

#ifdef AIMODULE_AISense_Team_generated_h
#error "AISense_Team.generated.h already included, missing '#pragma once' in AISense_Team.h"
#endif
#define AIMODULE_AISense_Team_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAITeamStimulusEvent **********************************************
struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAITeamStimulusEvent;
// ********** End ScriptStruct FAITeamStimulusEvent ************************************************

// ********** Begin Class UAISense_Team ************************************************************
struct Z_Construct_UClass_UAISense_Team_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Team(); \
	friend struct ::Z_Construct_UClass_UAISense_Team_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISense_Team_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISense_Team, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISense_Team_NoRegister) \
	DECLARE_SERIALIZER(UAISense_Team)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense_Team(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Team) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense_Team); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Team); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISense_Team(UAISense_Team&&) = delete; \
	UAISense_Team(const UAISense_Team&) = delete; \
	AIMODULE_API virtual ~UAISense_Team();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_49_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISense_Team;

// ********** End Class UAISense_Team **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
