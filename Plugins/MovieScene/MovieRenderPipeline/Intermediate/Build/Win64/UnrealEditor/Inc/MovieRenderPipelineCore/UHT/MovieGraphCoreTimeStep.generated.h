// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphCoreTimeStep.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphCoreTimeStep_generated_h
#error "MovieGraphCoreTimeStep.generated.h already included, missing '#pragma once' in MovieGraphCoreTimeStep.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphCoreTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphCoreTimeStep **************************************************
struct Z_Construct_UClass_UMovieGraphCoreTimeStep_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCoreTimeStep_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphCoreTimeStep(); \
	friend struct ::Z_Construct_UClass_UMovieGraphCoreTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphCoreTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphCoreTimeStep, UMovieGraphTimeStepBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphCoreTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphCoreTimeStep)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphCoreTimeStep(UMovieGraphCoreTimeStep&&) = delete; \
	UMovieGraphCoreTimeStep(const UMovieGraphCoreTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphCoreTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphCoreTimeStep); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphCoreTimeStep) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphCoreTimeStep();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_24_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphCoreTimeStep;

// ********** End Class UMovieGraphCoreTimeStep ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
