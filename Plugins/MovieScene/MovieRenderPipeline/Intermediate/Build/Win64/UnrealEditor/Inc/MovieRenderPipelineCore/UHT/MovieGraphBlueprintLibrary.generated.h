// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphBlueprintLibrary.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphBlueprintLibrary_generated_h
#error "MovieGraphBlueprintLibrary.generated.h already included, missing '#pragma once' in MovieGraphBlueprintLibrary.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UMovieGraphEvaluatedConfig;
class UMovieGraphGlobalOutputSettingNode;
class UMovieGraphPipeline;
class UMoviePipelineExecutorShot;
enum class EMovieRenderPipelineState : uint8;
enum class EMovieRenderShotState : uint8;
struct FDateTime;
struct FFrameNumber;
struct FFrameRate;
struct FMovieGraphFilenameResolveParams;
struct FMovieGraphNamedResolution;
struct FMovieGraphResolveArgs;
struct FMoviePipelineSegmentWorkMetrics;
struct FTimecode;
struct FTimespan;

// ********** Begin Class UMovieGraphBlueprintLibrary **********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentExecutorShot); \
	DECLARE_FUNCTION(execNamedResolutionFromSize); \
	DECLARE_FUNCTION(execIsNamedResolutionValid); \
	DECLARE_FUNCTION(execNamedResolutionFromProfile); \
	DECLARE_FUNCTION(execGetCurrentCineCamera); \
	DECLARE_FUNCTION(execGetCurrentAperture); \
	DECLARE_FUNCTION(execGetCurrentFocalLength); \
	DECLARE_FUNCTION(execGetCurrentFocusDistance); \
	DECLARE_FUNCTION(execGetCurrentShotFrameNumber); \
	DECLARE_FUNCTION(execGetCurrentShotTimecode); \
	DECLARE_FUNCTION(execGetRootFrameNumber); \
	DECLARE_FUNCTION(execGetRootTimecode); \
	DECLARE_FUNCTION(execGetCurrentSegmentWorkMetrics); \
	DECLARE_FUNCTION(execGetOverallSegmentCounts); \
	DECLARE_FUNCTION(execGetCurrentSegmentName); \
	DECLARE_FUNCTION(execGetCurrentSegmentState); \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execGetEstimatedTimeRemaining); \
	DECLARE_FUNCTION(execGetJobInitializationTime); \
	DECLARE_FUNCTION(execGetOverallOutputFrames); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execGetJobAuthor); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execGetOverscanCropRectangle); \
	DECLARE_FUNCTION(execGetBackbufferResolution); \
	DECLARE_FUNCTION(execGetOverscannedResolution); \
	DECLARE_FUNCTION(execGetDesiredOutputResolution); \
	DECLARE_FUNCTION(execGetEffectiveOutputResolution); \
	DECLARE_FUNCTION(execGetCurrentVersionNumber); \
	DECLARE_FUNCTION(execResolveVersionNumber); \
	DECLARE_FUNCTION(execResolveFormatArguments); \
	DECLARE_FUNCTION(execResolveFilenameFormatArguments); \
	DECLARE_FUNCTION(execGetEffectiveFrameRate);


struct Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphBlueprintLibrary(UMovieGraphBlueprintLibrary&&) = delete; \
	UMovieGraphBlueprintLibrary(const UMovieGraphBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphBlueprintLibrary) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphBlueprintLibrary;

// ********** End Class UMovieGraphBlueprintLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
