// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformEditorWidgetsSettings.h"

#ifdef WAVEFORMEDITORWIDGETS_WaveformEditorWidgetsSettings_generated_h
#error "WaveformEditorWidgetsSettings.generated.h already included, missing '#pragma once' in WaveformEditorWidgetsSettings.h"
#endif
#define WAVEFORMEDITORWIDGETS_WaveformEditorWidgetsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveformEditorWidgetsSettings *******************************************
struct Z_Construct_UClass_UWaveformEditorWidgetsSettings_Statics;
WAVEFORMEDITORWIDGETS_API UClass* Z_Construct_UClass_UWaveformEditorWidgetsSettings_NoRegister();

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformEditorWidgetsSettings(); \
	friend struct ::Z_Construct_UClass_UWaveformEditorWidgetsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFORMEDITORWIDGETS_API UClass* ::Z_Construct_UClass_UWaveformEditorWidgetsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformEditorWidgetsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveformEditorWidgets"), Z_Construct_UClass_UWaveformEditorWidgetsSettings_NoRegister) \
	DECLARE_SERIALIZER(UWaveformEditorWidgetsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformEditorWidgetsSettings(UWaveformEditorWidgetsSettings&&) = delete; \
	UWaveformEditorWidgetsSettings(const UWaveformEditorWidgetsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveformEditorWidgetsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformEditorWidgetsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformEditorWidgetsSettings) \
	NO_API virtual ~UWaveformEditorWidgetsSettings();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_11_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformEditorWidgetsSettings;

// ********** End Class UWaveformEditorWidgetsSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Private_WaveformEditorWidgetsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
