// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieEdGraph.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieEdGraph_generated_h
#error "MovieEdGraph.generated.h already included, missing '#pragma once' in MovieEdGraph.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieEdGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineEdGraph ****************************************************
struct Z_Construct_UClass_UMoviePipelineEdGraph_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraph_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEdGraph(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineEdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineEdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineEdGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineEdGraph_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineEdGraph)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineEdGraph(UMoviePipelineEdGraph&&) = delete; \
	UMoviePipelineEdGraph(const UMoviePipelineEdGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEdGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEdGraph) \
	NO_API virtual ~UMoviePipelineEdGraph();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineEdGraph;

// ********** End Class UMoviePipelineEdGraph ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
