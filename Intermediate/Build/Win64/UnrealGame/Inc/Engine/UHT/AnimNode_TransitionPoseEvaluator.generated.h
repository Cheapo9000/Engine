// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNode_TransitionPoseEvaluator.h"

#ifdef ENGINE_AnimNode_TransitionPoseEvaluator_generated_h
#error "AnimNode_TransitionPoseEvaluator.generated.h already included, missing '#pragma once' in AnimNode_TransitionPoseEvaluator.h"
#endif
#define ENGINE_AnimNode_TransitionPoseEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_TransitionPoseEvaluator *********************************
struct Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_TransitionPoseEvaluator;
// ********** End ScriptStruct FAnimNode_TransitionPoseEvaluator ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h

// ********** Begin Enum EEvaluatorDataSource ******************************************************
#define FOREACH_ENUM_EEVALUATORDATASOURCE(op) \
	op(EEvaluatorDataSource::EDS_SourcePose) \
	op(EEvaluatorDataSource::EDS_DestinationPose) 

namespace EEvaluatorDataSource { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEvaluatorDataSource::Type>();
// ********** End Enum EEvaluatorDataSource ********************************************************

// ********** Begin Enum EEvaluatorMode ************************************************************
#define FOREACH_ENUM_EEVALUATORMODE(op) \
	op(EEvaluatorMode::EM_Standard) \
	op(EEvaluatorMode::EM_Freeze) \
	op(EEvaluatorMode::EM_DelayedFreeze) 

namespace EEvaluatorMode { enum Mode : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEvaluatorMode::Mode>();
// ********** End Enum EEvaluatorMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
