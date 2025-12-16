// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsTrainer.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h
#error "LearningAgentsTrainer.generated.h already included, missing '#pragma once' in LearningAgentsTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLearningAgentsTrainingGameSettings *******************************
struct Z_Construct_UScriptStruct_FLearningAgentsTrainingGameSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsTrainingGameSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsTrainingGameSettings;
// ********** End ScriptStruct FLearningAgentsTrainingGameSettings *********************************

// ********** Begin ScriptStruct FLearningAgentsTrainerProcessSettings *****************************
struct Z_Construct_UScriptStruct_FLearningAgentsTrainerProcessSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsTrainerProcessSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsTrainerProcessSettings;
// ********** End ScriptStruct FLearningAgentsTrainerProcessSettings *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h

// ********** Begin Enum ELearningAgentsTrainingDevice *********************************************
#define FOREACH_ENUM_ELEARNINGAGENTSTRAININGDEVICE(op) \
	op(ELearningAgentsTrainingDevice::CPU) \
	op(ELearningAgentsTrainingDevice::GPU) 

enum class ELearningAgentsTrainingDevice : uint8;
template<> struct TIsUEnumClass<ELearningAgentsTrainingDevice> { enum { Value = true }; };
template<> LEARNINGAGENTSTRAINING_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsTrainingDevice>();
// ********** End Enum ELearningAgentsTrainingDevice ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
