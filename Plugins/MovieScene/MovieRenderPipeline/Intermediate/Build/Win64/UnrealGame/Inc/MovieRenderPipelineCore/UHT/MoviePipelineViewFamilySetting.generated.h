// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineViewFamilySetting.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineViewFamilySetting_generated_h
#error "MoviePipelineViewFamilySetting.generated.h already included, missing '#pragma once' in MoviePipelineViewFamilySetting.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineViewFamilySetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineViewFamilySetting ******************************************
struct Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineViewFamilySetting(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineViewFamilySetting, UMoviePipelineSetting, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineViewFamilySetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMoviePipelineViewFamilySetting(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineViewFamilySetting(UMoviePipelineViewFamilySetting&&) = delete; \
	UMoviePipelineViewFamilySetting(const UMoviePipelineViewFamilySetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineViewFamilySetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineViewFamilySetting); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineViewFamilySetting) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineViewFamilySetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_10_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineViewFamilySetting;

// ********** End Class UMoviePipelineViewFamilySetting ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
