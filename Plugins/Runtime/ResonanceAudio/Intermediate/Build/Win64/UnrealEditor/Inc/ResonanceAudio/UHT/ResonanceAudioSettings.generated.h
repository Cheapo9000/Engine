// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioSettings.h"

#ifdef RESONANCEAUDIO_ResonanceAudioSettings_generated_h
#error "ResonanceAudioSettings.generated.h already included, missing '#pragma once' in ResonanceAudioSettings.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UResonanceAudioSettings **************************************************
struct Z_Construct_UClass_UResonanceAudioSettings_Statics;
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioSettings(); \
	friend struct ::Z_Construct_UClass_UResonanceAudioSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESONANCEAUDIO_API UClass* ::Z_Construct_UClass_UResonanceAudioSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UResonanceAudioSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), Z_Construct_UClass_UResonanceAudioSettings_NoRegister) \
	DECLARE_SERIALIZER(UResonanceAudioSettings)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResonanceAudioSettings(UResonanceAudioSettings&&) = delete; \
	UResonanceAudioSettings(const UResonanceAudioSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RESONANCEAUDIO_API, UResonanceAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResonanceAudioSettings) \
	RESONANCEAUDIO_API virtual ~UResonanceAudioSettings();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResonanceAudioSettings;

// ********** End Class UResonanceAudioSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
