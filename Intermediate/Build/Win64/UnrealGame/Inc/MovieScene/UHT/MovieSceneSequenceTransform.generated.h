// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSequenceTransform.h"

#ifdef MOVIESCENE_MovieSceneSequenceTransform_generated_h
#error "MovieSceneSequenceTransform.generated.h already included, missing '#pragma once' in MovieSceneSequenceTransform.h"
#endif
#define MOVIESCENE_MovieSceneSequenceTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneTransformBreadcrumbs ***********************************
struct Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTransformBreadcrumbs;
// ********** End ScriptStruct FMovieSceneTransformBreadcrumbs *************************************

// ********** Begin ScriptStruct FMovieSceneWarpCounter ********************************************
struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneTransformBreadcrumbs Super;


struct FMovieSceneWarpCounter;
// ********** End ScriptStruct FMovieSceneWarpCounter **********************************************

// ********** Begin ScriptStruct FMovieSceneInverseNestedSequenceTransform *************************
struct Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneInverseNestedSequenceTransform;
// ********** End ScriptStruct FMovieSceneInverseNestedSequenceTransform ***************************

// ********** Begin ScriptStruct FMovieSceneNestedSequenceTransform ********************************
struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_372_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneNestedSequenceTransform;
// ********** End ScriptStruct FMovieSceneNestedSequenceTransform **********************************

// ********** Begin ScriptStruct FMovieSceneSequenceTransform **************************************
struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_626_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSequenceTransform;
// ********** End ScriptStruct FMovieSceneSequenceTransform ****************************************

// ********** Begin ScriptStruct FMovieSceneInverseSequenceTransform *******************************
struct Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_913_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneInverseSequenceTransform;
// ********** End ScriptStruct FMovieSceneInverseSequenceTransform *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h

// ********** Begin Enum EMovieSceneBreadcrumbMode *************************************************
#define FOREACH_ENUM_EMOVIESCENEBREADCRUMBMODE(op) \
	op(EMovieSceneBreadcrumbMode::Sparse) \
	op(EMovieSceneBreadcrumbMode::Dense) 

enum class EMovieSceneBreadcrumbMode : uint8;
template<> struct TIsUEnumClass<EMovieSceneBreadcrumbMode> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneBreadcrumbMode>();
// ********** End Enum EMovieSceneBreadcrumbMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
