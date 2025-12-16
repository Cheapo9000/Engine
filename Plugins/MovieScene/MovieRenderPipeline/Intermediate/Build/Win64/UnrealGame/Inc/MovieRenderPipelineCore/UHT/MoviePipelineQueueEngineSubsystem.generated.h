// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineQueueEngineSubsystem.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineQueueEngineSubsystem_generated_h
#error "MoviePipelineQueueEngineSubsystem.generated.h already included, missing '#pragma once' in MoviePipelineQueueEngineSubsystem.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineQueueEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelSequence;
class UMoviePipelineExecutorBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;

// ********** Begin Class UMoviePipelineQueueEngineSubsystem ***************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execAllocateJob); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueWithExecutorInstance); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execGetQueue);


struct Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineQueueEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineQueueEngineSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineQueueEngineSubsystem(UMoviePipelineQueueEngineSubsystem&&) = delete; \
	UMoviePipelineQueueEngineSubsystem(const UMoviePipelineQueueEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineQueueEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueueEngineSubsystem) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineQueueEngineSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_23_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineQueueEngineSubsystem;

// ********** End Class UMoviePipelineQueueEngineSubsystem *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
