// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderGrid/RenderGridQueue.h"

#ifdef RENDERGRID_RenderGridQueue_generated_h
#error "RenderGridQueue.generated.h already included, missing '#pragma once' in RenderGridQueue.h"
#endif
#define RENDERGRID_RenderGridQueue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URenderGrid;
class URenderGridJob;
class URenderGridQueue;
struct FGuid;

// ********** Begin Class URenderGridMoviePipelineRenderJob ****************************************
struct Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridMoviePipelineRenderJob(); \
	friend struct ::Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridMoviePipelineRenderJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister) \
	DECLARE_SERIALIZER(URenderGridMoviePipelineRenderJob)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridMoviePipelineRenderJob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridMoviePipelineRenderJob(URenderGridMoviePipelineRenderJob&&) = delete; \
	URenderGridMoviePipelineRenderJob(const URenderGridMoviePipelineRenderJob&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridMoviePipelineRenderJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridMoviePipelineRenderJob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridMoviePipelineRenderJob) \
	NO_API virtual ~URenderGridMoviePipelineRenderJob();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_86_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridMoviePipelineRenderJob;

// ********** End Class URenderGridMoviePipelineRenderJob ******************************************

// ********** Begin Class URenderGridQueue *********************************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStatusPercentage); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetJobsCompletedCount); \
	DECLARE_FUNCTION(execGetJobsRemainingCount); \
	DECLARE_FUNCTION(execGetJobsCount); \
	DECLARE_FUNCTION(execGetJobs); \
	DECLARE_FUNCTION(execGetJobStatusPercentage); \
	DECLARE_FUNCTION(execGetJobStatus); \
	DECLARE_FUNCTION(execGetCurrentlyRenderingJob); \
	DECLARE_FUNCTION(execGetRenderGrid); \
	DECLARE_FUNCTION(execIsCurrentlyRendering); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsCanceled); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsStarted); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execAddJob); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execToDebugString); \
	DECLARE_FUNCTION(execGetRemainingRenderingQueuesCount); \
	DECLARE_FUNCTION(execGetCurrentlyRenderingQueue); \
	DECLARE_FUNCTION(execCloseEditorOnCompletion);


struct Z_Construct_UClass_URenderGridQueue_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridQueue_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridQueue(); \
	friend struct ::Z_Construct_UClass_URenderGridQueue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridQueue_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridQueue_NoRegister) \
	DECLARE_SERIALIZER(URenderGridQueue)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridQueue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridQueue(URenderGridQueue&&) = delete; \
	URenderGridQueue(const URenderGridQueue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridQueue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridQueue) \
	NO_API virtual ~URenderGridQueue();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_182_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridQueue;

// ********** End Class URenderGridQueue ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
