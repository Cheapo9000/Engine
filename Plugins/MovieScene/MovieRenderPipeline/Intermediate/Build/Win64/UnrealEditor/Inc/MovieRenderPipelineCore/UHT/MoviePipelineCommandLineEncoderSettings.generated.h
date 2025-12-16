// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineCommandLineEncoderSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoderSettings_generated_h
#error "MoviePipelineCommandLineEncoderSettings.generated.h already included, missing '#pragma once' in MoviePipelineCommandLineEncoderSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoviePipelineCommandLineEncoderSettings *********************************
struct Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineCommandLineEncoderSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineCommandLineEncoderSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineCommandLineEncoderSettings(UMoviePipelineCommandLineEncoderSettings&&) = delete; \
	UMoviePipelineCommandLineEncoderSettings(const UMoviePipelineCommandLineEncoderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMoviePipelineCommandLineEncoderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCommandLineEncoderSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineCommandLineEncoderSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMoviePipelineCommandLineEncoderSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_7_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineCommandLineEncoderSettings;

// ********** End Class UMoviePipelineCommandLineEncoderSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
