// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphDebugNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphDebugNode_generated_h
#error "MovieGraphDebugNode.generated.h already included, missing '#pragma once' in MovieGraphDebugNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphDebugNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphDebugSettingNode **********************************************
struct Z_Construct_UClass_UMovieGraphDebugSettingNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDebugSettingNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphDebugSettingNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphDebugSettingNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphDebugSettingNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphDebugSettingNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphDebugSettingNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphDebugSettingNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphDebugSettingNode(UMovieGraphDebugSettingNode&&) = delete; \
	UMovieGraphDebugSettingNode(const UMovieGraphDebugSettingNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphDebugSettingNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphDebugSettingNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphDebugSettingNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphDebugSettingNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_11_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphDebugSettingNode;

// ********** End Class UMovieGraphDebugSettingNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphDebugNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
