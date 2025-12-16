// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioDrivenAnimationMood.h"

#ifdef METAHUMANCORETECH_AudioDrivenAnimationMood_generated_h
#error "AudioDrivenAnimationMood.generated.h already included, missing '#pragma once' in AudioDrivenAnimationMood.h"
#endif
#define METAHUMANCORETECH_AudioDrivenAnimationMood_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_AudioDrivenAnimationMood_h

// ********** Begin Enum EAudioDrivenAnimationMood *************************************************
#define FOREACH_ENUM_EAUDIODRIVENANIMATIONMOOD(op) \
	op(EAudioDrivenAnimationMood::AutoDetect) \
	op(EAudioDrivenAnimationMood::Neutral) \
	op(EAudioDrivenAnimationMood::Happiness) \
	op(EAudioDrivenAnimationMood::Sadness) \
	op(EAudioDrivenAnimationMood::Disgust) \
	op(EAudioDrivenAnimationMood::Anger) \
	op(EAudioDrivenAnimationMood::Surprise) \
	op(EAudioDrivenAnimationMood::Fear) \
	op(EAudioDrivenAnimationMood::Confidence) \
	op(EAudioDrivenAnimationMood::Excitement) \
	op(EAudioDrivenAnimationMood::Boredom) \
	op(EAudioDrivenAnimationMood::Playfulness) \
	op(EAudioDrivenAnimationMood::Confusion) 

enum class EAudioDrivenAnimationMood : uint8;
template<> struct TIsUEnumClass<EAudioDrivenAnimationMood> { enum { Value = true }; };
template<> METAHUMANCORETECH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioDrivenAnimationMood>();
// ********** End Enum EAudioDrivenAnimationMood ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
