// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineDebugSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineDebugSettings_generated_h
#error "MoviePipelineDebugSettings.generated.h already included, missing '#pragma once' in MoviePipelineDebugSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineDebugSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineDebugSettings **********************************************
struct Z_Construct_UClass_UMoviePipelineDebugSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDebugSettings(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineDebugSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDebugSettings, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDebugSettings)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDebugSettings(UMoviePipelineDebugSettings&&) = delete; \
	UMoviePipelineDebugSettings(const UMoviePipelineDebugSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineDebugSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDebugSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDebugSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineDebugSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_11_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDebugSettings;

// ********** End Class UMoviePipelineDebugSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
