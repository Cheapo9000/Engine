// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieRenderPipelineSettings.h"

#ifdef MOVIERENDERPIPELINEEDITOR_MovieRenderPipelineSettings_generated_h
#error "MovieRenderPipelineSettings.generated.h already included, missing '#pragma once' in MovieRenderPipelineSettings.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieRenderPipelineSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieRenderPipelineProjectSettings **************************************
struct Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics;
MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieRenderPipelineProjectSettings(); \
	friend struct ::Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINEEDITOR_API UClass* ::Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieRenderPipelineProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieRenderPipelineProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieRenderPipelineProjectSettings(UMovieRenderPipelineProjectSettings&&) = delete; \
	UMovieRenderPipelineProjectSettings(const UMovieRenderPipelineProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINEEDITOR_API, UMovieRenderPipelineProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieRenderPipelineProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieRenderPipelineProjectSettings) \
	MOVIERENDERPIPELINEEDITOR_API virtual ~UMovieRenderPipelineProjectSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieRenderPipelineProjectSettings;

// ********** End Class UMovieRenderPipelineProjectSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
