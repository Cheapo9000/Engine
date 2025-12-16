// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphBranchNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphBranchNode_generated_h
#error "MovieGraphBranchNode.generated.h already included, missing '#pragma once' in MovieGraphBranchNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphBranchNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphBranchNode ****************************************************
struct Z_Construct_UClass_UMovieGraphBranchNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBranchNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphBranchNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphBranchNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphBranchNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphBranchNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphBranchNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphBranchNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphBranchNode(UMovieGraphBranchNode&&) = delete; \
	UMovieGraphBranchNode(const UMovieGraphBranchNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphBranchNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphBranchNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphBranchNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphBranchNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphBranchNode;

// ********** End Class UMovieGraphBranchNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
