// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphImagePassBaseNode.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MovieGraphImagePassBaseNode_generated_h
#error "MovieGraphImagePassBaseNode.generated.h already included, missing '#pragma once' in MovieGraphImagePassBaseNode.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MovieGraphImagePassBaseNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphImagePassBaseNode *********************************************
struct Z_Construct_UClass_UMovieGraphImagePassBaseNode_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMovieGraphImagePassBaseNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphImagePassBaseNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphImagePassBaseNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMovieGraphImagePassBaseNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphImagePassBaseNode, UMovieGraphRenderPassNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMovieGraphImagePassBaseNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphImagePassBaseNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphImagePassBaseNode(UMovieGraphImagePassBaseNode&&) = delete; \
	UMovieGraphImagePassBaseNode(const UMovieGraphImagePassBaseNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMovieGraphImagePassBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphImagePassBaseNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphImagePassBaseNode) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMovieGraphImagePassBaseNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_25_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphImagePassBaseNode;

// ********** End Class UMovieGraphImagePassBaseNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_Graph_Nodes_MovieGraphImagePassBaseNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
