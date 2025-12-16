// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameAnimationData.h"

#ifdef METAHUMANCORETECH_FrameAnimationData_generated_h
#error "FrameAnimationData.generated.h already included, missing '#pragma once' in FrameAnimationData.h"
#endif
#define METAHUMANCORETECH_FrameAnimationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFrameAnimationData ***********************************************
struct Z_Construct_UScriptStruct_FFrameAnimationData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_FrameAnimationData_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFrameAnimationData_Statics; \
	METAHUMANCORETECH_API static class UScriptStruct* StaticStruct();


struct FFrameAnimationData;
// ********** End ScriptStruct FFrameAnimationData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_FrameAnimationData_h

// ********** Begin Enum EFrameAnimationQuality ****************************************************
#define FOREACH_ENUM_EFRAMEANIMATIONQUALITY(op) \
	op(EFrameAnimationQuality::Undefined) \
	op(EFrameAnimationQuality::Preview) \
	op(EFrameAnimationQuality::Final) \
	op(EFrameAnimationQuality::PostFiltered) 

enum class EFrameAnimationQuality : uint8;
template<> struct TIsUEnumClass<EFrameAnimationQuality> { enum { Value = true }; };
template<> METAHUMANCORETECH_NON_ATTRIBUTED_API UEnum* StaticEnum<EFrameAnimationQuality>();
// ********** End Enum EFrameAnimationQuality ******************************************************

// ********** Begin Enum EAudioProcessingMode ******************************************************
#define FOREACH_ENUM_EAUDIOPROCESSINGMODE(op) \
	op(EAudioProcessingMode::Undefined) \
	op(EAudioProcessingMode::FullFace) \
	op(EAudioProcessingMode::TongueTracking) \
	op(EAudioProcessingMode::MouthOnly) 

enum class EAudioProcessingMode : uint8;
template<> struct TIsUEnumClass<EAudioProcessingMode> { enum { Value = true }; };
template<> METAHUMANCORETECH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioProcessingMode>();
// ********** End Enum EAudioProcessingMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
