// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieEdGraphVariableNode.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieEdGraphVariableNode_generated_h
#error "MovieEdGraphVariableNode.generated.h already included, missing '#pragma once' in MovieEdGraphVariableNode.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieEdGraphVariableNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineEdGraphVariableNode ****************************************
struct Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEdGraphVariableNode(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineEdGraphVariableNode, UMoviePipelineEdGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineEdGraphVariableNode_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineEdGraphVariableNode)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEdGraphVariableNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineEdGraphVariableNode(UMoviePipelineEdGraphVariableNode&&) = delete; \
	UMoviePipelineEdGraphVariableNode(const UMoviePipelineEdGraphVariableNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEdGraphVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEdGraphVariableNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEdGraphVariableNode) \
	NO_API virtual ~UMoviePipelineEdGraphVariableNode();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_10_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineEdGraphVariableNode;

// ********** End Class UMoviePipelineEdGraphVariableNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphVariableNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
