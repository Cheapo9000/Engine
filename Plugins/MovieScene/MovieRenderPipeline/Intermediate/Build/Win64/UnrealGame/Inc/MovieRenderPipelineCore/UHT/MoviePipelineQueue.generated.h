// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineQueue.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineQueue_generated_h
#error "MoviePipelineQueue.generated.h already included, missing '#pragma once' in MoviePipelineQueue.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineQueue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMovieGraphConfig;
class UMovieJobVariableAssignmentContainer;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;
class UMoviePipelineShotConfig;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FMoviePipelineSidecarCamera ***************************************
struct Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMoviePipelineSidecarCamera;
// ********** End ScriptStruct FMoviePipelineSidecarCamera *****************************************

// ********** Begin Class UMoviePipelineExecutorShot ***********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraName); \
	DECLARE_FUNCTION(execShouldRender); \
	DECLARE_FUNCTION(execGetOrCreateJobVariableAssignmentsForGraph); \
	DECLARE_FUNCTION(execSetGraphPreset); \
	DECLARE_FUNCTION(execGetGraphPreset); \
	DECLARE_FUNCTION(execIsUsingGraphConfiguration); \
	DECLARE_FUNCTION(execGetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execGetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execSetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execSetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execAllocateNewShotOverrideConfig); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMoviePipelineExecutorShot_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorShot(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineExecutorShot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineExecutorShot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorShot)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineExecutorShot(UMoviePipelineExecutorShot&&) = delete; \
	UMoviePipelineExecutorShot(const UMoviePipelineExecutorShot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineExecutorShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorShot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorShot) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineExecutorShot();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_50_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineExecutorShot;

// ********** End Class UMoviePipelineExecutorShot *************************************************

// ********** Begin Class UMoviePipelineExecutorJob ************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrCreateJobVariableAssignmentsForGraph); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetGraphPreset); \
	DECLARE_FUNCTION(execGetGraphPreset); \
	DECLARE_FUNCTION(execIsUsingGraphConfiguration); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execGetConfiguration); \
	DECLARE_FUNCTION(execGetPresetOrigin); \
	DECLARE_FUNCTION(execSetPresetOrigin); \
	DECLARE_FUNCTION(execOnDuplicated); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsConsumed); \
	DECLARE_FUNCTION(execSetConsumed); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMoviePipelineExecutorJob_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorJob(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineExecutorJob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineExecutorJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorJob)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineExecutorJob(UMoviePipelineExecutorJob&&) = delete; \
	UMoviePipelineExecutorJob(const UMoviePipelineExecutorJob&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineExecutorJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorJob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorJob) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineExecutorJob();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_303_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_306_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineExecutorJob;

// ********** End Class UMoviePipelineExecutorJob **************************************************

// ********** Begin Class UMoviePipelineQueue ******************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetJobIndex); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execSetQueueOrigin); \
	DECLARE_FUNCTION(execGetQueueOrigin); \
	DECLARE_FUNCTION(execGetJobs); \
	DECLARE_FUNCTION(execDuplicateJob); \
	DECLARE_FUNCTION(execDeleteAllJobs); \
	DECLARE_FUNCTION(execDeleteJob); \
	DECLARE_FUNCTION(execAllocateNewJob);


#if WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetIsDirty); \
	DECLARE_FUNCTION(execIsDirty);
#else // WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMoviePipelineQueue_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueue(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineQueue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineQueue_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineQueue_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineQueue)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineQueue(UMoviePipelineQueue&&) = delete; \
	UMoviePipelineQueue(const UMoviePipelineQueue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueue) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineQueue();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_651_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_654_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineQueue;

// ********** End Class UMoviePipelineQueue ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
