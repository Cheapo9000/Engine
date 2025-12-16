// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioInsightsEditorSettings.h"

#ifdef AUDIOINSIGHTSEDITOR_AudioInsightsEditorSettings_generated_h
#error "AudioInsightsEditorSettings.generated.h already included, missing '#pragma once' in AudioInsightsEditorSettings.h"
#endif
#define AUDIOINSIGHTSEDITOR_AudioInsightsEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioInsightsEditorSettings *********************************************
struct Z_Construct_UClass_UAudioInsightsEditorSettings_Statics;
AUDIOINSIGHTSEDITOR_API UClass* Z_Construct_UClass_UAudioInsightsEditorSettings_NoRegister();

#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioInsightsEditorSettings(); \
	friend struct ::Z_Construct_UClass_UAudioInsightsEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOINSIGHTSEDITOR_API UClass* ::Z_Construct_UClass_UAudioInsightsEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioInsightsEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioInsightsEditor"), Z_Construct_UClass_UAudioInsightsEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioInsightsEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioInsightsEditorSettings(UAudioInsightsEditorSettings&&) = delete; \
	UAudioInsightsEditorSettings(const UAudioInsightsEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOINSIGHTSEDITOR_API, UAudioInsightsEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioInsightsEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioInsightsEditorSettings) \
	AUDIOINSIGHTSEDITOR_API virtual ~UAudioInsightsEditorSettings();


#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_16_PROLOG
#define FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioInsightsEditorSettings;

// ********** End Class UAudioInsightsEditorSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioInsights_Source_AudioInsightsEditor_Public_AudioInsightsEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
