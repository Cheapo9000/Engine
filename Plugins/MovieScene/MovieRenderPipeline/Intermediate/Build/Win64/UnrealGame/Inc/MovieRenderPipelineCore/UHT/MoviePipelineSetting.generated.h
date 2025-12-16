// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineSetting.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineSetting_generated_h
#error "MoviePipelineSetting.generated.h already included, missing '#pragma once' in MoviePipelineSetting.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineSetting ****************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execBuildNewProcessCommandLineArgs);


struct Z_Construct_UClass_UMoviePipelineSetting_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineSetting(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineSetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineSetting_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineSetting, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineSetting_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineSetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineSetting(UMoviePipelineSetting&&) = delete; \
	UMoviePipelineSetting(const UMoviePipelineSetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineSetting); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineSetting) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineSetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_27_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineSetting;

// ********** End Class UMoviePipelineSetting ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
