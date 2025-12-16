// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphPipeline.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphPipeline_generated_h
#error "MovieGraphPipeline.generated.h already included, missing '#pragma once' in MovieGraphPipeline.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphRendererBase;
class UMovieGraphTimeStepBase;
class UMoviePipelineExecutorJob;
struct FDateTime;
struct FMovieGraphInitConfig;
struct FMovieGraphTraversalContext;
struct FTimespan;

// ********** Begin Class UMovieGraphPipeline ******************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoviePipelineFinishedImpl); \
	DECLARE_FUNCTION(execGetRendererInstance); \
	DECLARE_FUNCTION(execGetTimeStepInstance); \
	DECLARE_FUNCTION(execGetCurrentTraversalContext); \
	DECLARE_FUNCTION(execSetInitializationTime); \
	DECLARE_FUNCTION(execGetInitializationTimeOffset); \
	DECLARE_FUNCTION(execGetInitializationTime); \
	DECLARE_FUNCTION(execGetCurrentJob); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UMovieGraphPipeline_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPipeline_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphPipeline(); \
	friend struct ::Z_Construct_UClass_UMovieGraphPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphPipeline, UMoviePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphPipeline)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphPipeline(UMovieGraphPipeline&&) = delete; \
	UMovieGraphPipeline(const UMovieGraphPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphPipeline) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphPipeline();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_32_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphPipeline;

// ********** End Class UMovieGraphPipeline ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
