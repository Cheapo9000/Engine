// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineRenderPass.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineRenderPass_generated_h
#error "MoviePipelineRenderPass.generated.h already included, missing '#pragma once' in MoviePipelineRenderPass.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineRenderPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineRenderPass *************************************************
struct Z_Construct_UClass_UMoviePipelineRenderPass_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineRenderPass(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineRenderPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineRenderPass, UMoviePipelineSetting, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineRenderPass)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMoviePipelineRenderPass(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineRenderPass(UMoviePipelineRenderPass&&) = delete; \
	UMoviePipelineRenderPass(const UMoviePipelineRenderPass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineRenderPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineRenderPass); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineRenderPass) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineRenderPass();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_10_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineRenderPass;

// ********** End Class UMoviePipelineRenderPass ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
