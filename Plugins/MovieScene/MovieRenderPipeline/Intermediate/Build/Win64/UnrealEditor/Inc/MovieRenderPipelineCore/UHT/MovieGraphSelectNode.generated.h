// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphSelectNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphSelectNode_generated_h
#error "MovieGraphSelectNode.generated.h already included, missing '#pragma once' in MovieGraphSelectNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphSelectNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphSelectNode ****************************************************
struct Z_Construct_UClass_UMovieGraphSelectNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSelectNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSelectNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphSelectNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphSelectNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphSelectNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphSelectNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphSelectNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphSelectNode(UMovieGraphSelectNode&&) = delete; \
	UMovieGraphSelectNode(const UMovieGraphSelectNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphSelectNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSelectNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphSelectNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphSelectNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphSelectNode;

// ********** End Class UMovieGraphSelectNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphSelectNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
