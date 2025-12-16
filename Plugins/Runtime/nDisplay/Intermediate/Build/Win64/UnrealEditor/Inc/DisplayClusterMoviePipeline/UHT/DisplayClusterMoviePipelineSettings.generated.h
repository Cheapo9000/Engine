// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterMoviePipelineSettings.h"

#ifdef DISPLAYCLUSTERMOVIEPIPELINE_DisplayClusterMoviePipelineSettings_generated_h
#error "DisplayClusterMoviePipelineSettings.generated.h already included, missing '#pragma once' in DisplayClusterMoviePipelineSettings.h"
#endif
#define DISPLAYCLUSTERMOVIEPIPELINE_DisplayClusterMoviePipelineSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDisplayClusterMoviePipelineConfiguration *************************
struct Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics;
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics; \
	DISPLAYCLUSTERMOVIEPIPELINE_API static class UScriptStruct* StaticStruct();


struct FDisplayClusterMoviePipelineConfiguration;
// ********** End ScriptStruct FDisplayClusterMoviePipelineConfiguration ***************************

// ********** Begin Class UDisplayClusterMoviePipelineSettings *************************************
struct Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics;
DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterMoviePipelineSettings(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERMOVIEPIPELINE_API UClass* ::Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterMoviePipelineSettings, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayClusterMoviePipeline"), Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterMoviePipelineSettings)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterMoviePipelineSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterMoviePipelineSettings(UDisplayClusterMoviePipelineSettings&&) = delete; \
	UDisplayClusterMoviePipelineSettings(const UDisplayClusterMoviePipelineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterMoviePipelineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterMoviePipelineSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDisplayClusterMoviePipelineSettings) \
	NO_API virtual ~UDisplayClusterMoviePipelineSettings();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterMoviePipelineSettings;

// ********** End Class UDisplayClusterMoviePipelineSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
