// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioOscilloscopeEnums.h"

#ifdef AUDIOWIDGETS_AudioOscilloscopeEnums_generated_h
#error "AudioOscilloscopeEnums.generated.h already included, missing '#pragma once' in AudioOscilloscopeEnums.h"
#endif
#define AUDIOWIDGETS_AudioOscilloscopeEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h

// ********** Begin Enum EAudioOscilloscopeTriggerMode *********************************************
#define FOREACH_ENUM_EAUDIOOSCILLOSCOPETRIGGERMODE(op) \
	op(EAudioOscilloscopeTriggerMode::None) \
	op(EAudioOscilloscopeTriggerMode::Rising) \
	op(EAudioOscilloscopeTriggerMode::Falling) 

enum class EAudioOscilloscopeTriggerMode : uint8;
template<> struct TIsUEnumClass<EAudioOscilloscopeTriggerMode> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioOscilloscopeTriggerMode>();
// ********** End Enum EAudioOscilloscopeTriggerMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
