// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieEdGraphInputNode.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieEdGraphInputNode_generated_h
#error "MovieEdGraphInputNode.generated.h already included, missing '#pragma once' in MovieEdGraphInputNode.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieEdGraphInputNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineEdGraphNodeInput *******************************************
struct Z_Construct_UClass_UMoviePipelineEdGraphNodeInput_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeInput_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEdGraphNodeInput(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineEdGraphNodeInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineEdGraphNodeInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineEdGraphNodeInput, UMoviePipelineEdGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineEdGraphNodeInput_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineEdGraphNodeInput)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEdGraphNodeInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineEdGraphNodeInput(UMoviePipelineEdGraphNodeInput&&) = delete; \
	UMoviePipelineEdGraphNodeInput(const UMoviePipelineEdGraphNodeInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEdGraphNodeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEdGraphNodeInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEdGraphNodeInput) \
	NO_API virtual ~UMoviePipelineEdGraphNodeInput();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_9_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineEdGraphNodeInput;

// ********** End Class UMoviePipelineEdGraphNodeInput *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphInputNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
