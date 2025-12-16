// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieEdGraphOutputNode.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieEdGraphOutputNode_generated_h
#error "MovieEdGraphOutputNode.generated.h already included, missing '#pragma once' in MovieEdGraphOutputNode.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieEdGraphOutputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineEdGraphNodeOutput ******************************************
struct Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEdGraphNodeOutput(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineEdGraphNodeOutput, UMoviePipelineEdGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineEdGraphNodeOutput_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineEdGraphNodeOutput)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEdGraphNodeOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineEdGraphNodeOutput(UMoviePipelineEdGraphNodeOutput&&) = delete; \
	UMoviePipelineEdGraphNodeOutput(const UMoviePipelineEdGraphNodeOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEdGraphNodeOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEdGraphNodeOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEdGraphNodeOutput) \
	NO_API virtual ~UMoviePipelineEdGraphNodeOutput();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_8_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineEdGraphNodeOutput;

// ********** End Class UMoviePipelineEdGraphNodeOutput ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphOutputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
