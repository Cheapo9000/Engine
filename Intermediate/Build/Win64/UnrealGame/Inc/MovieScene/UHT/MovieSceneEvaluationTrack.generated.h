// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneEvaluationTrack.h"

#ifdef MOVIESCENE_MovieSceneEvaluationTrack_generated_h
#error "MovieSceneEvaluationTrack.generated.h already included, missing '#pragma once' in MovieSceneEvaluationTrack.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneEvaluationTrack ****************************************
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEvaluationTrack;
// ********** End ScriptStruct FMovieSceneEvaluationTrack ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h

// ********** Begin Enum EEvaluationMethod *********************************************************
#define FOREACH_ENUM_EEVALUATIONMETHOD(op) \
	op(EEvaluationMethod::Static) \
	op(EEvaluationMethod::Swept) 

enum class EEvaluationMethod : uint8;
template<> struct TIsUEnumClass<EEvaluationMethod> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEvaluationMethod>();
// ********** End Enum EEvaluationMethod ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
