// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphAudioOutputNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphAudioOutputNode_generated_h
#error "MovieGraphAudioOutputNode.generated.h already included, missing '#pragma once' in MovieGraphAudioOutputNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphAudioOutputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphAudioOutputNode ***********************************************
struct Z_Construct_UClass_UMovieGraphAudioOutputNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphAudioOutputNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphAudioOutputNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphAudioOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphAudioOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphAudioOutputNode, UMovieGraphFileOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphAudioOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphAudioOutputNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphAudioOutputNode(UMovieGraphAudioOutputNode&&) = delete; \
	UMovieGraphAudioOutputNode(const UMovieGraphAudioOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphAudioOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphAudioOutputNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphAudioOutputNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphAudioOutputNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphAudioOutputNode;

// ********** End Class UMovieGraphAudioOutputNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
