// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/VideoEncoder.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVCODECSCORE_VideoEncoder_generated_h
#error "VideoEncoder.generated.h already included, missing '#pragma once' in VideoEncoder.h"
#endif
#define AVCODECSCORE_VideoEncoder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCore_Public_Video_VideoEncoder_h


#define FOREACH_ENUM_ESCALABILITYMODE(op) \
	op(EScalabilityMode::L1T1) \
	op(EScalabilityMode::L1T2) \
	op(EScalabilityMode::L1T3) \
	op(EScalabilityMode::L2T1) \
	op(EScalabilityMode::L2T1h) \
	op(EScalabilityMode::L2T1_KEY) \
	op(EScalabilityMode::L2T2) \
	op(EScalabilityMode::L2T2h) \
	op(EScalabilityMode::L2T2_KEY) \
	op(EScalabilityMode::L2T2_KEY_SHIFT) \
	op(EScalabilityMode::L2T3) \
	op(EScalabilityMode::L2T3h) \
	op(EScalabilityMode::L2T3_KEY) \
	op(EScalabilityMode::L3T1) \
	op(EScalabilityMode::L3T1h) \
	op(EScalabilityMode::L3T1_KEY) \
	op(EScalabilityMode::L3T2) \
	op(EScalabilityMode::L3T2h) \
	op(EScalabilityMode::L3T2_KEY) \
	op(EScalabilityMode::L3T3) \
	op(EScalabilityMode::L3T3h) \
	op(EScalabilityMode::L3T3_KEY) \
	op(EScalabilityMode::S2T1) \
	op(EScalabilityMode::S2T1h) \
	op(EScalabilityMode::S2T2) \
	op(EScalabilityMode::S2T2h) \
	op(EScalabilityMode::S2T3) \
	op(EScalabilityMode::S2T3h) \
	op(EScalabilityMode::S3T1) \
	op(EScalabilityMode::S3T1h) \
	op(EScalabilityMode::S3T2) \
	op(EScalabilityMode::S3T2h) \
	op(EScalabilityMode::S3T3) \
	op(EScalabilityMode::S3T3h) \
	op(EScalabilityMode::None) 

enum class EScalabilityMode : uint8;
template<> struct TIsUEnumClass<EScalabilityMode> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EScalabilityMode>();

#define FOREACH_ENUM_ERATECONTROLMODE(op) \
	op(ERateControlMode::Unknown) \
	op(ERateControlMode::ConstQP) \
	op(ERateControlMode::VBR) \
	op(ERateControlMode::CBR) 

enum class ERateControlMode : uint8;
template<> struct TIsUEnumClass<ERateControlMode> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<ERateControlMode>();

#define FOREACH_ENUM_EMULTIPASSMODE(op) \
	op(EMultipassMode::Unknown) \
	op(EMultipassMode::Disabled) \
	op(EMultipassMode::Quarter) \
	op(EMultipassMode::Full) 

enum class EMultipassMode : uint8;
template<> struct TIsUEnumClass<EMultipassMode> { enum { Value = true }; };
template<> AVCODECSCORE_API UEnum* StaticEnum<EMultipassMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
