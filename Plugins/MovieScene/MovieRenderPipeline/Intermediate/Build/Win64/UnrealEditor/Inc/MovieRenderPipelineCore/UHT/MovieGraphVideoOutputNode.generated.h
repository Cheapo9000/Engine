// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphVideoOutputNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphVideoOutputNode_generated_h
#error "MovieGraphVideoOutputNode.generated.h already included, missing '#pragma once' in MovieGraphVideoOutputNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphVideoOutputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphVideoOutputNode ***********************************************
struct Z_Construct_UClass_UMovieGraphVideoOutputNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVideoOutputNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphVideoOutputNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphVideoOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphVideoOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphVideoOutputNode, UMovieGraphFileOutputNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphVideoOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphVideoOutputNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphVideoOutputNode(UMovieGraphVideoOutputNode&&) = delete; \
	UMovieGraphVideoOutputNode(const UMovieGraphVideoOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphVideoOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphVideoOutputNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphVideoOutputNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphVideoOutputNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_41_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphVideoOutputNode;

// ********** End Class UMovieGraphVideoOutputNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVideoOutputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
