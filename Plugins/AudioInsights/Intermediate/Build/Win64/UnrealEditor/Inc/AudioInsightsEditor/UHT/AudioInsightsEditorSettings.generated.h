// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioInsightsEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOINSIGHTSEDITOR_AudioInsightsEditorSettings_generated_h
#error "AudioInsightsEditorSettings.generated.h already included, missing '#pragma once' in AudioInsightsEditorSettings.h"
#endif
#define AUDIOINSIGHTSEDITOR_AudioInsightsEditorSettings_generated_h

#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioInsightsEditorSettings(); \
	friend struct Z_Construct_UClass_UAudioInsightsEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioInsightsEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioInsightsEditor"), NO_API) \
	DECLARE_SERIALIZER(UAudioInsightsEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioInsightsEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioInsightsEditorSettings(UAudioInsightsEditorSettings&&); \
	UAudioInsightsEditorSettings(const UAudioInsightsEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioInsightsEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioInsightsEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioInsightsEditorSettings) \
	NO_API virtual ~UAudioInsightsEditorSettings();


#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_9_PROLOG
#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOINSIGHTSEDITOR_API UClass* StaticClass<class UAudioInsightsEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
