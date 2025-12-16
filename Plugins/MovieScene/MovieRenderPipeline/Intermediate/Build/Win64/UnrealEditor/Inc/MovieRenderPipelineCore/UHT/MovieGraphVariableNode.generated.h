// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphVariableNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphVariableNode_generated_h
#error "MovieGraphVariableNode.generated.h already included, missing '#pragma once' in MovieGraphVariableNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphVariableNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieGraphVariable;

// ********** Begin Class UMovieGraphVariableNode **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsGlobalVariable); \
	DECLARE_FUNCTION(execSetVariable); \
	DECLARE_FUNCTION(execGetVariable);


struct Z_Construct_UClass_UMovieGraphVariableNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVariableNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphVariableNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphVariableNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphVariableNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphVariableNode, UMovieGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphVariableNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphVariableNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphVariableNode(UMovieGraphVariableNode&&) = delete; \
	UMovieGraphVariableNode(const UMovieGraphVariableNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphVariableNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphVariableNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphVariableNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphVariableNode;

// ********** End Class UMovieGraphVariableNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphVariableNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
