// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineInProcessExecutorSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineInProcessExecutorSettings_generated_h
#error "MoviePipelineInProcessExecutorSettings.generated.h already included, missing '#pragma once' in MoviePipelineInProcessExecutorSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineInProcessExecutorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineInProcessExecutorSettings **********************************
struct Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineInProcessExecutorSettings(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineInProcessExecutorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineInProcessExecutorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineInProcessExecutorSettings(UMoviePipelineInProcessExecutorSettings&&) = delete; \
	UMoviePipelineInProcessExecutorSettings(const UMoviePipelineInProcessExecutorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineInProcessExecutorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineInProcessExecutorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineInProcessExecutorSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineInProcessExecutorSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineInProcessExecutorSettings;

// ********** End Class UMoviePipelineInProcessExecutorSettings ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
