// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSpectrumAnalyzer.h"

#ifdef AUDIOWIDGETS_AudioSpectrumAnalyzer_generated_h
#error "AudioSpectrumAnalyzer.generated.h already included, missing '#pragma once' in AudioSpectrumAnalyzer.h"
#endif
#define AUDIOWIDGETS_AudioSpectrumAnalyzer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpectrumAnalyzerRackUnitSettings *********************************
struct Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics;
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics; \
	AUDIOWIDGETS_API static class UScriptStruct* StaticStruct();


struct FSpectrumAnalyzerRackUnitSettings;
// ********** End ScriptStruct FSpectrumAnalyzerRackUnitSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h

// ********** Begin Enum EAudioSpectrumAnalyzerBallistics ******************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMANALYZERBALLISTICS(op) \
	op(EAudioSpectrumAnalyzerBallistics::Analog) \
	op(EAudioSpectrumAnalyzerBallistics::Digital) 

enum class EAudioSpectrumAnalyzerBallistics : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumAnalyzerBallistics> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumAnalyzerBallistics>();
// ********** End Enum EAudioSpectrumAnalyzerBallistics ********************************************

// ********** Begin Enum EAudioSpectrumAnalyzerType ************************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMANALYZERTYPE(op) \
	op(EAudioSpectrumAnalyzerType::FFT) \
	op(EAudioSpectrumAnalyzerType::CQT) 

enum class EAudioSpectrumAnalyzerType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumAnalyzerType> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumAnalyzerType>();
// ********** End Enum EAudioSpectrumAnalyzerType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
