// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineQueueSubsystem.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelineQueueSubsystem_generated_h
#error "MoviePipelineQueueSubsystem.generated.h already included, missing '#pragma once' in MoviePipelineQueueSubsystem.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelineQueueSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;

// ********** Begin Class UMoviePipelineQueueSubsystem *********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueInstanceWithExecutorInstance); \
	DECLARE_FUNCTION(execRenderQueueWithExecutorInstance); \
	DECLARE_FUNCTION(execRenderQueueInstanceWithExecutor); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execIsQueueDirty); \
	DECLARE_FUNCTION(execLoadQueue); \
	DECLARE_FUNCTION(execGetQueue);


struct Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineQueueSubsystem_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueSubsystem(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMoviePipelineQueueSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineQueueSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMoviePipelineQueueSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineQueueSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineQueueSubsystem(UMoviePipelineQueueSubsystem&&) = delete; \
	UMoviePipelineQueueSubsystem(const UMoviePipelineQueueSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMoviePipelineQueueSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueueSubsystem) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMoviePipelineQueueSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineQueueSubsystem;

// ********** End Class UMoviePipelineQueueSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
