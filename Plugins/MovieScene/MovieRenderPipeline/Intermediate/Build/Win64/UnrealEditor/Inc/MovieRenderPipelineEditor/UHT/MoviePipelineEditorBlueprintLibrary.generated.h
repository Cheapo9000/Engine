// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineEditorBlueprintLibrary.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelineEditorBlueprintLibrary_generated_h
#error "MoviePipelineEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in MoviePipelineEditorBlueprintLibrary.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelineEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;

// ********** Begin Class UMoviePipelineEditorBlueprintLibrary *************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveOutputDirectoryFromJob); \
	DECLARE_FUNCTION(execGetDisplayOutputPathFromJob); \
	DECLARE_FUNCTION(execEnsureJobHasDefaultSettings); \
	DECLARE_FUNCTION(execCreateJobFromSequence); \
	DECLARE_FUNCTION(execConvertManifestFileToString); \
	DECLARE_FUNCTION(execSaveQueueToManifestFile); \
	DECLARE_FUNCTION(execWarnUserOfUnsavedMap); \
	DECLARE_FUNCTION(execIsMapValidForRemoteRender); \
	DECLARE_FUNCTION(execExportConfigToAsset);


struct Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINEEDITOR_API UMoviePipelineEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineEditorBlueprintLibrary(UMoviePipelineEditorBlueprintLibrary&&) = delete; \
	UMoviePipelineEditorBlueprintLibrary(const UMoviePipelineEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMoviePipelineEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEditorBlueprintLibrary) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMoviePipelineEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_21_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineEditorBlueprintLibrary;

// ********** End Class UMoviePipelineEditorBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
