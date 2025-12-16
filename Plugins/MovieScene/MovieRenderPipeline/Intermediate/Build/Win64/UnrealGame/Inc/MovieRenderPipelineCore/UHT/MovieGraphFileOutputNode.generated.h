// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphFileOutputNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphFileOutputNode_generated_h
#error "MovieGraphFileOutputNode.generated.h already included, missing '#pragma once' in MovieGraphFileOutputNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphFileOutputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphFileOutputNode ************************************************
struct Z_Construct_UClass_UMovieGraphFileOutputNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphFileOutputNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphFileOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphFileOutputNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphFileOutputNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphFileOutputNode(UMovieGraphFileOutputNode&&) = delete; \
	UMovieGraphFileOutputNode(const UMovieGraphFileOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphFileOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphFileOutputNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphFileOutputNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphFileOutputNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphFileOutputNode;

// ********** End Class UMovieGraphFileOutputNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphFileOutputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
