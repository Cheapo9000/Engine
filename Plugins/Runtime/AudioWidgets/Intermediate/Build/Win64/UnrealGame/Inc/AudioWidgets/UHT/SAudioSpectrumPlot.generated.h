// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SAudioSpectrumPlot.h"

#ifdef AUDIOWIDGETS_SAudioSpectrumPlot_generated_h
#error "SAudioSpectrumPlot.generated.h already included, missing '#pragma once' in SAudioSpectrumPlot.h"
#endif
#define AUDIOWIDGETS_SAudioSpectrumPlot_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h

// ********** Begin Enum EAudioSpectrumPlotTilt ****************************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMPLOTTILT(op) \
	op(EAudioSpectrumPlotTilt::NoTilt) \
	op(EAudioSpectrumPlotTilt::Plus1_5dBPerOctave) \
	op(EAudioSpectrumPlotTilt::Plus3dBPerOctave) \
	op(EAudioSpectrumPlotTilt::Plus4_5dBPerOctave) \
	op(EAudioSpectrumPlotTilt::Plus6dBPerOctave) 

enum class EAudioSpectrumPlotTilt : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumPlotTilt> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumPlotTilt>();
// ********** End Enum EAudioSpectrumPlotTilt ******************************************************

// ********** Begin Enum EAudioSpectrumPlotFrequencyAxisScale **************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMPLOTFREQUENCYAXISSCALE(op) \
	op(EAudioSpectrumPlotFrequencyAxisScale::Linear) \
	op(EAudioSpectrumPlotFrequencyAxisScale::Logarithmic) 

enum class EAudioSpectrumPlotFrequencyAxisScale : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumPlotFrequencyAxisScale> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumPlotFrequencyAxisScale>();
// ********** End Enum EAudioSpectrumPlotFrequencyAxisScale ****************************************

// ********** Begin Enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode ****************************
#define FOREACH_ENUM_EAUDIOSPECTRUMPLOTFREQUENCYAXISPIXELBUCKETMODE(op) \
	op(EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Sample) \
	op(EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Peak) \
	op(EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Average) 

enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumPlotFrequencyAxisPixelBucketMode> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumPlotFrequencyAxisPixelBucketMode>();
// ********** End Enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode ******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
