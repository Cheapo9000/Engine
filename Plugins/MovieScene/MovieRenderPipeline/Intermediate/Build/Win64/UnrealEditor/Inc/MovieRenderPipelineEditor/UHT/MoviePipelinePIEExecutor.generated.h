// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePIEExecutor.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelinePIEExecutor_generated_h
#error "MoviePipelinePIEExecutor.generated.h already included, missing '#pragma once' in MoviePipelinePIEExecutor.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelinePIEExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorJob;
struct FDateTime;

// ********** Begin Delegate FOnMoviePipelineIndividualJobFinished *********************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_16_DELEGATE \
MOVIERENDERPIPELINEEDITOR_API void FOnMoviePipelineIndividualJobFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobFinished, UMoviePipelineExecutorJob* FinishedJob, bool bSuccess);


// ********** End Delegate FOnMoviePipelineIndividualJobFinished ***********************************

// ********** Begin Delegate FOnMoviePipelineIndividualJobStarted **********************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_20_DELEGATE \
MOVIERENDERPIPELINEEDITOR_API void FOnMoviePipelineIndividualJobStarted_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobStarted, UMoviePipelineExecutorJob* StartedJob);


// ********** End Delegate FOnMoviePipelineIndividualJobStarted ************************************

// ********** Begin Class UMoviePipelinePIEExecutor ************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllowUsingUnsavedLevels); \
	DECLARE_FUNCTION(execIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetInitializationTime);


struct Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelinePIEExecutor(); \
	friend struct ::Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelinePIEExecutor, UMoviePipelineLinearExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelinePIEExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelinePIEExecutor(UMoviePipelinePIEExecutor&&) = delete; \
	UMoviePipelinePIEExecutor(const UMoviePipelinePIEExecutor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMoviePipelinePIEExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePIEExecutor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelinePIEExecutor) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMoviePipelinePIEExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_28_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelinePIEExecutor;

// ********** End Class UMoviePipelinePIEExecutor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
