// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineAssetEditor.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelineAssetEditor_generated_h
#error "MoviePipelineAssetEditor.generated.h already included, missing '#pragma once' in MoviePipelineAssetEditor.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelineAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineAssetEditor ************************************************
struct Z_Construct_UClass_UMoviePipelineAssetEditor_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineAssetEditor_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineAssetEditor(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineAssetEditor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineAssetEditor(UMoviePipelineAssetEditor&&) = delete; \
	UMoviePipelineAssetEditor(const UMoviePipelineAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineAssetEditor) \
	NO_API virtual ~UMoviePipelineAssetEditor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_10_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineAssetEditor;

// ********** End Class UMoviePipelineAssetEditor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
