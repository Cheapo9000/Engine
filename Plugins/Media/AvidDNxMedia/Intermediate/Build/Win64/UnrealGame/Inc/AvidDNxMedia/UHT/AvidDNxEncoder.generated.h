// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvidDNxEncoder/AvidDNxEncoder.h"

#ifdef AVIDDNXMEDIA_AvidDNxEncoder_generated_h
#error "AvidDNxEncoder.generated.h already included, missing '#pragma once' in AvidDNxEncoder.h"
#endif
#define AVIDDNXMEDIA_AvidDNxEncoder_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Public_AvidDNxEncoder_AvidDNxEncoder_h

// ********** Begin Enum EAvidDNxEncoderQuality ****************************************************
#define FOREACH_ENUM_EAVIDDNXENCODERQUALITY(op) \
	op(EAvidDNxEncoderQuality::RGB444_12bit) \
	op(EAvidDNxEncoderQuality::HQX_10bit) \
	op(EAvidDNxEncoderQuality::HQ_8bit) \
	op(EAvidDNxEncoderQuality::SQ_8bit) \
	op(EAvidDNxEncoderQuality::LB_8bit) 

enum class EAvidDNxEncoderQuality;
template<> struct TIsUEnumClass<EAvidDNxEncoderQuality> { enum { Value = true }; };
template<> AVIDDNXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvidDNxEncoderQuality>();
// ********** End Enum EAvidDNxEncoderQuality ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
