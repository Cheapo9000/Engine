// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_SequenceEvaluator.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h
#error "AnimNode_SequenceEvaluator.generated.h already included, missing '#pragma once' in AnimNode_SequenceEvaluator.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_SequenceEvaluatorBase ***********************************
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_AssetPlayerBase Super;


struct FAnimNode_SequenceEvaluatorBase;
// ********** End ScriptStruct FAnimNode_SequenceEvaluatorBase *************************************

// ********** Begin ScriptStruct FAnimNode_SequenceEvaluator ***************************************
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SequenceEvaluatorBase Super;


struct FAnimNode_SequenceEvaluator;
// ********** End ScriptStruct FAnimNode_SequenceEvaluator *****************************************

// ********** Begin ScriptStruct FAnimNode_SequenceEvaluator_Standalone ****************************
struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SequenceEvaluatorBase Super;


struct FAnimNode_SequenceEvaluator_Standalone;
// ********** End ScriptStruct FAnimNode_SequenceEvaluator_Standalone ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h

// ********** Begin Enum ESequenceEvalReinit *******************************************************
#define FOREACH_ENUM_ESEQUENCEEVALREINIT(op) \
	op(ESequenceEvalReinit::NoReset) \
	op(ESequenceEvalReinit::StartPosition) \
	op(ESequenceEvalReinit::ExplicitTime) 

namespace ESequenceEvalReinit { enum Type : int; }
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESequenceEvalReinit::Type>();
// ********** End Enum ESequenceEvalReinit *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
