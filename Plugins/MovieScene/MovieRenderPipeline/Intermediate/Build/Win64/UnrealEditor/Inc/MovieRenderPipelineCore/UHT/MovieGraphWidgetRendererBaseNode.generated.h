// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphWidgetRendererBaseNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphWidgetRendererBaseNode_generated_h
#error "MovieGraphWidgetRendererBaseNode.generated.h already included, missing '#pragma once' in MovieGraphWidgetRendererBaseNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphWidgetRendererBaseNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphWidgetRendererBaseNode ****************************************
struct Z_Construct_UClass_UMovieGraphWidgetRendererBaseNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphWidgetRendererBaseNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphWidgetRendererBaseNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphWidgetRendererBaseNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphWidgetRendererBaseNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphWidgetRendererBaseNode, UMovieGraphRenderPassNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphWidgetRendererBaseNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphWidgetRendererBaseNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphWidgetRendererBaseNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphWidgetRendererBaseNode(UMovieGraphWidgetRendererBaseNode&&) = delete; \
	UMovieGraphWidgetRendererBaseNode(const UMovieGraphWidgetRendererBaseNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphWidgetRendererBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphWidgetRendererBaseNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphWidgetRendererBaseNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphWidgetRendererBaseNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_22_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphWidgetRendererBaseNode;

// ********** End Class UMovieGraphWidgetRendererBaseNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphWidgetRendererBaseNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
