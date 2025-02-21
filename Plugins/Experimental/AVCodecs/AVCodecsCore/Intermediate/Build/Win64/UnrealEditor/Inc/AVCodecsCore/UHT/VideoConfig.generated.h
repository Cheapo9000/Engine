// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/VideoConfig.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVCODECSCORE_VideoConfig_generated_h
#error "VideoConfig.generated.h already included, missing '#pragma once' in VideoConfig.h"
#endif
#define AVCODECSCORE_VideoConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCore_Public_Video_VideoConfig_h


#define FOREACH_ENUM_EVIDEOCODEC(op) \
	op(EVideoCodec::Undefined) \
	op(EVideoCodec::H264) \
	op(EVideoCodec::H265) \
	op(EVideoCodec::VP8) \
	op(EVideoCodec::VP9) \
	op(EVideoCodec::AV1) 

enum class EVideoCodec : uint8;
template<> struct TIsUEnumClass<EVideoCodec> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EVideoCodec>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
