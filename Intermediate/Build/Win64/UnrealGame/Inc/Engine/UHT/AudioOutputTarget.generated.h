// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioOutputTarget.h"

#ifdef ENGINE_AudioOutputTarget_generated_h
#error "AudioOutputTarget.generated.h already included, missing '#pragma once' in AudioOutputTarget.h"
#endif
#define ENGINE_AudioOutputTarget_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h

// ********** Begin Enum EAudioOutputTarget ********************************************************
#define FOREACH_ENUM_EAUDIOOUTPUTTARGET(op) \
	op(EAudioOutputTarget::Speaker) \
	op(EAudioOutputTarget::Controller) \
	op(EAudioOutputTarget::ControllerFallbackToSpeaker) 

namespace EAudioOutputTarget { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioOutputTarget::Type>();
// ********** End Enum EAudioOutputTarget **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
