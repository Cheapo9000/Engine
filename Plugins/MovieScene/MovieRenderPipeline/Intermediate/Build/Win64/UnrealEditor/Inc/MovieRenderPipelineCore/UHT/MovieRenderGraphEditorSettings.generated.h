// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieRenderGraphEditorSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MovieRenderGraphEditorSettings_generated_h
#error "MovieRenderGraphEditorSettings.generated.h already included, missing '#pragma once' in MovieRenderGraphEditorSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieRenderGraphEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieRenderGraphEditorSettings ******************************************
struct Z_Construct_UClass_UMovieRenderGraphEditorSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderGraphEditorSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieRenderGraphEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMovieRenderGraphEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieRenderGraphEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieRenderGraphEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieRenderGraphEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieRenderGraphEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieRenderGraphEditorSettings(UMovieRenderGraphEditorSettings&&) = delete; \
	UMovieRenderGraphEditorSettings(const UMovieRenderGraphEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieRenderGraphEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieRenderGraphEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieRenderGraphEditorSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieRenderGraphEditorSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieRenderGraphEditorSettings;

// ********** End Class UMovieRenderGraphEditorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
