// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSectionParameters.h"

#ifdef MOVIESCENE_MovieSceneSectionParameters_generated_h
#error "MovieSceneSectionParameters.generated.h already included, missing '#pragma once' in MovieSceneSectionParameters.h"
#endif
#define MOVIESCENE_MovieSceneSectionParameters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneSectionParameters **************************************
struct Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSectionParameters;
// ********** End ScriptStruct FMovieSceneSectionParameters ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h

// ********** Begin Enum EMovieSceneSubSectionFlags ************************************************
#define FOREACH_ENUM_EMOVIESCENESUBSECTIONFLAGS(op) \
	op(EMovieSceneSubSectionFlags::None) \
	op(EMovieSceneSubSectionFlags::OverrideKeepState) \
	op(EMovieSceneSubSectionFlags::OverrideRestoreState) \
	op(EMovieSceneSubSectionFlags::IgnoreHierarchicalBias) \
	op(EMovieSceneSubSectionFlags::BlendHierarchicalBias) \
	op(EMovieSceneSubSectionFlags::AnyRestoreStateOverride) 

enum class EMovieSceneSubSectionFlags : uint8;
template<> struct TIsUEnumClass<EMovieSceneSubSectionFlags> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneSubSectionFlags>();
// ********** End Enum EMovieSceneSubSectionFlags **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
