// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSegment.h"

#ifdef MOVIESCENE_MovieSceneSegment_generated_h
#error "MovieSceneSegment.generated.h already included, missing '#pragma once' in MovieSceneSegment.h"
#endif
#define MOVIESCENE_MovieSceneSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneSegmentIdentifier **************************************
struct Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSegmentIdentifier;
// ********** End ScriptStruct FMovieSceneSegmentIdentifier ****************************************

// ********** Begin ScriptStruct FSectionEvaluationData ********************************************
struct Z_Construct_UScriptStruct_FSectionEvaluationData_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSectionEvaluationData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FSectionEvaluationData;
// ********** End ScriptStruct FSectionEvaluationData **********************************************

// ********** Begin ScriptStruct FMovieSceneSegment ************************************************
struct Z_Construct_UScriptStruct_FMovieSceneSegment_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSegment_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSegment;
// ********** End ScriptStruct FMovieSceneSegment **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h

// ********** Begin Enum ESectionEvaluationFlags ***************************************************
#define FOREACH_ENUM_ESECTIONEVALUATIONFLAGS(op) \
	op(ESectionEvaluationFlags::None) \
	op(ESectionEvaluationFlags::PreRoll) \
	op(ESectionEvaluationFlags::PostRoll) \
	op(ESectionEvaluationFlags::ForceKeepState) \
	op(ESectionEvaluationFlags::ForceRestoreState) 

enum class ESectionEvaluationFlags : uint8;
template<> struct TIsUEnumClass<ESectionEvaluationFlags> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESectionEvaluationFlags>();
// ********** End Enum ESectionEvaluationFlags *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
