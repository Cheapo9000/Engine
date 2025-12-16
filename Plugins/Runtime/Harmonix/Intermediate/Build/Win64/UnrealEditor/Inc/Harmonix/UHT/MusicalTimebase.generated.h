// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Harmonix/MusicalTimebase.h"

#ifdef HARMONIX_MusicalTimebase_generated_h
#error "MusicalTimebase.generated.h already included, missing '#pragma once' in MusicalTimebase.h"
#endif
#define HARMONIX_MusicalTimebase_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_MusicalTimebase_h

// ********** Begin Enum ECalibratedMusicTimebase **************************************************
#define FOREACH_ENUM_ECALIBRATEDMUSICTIMEBASE(op) \
	op(ECalibratedMusicTimebase::AudioRenderTime) \
	op(ECalibratedMusicTimebase::ExperiencedTime) \
	op(ECalibratedMusicTimebase::VideoRenderTime) \
	op(ECalibratedMusicTimebase::RawAudioRenderTime) \
	op(ECalibratedMusicTimebase::Count) 

enum class ECalibratedMusicTimebase : uint8;
template<> struct TIsUEnumClass<ECalibratedMusicTimebase> { enum { Value = true }; };
template<> HARMONIX_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibratedMusicTimebase>();
// ********** End Enum ECalibratedMusicTimebase ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
