// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineImagePassBase.h"

#ifdef MOVIERENDERPIPELINERENDERPASSES_MoviePipelineImagePassBase_generated_h
#error "MoviePipelineImagePassBase.generated.h already included, missing '#pragma once' in MoviePipelineImagePassBase.h"
#endif
#define MOVIERENDERPIPELINERENDERPASSES_MoviePipelineImagePassBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineImagePassBase **********************************************
struct Z_Construct_UClass_UMoviePipelineImagePassBase_Statics;
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineImagePassBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineImagePassBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINERENDERPASSES_API UClass* ::Z_Construct_UClass_UMoviePipelineImagePassBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineImagePassBase, UMoviePipelineRenderPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineRenderPasses"), Z_Construct_UClass_UMoviePipelineImagePassBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineImagePassBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_125_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineImagePassBase(UMoviePipelineImagePassBase&&) = delete; \
	UMoviePipelineImagePassBase(const UMoviePipelineImagePassBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINERENDERPASSES_API, UMoviePipelineImagePassBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineImagePassBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineImagePassBase) \
	MOVIERENDERPIPELINERENDERPASSES_API virtual ~UMoviePipelineImagePassBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_122_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineImagePassBase;

// ********** End Class UMoviePipelineImagePassBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
