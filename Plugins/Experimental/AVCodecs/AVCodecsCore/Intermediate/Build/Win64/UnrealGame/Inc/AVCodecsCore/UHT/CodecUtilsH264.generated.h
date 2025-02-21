// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/CodecUtils/CodecUtilsH264.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVCODECSCORE_CodecUtilsH264_generated_h
#error "CodecUtilsH264.generated.h already included, missing '#pragma once' in CodecUtilsH264.h"
#endif
#define AVCODECSCORE_CodecUtilsH264_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCore_Public_Video_CodecUtils_CodecUtilsH264_h


#define FOREACH_ENUM_EH264PROFILE(op) \
	op(EH264Profile::Auto) \
	op(EH264Profile::CALVLC444Intra) \
	op(EH264Profile::Baseline) \
	op(EH264Profile::ConstrainedBaseline) \
	op(EH264Profile::Main) \
	op(EH264Profile::ScalableBaseline) \
	op(EH264Profile::ScalableConstrainedBaseline) \
	op(EH264Profile::ScalableHigh) \
	op(EH264Profile::ScalableConstrainedHigh) \
	op(EH264Profile::ScalableHighIntra) \
	op(EH264Profile::Extended) \
	op(EH264Profile::High) \
	op(EH264Profile::ProgressiveHigh) \
	op(EH264Profile::ConstrainedHigh) \
	op(EH264Profile::High10) \
	op(EH264Profile::High10Intra) \
	op(EH264Profile::MultiviewHigh) \
	op(EH264Profile::High422) \
	op(EH264Profile::High422Intra) \
	op(EH264Profile::StereoHigh) \
	op(EH264Profile::MultiviewDepthHigh) \
	op(EH264Profile::High444) \
	op(EH264Profile::High444Intra) 

enum class EH264Profile : uint8;
template<> struct TIsUEnumClass<EH264Profile> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EH264Profile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
