// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphProjectSettings.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphProjectSettings_generated_h
#error "MovieGraphProjectSettings.generated.h already included, missing '#pragma once' in MovieGraphProjectSettings.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphProjectSettings ***********************************************
struct Z_Construct_UClass_UMovieGraphProjectSettings_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphProjectSettings(); \
	friend struct ::Z_Construct_UClass_UMovieGraphProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MovieRenderPipeline");} \



#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphProjectSettings(UMovieGraphProjectSettings&&) = delete; \
	UMovieGraphProjectSettings(const UMovieGraphProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphProjectSettings) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphProjectSettings();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphProjectSettings;

// ********** End Class UMovieGraphProjectSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
