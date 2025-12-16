// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineConsoleVariableSetting.h"

#ifdef MOVIERENDERPIPELINESETTINGS_MoviePipelineConsoleVariableSetting_generated_h
#error "MoviePipelineConsoleVariableSetting.generated.h already included, missing '#pragma once' in MoviePipelineConsoleVariableSetting.h"
#endif
#define MOVIERENDERPIPELINESETTINGS_MoviePipelineConsoleVariableSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoviePipelineConsoleVariableEntry;

// ********** Begin Class UMoviePipelineConsoleVariableSetting *************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateConsoleVariableEnableState); \
	DECLARE_FUNCTION(execAddConsoleVariable); \
	DECLARE_FUNCTION(execAddOrUpdateConsoleVariable); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execGetConsoleVariables);


struct Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics;
MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineConsoleVariableSetting(); \
	friend struct ::Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINESETTINGS_API UClass* ::Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineConsoleVariableSetting, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineSettings"), Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineConsoleVariableSetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINESETTINGS_API UMoviePipelineConsoleVariableSetting(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineConsoleVariableSetting(UMoviePipelineConsoleVariableSetting&&) = delete; \
	UMoviePipelineConsoleVariableSetting(const UMoviePipelineConsoleVariableSetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINESETTINGS_API, UMoviePipelineConsoleVariableSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConsoleVariableSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineConsoleVariableSetting) \
	MOVIERENDERPIPELINESETTINGS_API virtual ~UMoviePipelineConsoleVariableSetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineConsoleVariableSetting;

// ********** End Class UMoviePipelineConsoleVariableSetting ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
