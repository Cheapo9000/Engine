// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AVConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVCODECSCORE_AVConfig_generated_h
#error "AVConfig.generated.h already included, missing '#pragma once' in AVConfig.h"
#endif
#define AVCODECSCORE_AVConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCore_Public_AVConfig_h


#define FOREACH_ENUM_EAVPRESET(op) \
	op(EAVPreset::UltraLowQuality) \
	op(EAVPreset::LowQuality) \
	op(EAVPreset::Default) \
	op(EAVPreset::HighQuality) \
	op(EAVPreset::Lossless) 

enum class EAVPreset : uint8;
template<> struct TIsUEnumClass<EAVPreset> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EAVPreset>();

#define FOREACH_ENUM_EAVLATENCYMODE(op) \
	op(EAVLatencyMode::UltraLowLatency) \
	op(EAVLatencyMode::LowLatency) \
	op(EAVLatencyMode::Default) 

enum class EAVLatencyMode : uint8;
template<> struct TIsUEnumClass<EAVLatencyMode> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EAVLatencyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
