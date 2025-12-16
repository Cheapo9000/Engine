// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformEditorTransformationsSettings.h"

#ifdef WAVEFORMEDITOR_WaveformEditorTransformationsSettings_generated_h
#error "WaveformEditorTransformationsSettings.generated.h already included, missing '#pragma once' in WaveformEditorTransformationsSettings.h"
#endif
#define WAVEFORMEDITOR_WaveformEditorTransformationsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveformEditorTransformationsSettings ***********************************
struct Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics;
WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorTransformationsSettings_NoRegister();

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformEditorTransformationsSettings(); \
	friend struct ::Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFORMEDITOR_API UClass* ::Z_Construct_UClass_UWaveformEditorTransformationsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformEditorTransformationsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveformEditor"), Z_Construct_UClass_UWaveformEditorTransformationsSettings_NoRegister) \
	DECLARE_SERIALIZER(UWaveformEditorTransformationsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveformEditorTransformationsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformEditorTransformationsSettings(UWaveformEditorTransformationsSettings&&) = delete; \
	UWaveformEditorTransformationsSettings(const UWaveformEditorTransformationsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveformEditorTransformationsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformEditorTransformationsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformEditorTransformationsSettings) \
	NO_API virtual ~UWaveformEditorTransformationsSettings();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_15_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformEditorTransformationsSettings;

// ********** End Class UWaveformEditorTransformationsSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
