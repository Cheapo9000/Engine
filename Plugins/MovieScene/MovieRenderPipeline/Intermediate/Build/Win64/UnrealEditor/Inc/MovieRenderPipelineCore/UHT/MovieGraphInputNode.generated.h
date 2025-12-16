// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphInputNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphInputNode_generated_h
#error "MovieGraphInputNode.generated.h already included, missing '#pragma once' in MovieGraphInputNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphInputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphInputNode *****************************************************
struct Z_Construct_UClass_UMovieGraphInputNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInputNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphInputNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphInputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphInputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphInputNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphInputNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphInputNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphInputNode(UMovieGraphInputNode&&) = delete; \
	UMovieGraphInputNode(const UMovieGraphInputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphInputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphInputNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphInputNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphInputNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphInputNode;

// ********** End Class UMovieGraphInputNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphInputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
