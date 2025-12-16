// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/AudioBufferConstants.h"

#ifdef HARMONIXDSP_AudioBufferConstants_generated_h
#error "AudioBufferConstants.generated.h already included, missing '#pragma once' in AudioBufferConstants.h"
#endif
#define HARMONIXDSP_AudioBufferConstants_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_AudioBufferConstants_h

// ********** Begin Enum ESpeakerChannelAssignment *************************************************
#define FOREACH_ENUM_ESPEAKERCHANNELASSIGNMENT(op) \
	op(ESpeakerChannelAssignment::LeftFront) \
	op(ESpeakerChannelAssignment::RightFront) \
	op(ESpeakerChannelAssignment::Center) \
	op(ESpeakerChannelAssignment::LFE) \
	op(ESpeakerChannelAssignment::LeftSurround) \
	op(ESpeakerChannelAssignment::RightSurround) \
	op(ESpeakerChannelAssignment::LeftRear) \
	op(ESpeakerChannelAssignment::RightRear) \
	op(ESpeakerChannelAssignment::FrontPair) \
	op(ESpeakerChannelAssignment::CenterAndLFE) \
	op(ESpeakerChannelAssignment::SurroundPair) \
	op(ESpeakerChannelAssignment::RearPair) \
	op(ESpeakerChannelAssignment::AmbisonicW) \
	op(ESpeakerChannelAssignment::AmbisonicX) \
	op(ESpeakerChannelAssignment::AmbisonicY) \
	op(ESpeakerChannelAssignment::AmbisonicZ) \
	op(ESpeakerChannelAssignment::AmbisonicWXPair) \
	op(ESpeakerChannelAssignment::AmbisonicYZPair) \
	op(ESpeakerChannelAssignment::UnspecifiedMono) \
	op(ESpeakerChannelAssignment::Num) \
	op(ESpeakerChannelAssignment::Invalid) 

enum class ESpeakerChannelAssignment : uint8;
template<> struct TIsUEnumClass<ESpeakerChannelAssignment> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeakerChannelAssignment>();
// ********** End Enum ESpeakerChannelAssignment ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
