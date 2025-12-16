// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePostRenderSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelinePostRenderSettings_generated_h
#error "MoviePipelinePostRenderSettings.generated.h already included, missing '#pragma once' in MoviePipelinePostRenderSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelinePostRenderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieGraphPostRenderVideoPlayOptions *****************************
struct Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphPostRenderVideoPlayOptions;
// ********** End ScriptStruct FMovieGraphPostRenderVideoPlayOptions *******************************

// ********** Begin ScriptStruct FMovieGraphPostRenderImageSequencePlayOptions *********************
struct Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphPostRenderVideoPlayOptions Super;


struct FMovieGraphPostRenderImageSequencePlayOptions;
// ********** End ScriptStruct FMovieGraphPostRenderImageSequencePlayOptions ***********************

// ********** Begin ScriptStruct FMovieGraphPostRenderSettings *************************************
struct Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphPostRenderSettings;
// ********** End ScriptStruct FMovieGraphPostRenderSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePostRenderSettings_h

// ********** Begin Enum EMovieGraphPlaybackMethod *************************************************
#define FOREACH_ENUM_EMOVIEGRAPHPLAYBACKMETHOD(op) \
	op(EMovieGraphPlaybackMethod::OperatingSystem) \
	op(EMovieGraphPlaybackMethod::CustomViewer) 

enum class EMovieGraphPlaybackMethod : uint8;
template<> struct TIsUEnumClass<EMovieGraphPlaybackMethod> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphPlaybackMethod>();
// ********** End Enum EMovieGraphPlaybackMethod ***************************************************

// ********** Begin Enum EMovieGraphImageSequencePlaybackRange *************************************
#define FOREACH_ENUM_EMOVIEGRAPHIMAGESEQUENCEPLAYBACKRANGE(op) \
	op(EMovieGraphImageSequencePlaybackRange::FirstFrameOnly) \
	op(EMovieGraphImageSequencePlaybackRange::FullRange) 

enum class EMovieGraphImageSequencePlaybackRange : uint8;
template<> struct TIsUEnumClass<EMovieGraphImageSequencePlaybackRange> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphImageSequencePlaybackRange>();
// ********** End Enum EMovieGraphImageSequencePlaybackRange ***************************************

// ********** Begin Enum EMovieGraphJobPlaybackRange ***********************************************
#define FOREACH_ENUM_EMOVIEGRAPHJOBPLAYBACKRANGE(op) \
	op(EMovieGraphJobPlaybackRange::FirstJobOnly) \
	op(EMovieGraphJobPlaybackRange::AllJobs) 

enum class EMovieGraphJobPlaybackRange : uint8;
template<> struct TIsUEnumClass<EMovieGraphJobPlaybackRange> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphJobPlaybackRange>();
// ********** End Enum EMovieGraphJobPlaybackRange *************************************************

// ********** Begin Enum EMovieGraphRenderLayerPlaybackRange ***************************************
#define FOREACH_ENUM_EMOVIEGRAPHRENDERLAYERPLAYBACKRANGE(op) \
	op(EMovieGraphRenderLayerPlaybackRange::FirstRenderLayerOnly) \
	op(EMovieGraphRenderLayerPlaybackRange::AllRenderLayers) 

enum class EMovieGraphRenderLayerPlaybackRange : uint8;
template<> struct TIsUEnumClass<EMovieGraphRenderLayerPlaybackRange> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphRenderLayerPlaybackRange>();
// ********** End Enum EMovieGraphRenderLayerPlaybackRange *****************************************

// ********** Begin Enum EMovieGraphFrameRangeNotation *********************************************
#define FOREACH_ENUM_EMOVIEGRAPHFRAMERANGENOTATION(op) \
	op(EMovieGraphFrameRangeNotation::HashWithStartEndFrame) \
	op(EMovieGraphFrameRangeNotation::Hash) \
	op(EMovieGraphFrameRangeNotation::DollarF) \
	op(EMovieGraphFrameRangeNotation::StartFrame) 

enum class EMovieGraphFrameRangeNotation : uint8;
template<> struct TIsUEnumClass<EMovieGraphFrameRangeNotation> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphFrameRangeNotation>();
// ********** End Enum EMovieGraphFrameRangeNotation ***********************************************

// ********** Begin Enum EMovieGraphOutputTypePlayback *********************************************
#define FOREACH_ENUM_EMOVIEGRAPHOUTPUTTYPEPLAYBACK(op) \
	op(EMovieGraphOutputTypePlayback::UsePriorityOrder) \
	op(EMovieGraphOutputTypePlayback::PlayAllOutputTypes) 

enum class EMovieGraphOutputTypePlayback : uint8;
template<> struct TIsUEnumClass<EMovieGraphOutputTypePlayback> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphOutputTypePlayback>();
// ********** End Enum EMovieGraphOutputTypePlayback ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
