// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCompressionSettings.h"

#ifdef AUDIOPLATFORMCONFIGURATION_AudioCompressionSettings_generated_h
#error "AudioCompressionSettings.generated.h already included, missing '#pragma once' in AudioCompressionSettings.h"
#endif
#define AUDIOPLATFORMCONFIGURATION_AudioCompressionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPlatformRuntimeAudioCompressionOverrides *************************
struct Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics;
#define FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics; \
	AUDIOPLATFORMCONFIGURATION_API static class UScriptStruct* StaticStruct();


struct FPlatformRuntimeAudioCompressionOverrides;
// ********** End ScriptStruct FPlatformRuntimeAudioCompressionOverrides ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h

// ********** Begin Enum ESoundwaveSampleRateSettings **********************************************
#define FOREACH_ENUM_ESOUNDWAVESAMPLERATESETTINGS(op) \
	op(ESoundwaveSampleRateSettings::Max) \
	op(ESoundwaveSampleRateSettings::High) \
	op(ESoundwaveSampleRateSettings::Medium) \
	op(ESoundwaveSampleRateSettings::Low) \
	op(ESoundwaveSampleRateSettings::Min) 

enum class ESoundwaveSampleRateSettings : uint8;
template<> struct TIsUEnumClass<ESoundwaveSampleRateSettings> { enum { Value = true }; };
template<> AUDIOPLATFORMCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundwaveSampleRateSettings>();
// ********** End Enum ESoundwaveSampleRateSettings ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
