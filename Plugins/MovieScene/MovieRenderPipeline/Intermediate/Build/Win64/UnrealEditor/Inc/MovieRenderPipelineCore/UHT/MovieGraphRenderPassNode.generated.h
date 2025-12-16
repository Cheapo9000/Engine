// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphRenderPassNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphRenderPassNode_generated_h
#error "MovieGraphRenderPassNode.generated.h already included, missing '#pragma once' in MovieGraphRenderPassNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphRenderPassNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphRenderPassNode ************************************************
struct Z_Construct_UClass_UMovieGraphRenderPassNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphRenderPassNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphRenderPassNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphRenderPassNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphRenderPassNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphRenderPassNode(UMovieGraphRenderPassNode&&) = delete; \
	UMovieGraphRenderPassNode(const UMovieGraphRenderPassNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphRenderPassNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphRenderPassNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphRenderPassNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphRenderPassNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_24_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphRenderPassNode;

// ********** End Class UMovieGraphRenderPassNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
