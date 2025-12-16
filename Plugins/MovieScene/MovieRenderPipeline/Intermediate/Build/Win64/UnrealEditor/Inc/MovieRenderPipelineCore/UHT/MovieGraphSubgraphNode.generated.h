// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphSubgraphNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphSubgraphNode_generated_h
#error "MovieGraphSubgraphNode.generated.h already included, missing '#pragma once' in MovieGraphSubgraphNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphSubgraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphConfig;

// ********** Begin Class UMovieGraphSubgraphNode **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSubgraphAsset); \
	DECLARE_FUNCTION(execSetSubGraphAsset);


struct Z_Construct_UClass_UMovieGraphSubgraphNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSubgraphNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphSubgraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphSubgraphNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphSubgraphNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphSubgraphNode(UMovieGraphSubgraphNode&&) = delete; \
	UMovieGraphSubgraphNode(const UMovieGraphSubgraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphSubgraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSubgraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphSubgraphNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphSubgraphNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphSubgraphNode;

// ********** End Class UMovieGraphSubgraphNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSubgraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
