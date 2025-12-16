// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineExecutor.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h
#error "MoviePipelineExecutor.generated.h already included, missing '#pragma once' in MoviePipelineExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMoviePipeline;
class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;
class UObject;

// ********** Begin Delegate FOnMoviePipelineExecutorFinished **************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_22_DELEGATE \
MOVIERENDERPIPELINECORE_API void FOnMoviePipelineExecutorFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorFinished, UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);


// ********** End Delegate FOnMoviePipelineExecutorFinished ****************************************

// ********** Begin Delegate FOnMoviePipelineExecutorErrored ***************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_25_DELEGATE \
MOVIERENDERPIPELINECORE_API void FOnMoviePipelineExecutorErrored_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase* PipelineExecutor, UMoviePipeline* PipelineWithError, bool bIsFatal, const FText& ErrorText);


// ********** End Delegate FOnMoviePipelineExecutorErrored *****************************************

// ********** Begin Delegate FMoviePipelineSocketMessageRecieved ***********************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_28_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineSocketMessageRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineSocketMessageRecieved, const FString& Message);


// ********** End Delegate FMoviePipelineSocketMessageRecieved *************************************

// ********** Begin Delegate FMoviePipelineHttpResponseRecieved ************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_31_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineHttpResponseRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineHttpResponseRecieved, int32 RequestIndex, int32 ResponseCode, const FString& Message);


// ********** End Delegate FMoviePipelineHttpResponseRecieved **************************************

// ********** Begin Class UMoviePipelineExecutorBase ***********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execIsSocketConnected); \
	DECLARE_FUNCTION(execSendSocketMessage); \
	DECLARE_FUNCTION(execDisconnectSocket); \
	DECLARE_FUNCTION(execConnectSocket); \
	DECLARE_FUNCTION(execOnExecutorErroredImpl); \
	DECLARE_FUNCTION(execOnExecutorFinishedImpl); \
	DECLARE_FUNCTION(execSetMoviePipelineClass); \
	DECLARE_FUNCTION(execCancelAllJobs); \
	DECLARE_FUNCTION(execCancelCurrentJob); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage); \
	DECLARE_FUNCTION(execOnBeginFrame); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineExecutorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineExecutorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineExecutorBase(UMoviePipelineExecutorBase&&) = delete; \
	UMoviePipelineExecutorBase(const UMoviePipelineExecutorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineExecutorBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_45_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineExecutorBase;

// ********** End Class UMoviePipelineExecutorBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
