// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphDeferredPassNode.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MovieGraphDeferredPassNode_generated_h
#error "MovieGraphDeferredPassNode.generated.h already included, missing '#pragma once' in MovieGraphDeferredPassNode.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MovieGraphDeferredPassNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphDeferredRenderPassNode ****************************************
struct Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphDeferredRenderPassNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphDeferredRenderPassNode, UMovieGraphImagePassBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMovieGraphDeferredRenderPassNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphDeferredRenderPassNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphDeferredRenderPassNode(UMovieGraphDeferredRenderPassNode&&) = delete; \
	UMovieGraphDeferredRenderPassNode(const UMovieGraphDeferredRenderPassNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMovieGraphDeferredRenderPassNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphDeferredRenderPassNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphDeferredRenderPassNode) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMovieGraphDeferredRenderPassNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphDeferredRenderPassNode;

// ********** End Class UMovieGraphDeferredRenderPassNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphDeferredPassNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
