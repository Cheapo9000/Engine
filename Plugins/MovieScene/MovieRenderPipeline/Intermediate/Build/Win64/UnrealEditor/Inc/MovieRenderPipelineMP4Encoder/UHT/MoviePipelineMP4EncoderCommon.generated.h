// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineMP4EncoderCommon.h"

#ifdef MOVIERENDERPIPELINEMP4ENCODER_MoviePipelineMP4EncoderCommon_generated_h
#error "MoviePipelineMP4EncoderCommon.generated.h already included, missing '#pragma once' in MoviePipelineMP4EncoderCommon.h"
#endif
#define MOVIERENDERPIPELINEMP4ENCODER_MoviePipelineMP4EncoderCommon_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Private_MoviePipelineMP4EncoderCommon_h

// ********** Begin Enum EMoviePipelineMP4EncodeProfile ********************************************
#define FOREACH_ENUM_EMOVIEPIPELINEMP4ENCODEPROFILE(op) \
	op(EMoviePipelineMP4EncodeProfile::Baseline) \
	op(EMoviePipelineMP4EncodeProfile::Main) \
	op(EMoviePipelineMP4EncodeProfile::High) 

enum class EMoviePipelineMP4EncodeProfile : uint8;
template<> struct TIsUEnumClass<EMoviePipelineMP4EncodeProfile> { enum { Value = true }; };
template<> MOVIERENDERPIPELINEMP4ENCODER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineMP4EncodeProfile>();
// ********** End Enum EMoviePipelineMP4EncodeProfile **********************************************

// ********** Begin Enum EMoviePipelineMP4EncodeLevel **********************************************
#define FOREACH_ENUM_EMOVIEPIPELINEMP4ENCODELEVEL(op) \
	op(EMoviePipelineMP4EncodeLevel::Auto) \
	op(EMoviePipelineMP4EncodeLevel::Level1) \
	op(EMoviePipelineMP4EncodeLevel::Level1_b) \
	op(EMoviePipelineMP4EncodeLevel::Level1_1) \
	op(EMoviePipelineMP4EncodeLevel::Level1_2) \
	op(EMoviePipelineMP4EncodeLevel::Level1_3) \
	op(EMoviePipelineMP4EncodeLevel::Level2) \
	op(EMoviePipelineMP4EncodeLevel::Level2_1) \
	op(EMoviePipelineMP4EncodeLevel::Level2_2) \
	op(EMoviePipelineMP4EncodeLevel::Level3) \
	op(EMoviePipelineMP4EncodeLevel::Level3_1) \
	op(EMoviePipelineMP4EncodeLevel::Level3_2) \
	op(EMoviePipelineMP4EncodeLevel::Level4) \
	op(EMoviePipelineMP4EncodeLevel::Level4_1) \
	op(EMoviePipelineMP4EncodeLevel::Level4_2) \
	op(EMoviePipelineMP4EncodeLevel::Level5) \
	op(EMoviePipelineMP4EncodeLevel::Level5_1) \
	op(EMoviePipelineMP4EncodeLevel::Level5_2) 

enum class EMoviePipelineMP4EncodeLevel : uint8;
template<> struct TIsUEnumClass<EMoviePipelineMP4EncodeLevel> { enum { Value = true }; };
template<> MOVIERENDERPIPELINEMP4ENCODER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineMP4EncodeLevel>();
// ********** End Enum EMoviePipelineMP4EncodeLevel ************************************************

// ********** Begin Enum EMoviePipelineMP4EncodeRateControlMode ************************************
#define FOREACH_ENUM_EMOVIEPIPELINEMP4ENCODERATECONTROLMODE(op) \
	op(EMoviePipelineMP4EncodeRateControlMode::ConstantQP) \
	op(EMoviePipelineMP4EncodeRateControlMode::Quality) \
	op(EMoviePipelineMP4EncodeRateControlMode::VariableBitRate) \
	op(EMoviePipelineMP4EncodeRateControlMode::VariableBitRate_Constrained) \
	op(EMoviePipelineMP4EncodeRateControlMode::ConstantBitRate) 

enum class EMoviePipelineMP4EncodeRateControlMode : uint8;
template<> struct TIsUEnumClass<EMoviePipelineMP4EncodeRateControlMode> { enum { Value = true }; };
template<> MOVIERENDERPIPELINEMP4ENCODER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoviePipelineMP4EncodeRateControlMode>();
// ********** End Enum EMoviePipelineMP4EncodeRateControlMode **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
