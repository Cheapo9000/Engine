// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/AnimNode_MotionMatchingInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_AnimNode_MotionMatchingInteraction_generated_h
#error "AnimNode_MotionMatchingInteraction.generated.h already included, missing '#pragma once' in AnimNode_MotionMatchingInteraction.h"
#endif
#define POSESEARCH_AnimNode_MotionMatchingInteraction_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatchingInteraction_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendStack Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FAnimNode_MotionMatchingInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatchingInteraction_h


#define FOREACH_ENUM_EMOTIONMATCHINGINTERACTIONEVALUATIONMODE(op) \
	op(EMotionMatchingInteractionEvaluationMode::ContinuousReselection) \
	op(EMotionMatchingInteractionEvaluationMode::SingleSelection) 

enum class EMotionMatchingInteractionEvaluationMode;
template<> struct TIsUEnumClass<EMotionMatchingInteractionEvaluationMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EMotionMatchingInteractionEvaluationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
