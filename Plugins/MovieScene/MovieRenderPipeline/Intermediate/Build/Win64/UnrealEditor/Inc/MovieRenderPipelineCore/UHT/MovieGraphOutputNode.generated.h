// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphOutputNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphOutputNode_generated_h
#error "MovieGraphOutputNode.generated.h already included, missing '#pragma once' in MovieGraphOutputNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphOutputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphOutputNode ****************************************************
struct Z_Construct_UClass_UMovieGraphOutputNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphOutputNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphOutputNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphOutputNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphOutputNode(UMovieGraphOutputNode&&) = delete; \
	UMovieGraphOutputNode(const UMovieGraphOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphOutputNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphOutputNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphOutputNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphOutputNode;

// ********** End Class UMovieGraphOutputNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
