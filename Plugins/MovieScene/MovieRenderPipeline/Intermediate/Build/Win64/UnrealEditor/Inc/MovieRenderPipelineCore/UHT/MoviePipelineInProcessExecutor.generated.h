// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineInProcessExecutor.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineInProcessExecutor_generated_h
#error "MoviePipelineInProcessExecutor.generated.h already included, missing '#pragma once' in MoviePipelineInProcessExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineInProcessExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineInProcessExecutor ******************************************
struct Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineInProcessExecutor(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineInProcessExecutor, UMoviePipelineLinearExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineInProcessExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineInProcessExecutor(UMoviePipelineInProcessExecutor&&) = delete; \
	UMoviePipelineInProcessExecutor(const UMoviePipelineInProcessExecutor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineInProcessExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineInProcessExecutor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineInProcessExecutor) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineInProcessExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineInProcessExecutor;

// ********** End Class UMoviePipelineInProcessExecutor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
