// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePythonHostExecutor.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelinePythonHostExecutor_generated_h
#error "MoviePipelinePythonHostExecutor.generated.h already included, missing '#pragma once' in MoviePipelinePythonHostExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelinePythonHostExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineQueue;
class UWorld;

// ********** Begin Class UMoviePipelinePythonHostExecutor *****************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastLoadedWorld); \
	DECLARE_FUNCTION(execOnMapLoad); \
	DECLARE_FUNCTION(execExecuteDelayed);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelinePythonHostExecutor(); \
	friend struct ::Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelinePythonHostExecutor, UMoviePipelineExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelinePythonHostExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelinePythonHostExecutor(UMoviePipelinePythonHostExecutor&&) = delete; \
	UMoviePipelinePythonHostExecutor(const UMoviePipelinePythonHostExecutor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelinePythonHostExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePythonHostExecutor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelinePythonHostExecutor) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelinePythonHostExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelinePythonHostExecutor;

// ********** End Class UMoviePipelinePythonHostExecutor *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
