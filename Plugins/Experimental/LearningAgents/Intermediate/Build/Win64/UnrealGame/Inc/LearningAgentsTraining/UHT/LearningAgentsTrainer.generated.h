// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsTrainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h
#error "LearningAgentsTrainer.generated.h already included, missing '#pragma once' in LearningAgentsTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsTrainer_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainingGameSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainingGameSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerProcessSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerProcessSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainer_h


#define FOREACH_ENUM_ELEARNINGAGENTSTRAININGDEVICE(op) \
	op(ELearningAgentsTrainingDevice::CPU) \
	op(ELearningAgentsTrainingDevice::GPU) 

enum class ELearningAgentsTrainingDevice : uint8;
template<> struct TIsUEnumClass<ELearningAgentsTrainingDevice> { enum { Value = true }; };
template<> LEARNINGAGENTSTRAINING_API UEnum* StaticEnum<ELearningAgentsTrainingDevice>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
