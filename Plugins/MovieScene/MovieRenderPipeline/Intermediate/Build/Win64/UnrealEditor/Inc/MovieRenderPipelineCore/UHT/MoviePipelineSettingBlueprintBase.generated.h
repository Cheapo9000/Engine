// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineSettingBlueprintBase.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineSettingBlueprintBase_generated_h
#error "MoviePipelineSettingBlueprintBase.generated.h already included, missing '#pragma once' in MoviePipelineSettingBlueprintBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineSettingBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipeline;
class UMoviePipelineExecutorJob;
struct FMoviePipelineFormatArgs;

// ********** Begin Class UMoviePipelineSetting_BlueprintBase **************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReceiveGetFormatArguments);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineSetting_BlueprintBase(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineSetting_BlueprintBase, UMoviePipelineSetting, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineSetting_BlueprintBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineSetting_BlueprintBase(UMoviePipelineSetting_BlueprintBase&&) = delete; \
	UMoviePipelineSetting_BlueprintBase(const UMoviePipelineSetting_BlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineSetting_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineSetting_BlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineSetting_BlueprintBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineSetting_BlueprintBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineSetting_BlueprintBase;

// ********** End Class UMoviePipelineSetting_BlueprintBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
