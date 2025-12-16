// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Nodes/MovieGraphExecuteScriptNode.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphExecuteScriptNode_generated_h
#error "MovieGraphExecuteScriptNode.generated.h already included, missing '#pragma once' in MovieGraphExecuteScriptNode.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphExecuteScriptNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
struct FMoviePipelineOutputData;

// ********** Begin Class UMovieGraphScriptBase ****************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPerShotCallbackNeeded); \
	DECLARE_FUNCTION(execOnShotFinished); \
	DECLARE_FUNCTION(execOnShotStart); \
	DECLARE_FUNCTION(execOnJobFinished); \
	DECLARE_FUNCTION(execOnJobStart);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMovieGraphScriptBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphScriptBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphScriptBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphScriptBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphScriptBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphScriptBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphScriptBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphScriptBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphScriptBase(UMovieGraphScriptBase&&) = delete; \
	UMovieGraphScriptBase(const UMovieGraphScriptBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphScriptBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphScriptBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_48_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphScriptBase;

// ********** End Class UMovieGraphScriptBase ******************************************************

// ********** Begin Class UMovieGraphExecuteScriptNode *********************************************
struct Z_Construct_UClass_UMovieGraphExecuteScriptNode_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphExecuteScriptNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphExecuteScriptNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphExecuteScriptNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphExecuteScriptNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphExecuteScriptNode, UMovieGraphSettingNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphExecuteScriptNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphExecuteScriptNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_182_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphExecuteScriptNode(UMovieGraphExecuteScriptNode&&) = delete; \
	UMovieGraphExecuteScriptNode(const UMovieGraphExecuteScriptNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphExecuteScriptNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphExecuteScriptNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphExecuteScriptNode) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphExecuteScriptNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_179_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphExecuteScriptNode;

// ********** End Class UMovieGraphExecuteScriptNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphExecuteScriptNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
