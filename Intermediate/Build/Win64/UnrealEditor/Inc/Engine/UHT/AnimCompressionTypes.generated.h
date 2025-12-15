// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompressionTypes.h"

#ifdef ENGINE_AnimCompressionTypes_generated_h
#error "AnimCompressionTypes.generated.h already included, missing '#pragma once' in AnimCompressionTypes.h"
#endif
#define ENGINE_AnimCompressionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimationErrorStats **********************************************
struct Z_Construct_UScriptStruct_FAnimationErrorStats_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationErrorStats_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationErrorStats;
// ********** End ScriptStruct FAnimationErrorStats ************************************************

// ********** Begin ScriptStruct FAnimCompressedCurveIndexedName ***********************************
struct Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_747_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimCompressedCurveIndexedName;
// ********** End ScriptStruct FAnimCompressedCurveIndexedName *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h

// ********** Begin Enum AnimationKeyFormat ********************************************************
#define FOREACH_ENUM_ANIMATIONKEYFORMAT(op) \
	op(AKF_ConstantKeyLerp) \
	op(AKF_VariableKeyLerp) \
	op(AKF_PerTrackCompression) 

enum AnimationKeyFormat : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<AnimationKeyFormat>();
// ********** End Enum AnimationKeyFormat **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
