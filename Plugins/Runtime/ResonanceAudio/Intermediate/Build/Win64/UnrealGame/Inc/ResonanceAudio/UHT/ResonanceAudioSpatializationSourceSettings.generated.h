// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioSpatializationSourceSettings.h"

#ifdef RESONANCEAUDIO_ResonanceAudioSpatializationSourceSettings_generated_h
#error "ResonanceAudioSpatializationSourceSettings.generated.h already included, missing '#pragma once' in ResonanceAudioSpatializationSourceSettings.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioSpatializationSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UResonanceAudioSpatializationSourceSettings ******************************
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSoundSourceSpread); \
	DECLARE_FUNCTION(execSetSoundSourceDirectivity);


struct Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics;
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioSpatializationSourceSettings(); \
	friend struct ::Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESONANCEAUDIO_API UClass* ::Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UResonanceAudioSpatializationSourceSettings, USpatializationPluginSourceSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(UResonanceAudioSpatializationSourceSettings)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResonanceAudioSpatializationSourceSettings(UResonanceAudioSpatializationSourceSettings&&) = delete; \
	UResonanceAudioSpatializationSourceSettings(const UResonanceAudioSpatializationSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RESONANCEAUDIO_API, UResonanceAudioSpatializationSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioSpatializationSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResonanceAudioSpatializationSourceSettings) \
	RESONANCEAUDIO_API virtual ~UResonanceAudioSpatializationSourceSettings();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResonanceAudioSpatializationSourceSettings;

// ********** End Class UResonanceAudioSpatializationSourceSettings ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
