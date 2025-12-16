// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameRange.h"

#ifdef CAPTUREDATACORE_FrameRange_generated_h
#error "FrameRange.generated.h already included, missing '#pragma once' in FrameRange.h"
#endif
#define CAPTUREDATACORE_FrameRange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFrameRange *******************************************************
struct Z_Construct_UScriptStruct_FFrameRange_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_FrameRange_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFrameRange_Statics; \
	CAPTUREDATACORE_API static class UScriptStruct* StaticStruct();


struct FFrameRange;
// ********** End ScriptStruct FFrameRange *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_FrameRange_h

// ********** Begin Enum EFrameRangeType ***********************************************************
#define FOREACH_ENUM_EFRAMERANGETYPE(op) \
	op(EFrameRangeType::UserExcluded) \
	op(EFrameRangeType::ProcessingExcluded) \
	op(EFrameRangeType::CaptureExcluded) \
	op(EFrameRangeType::RateMatchingExcluded) \
	op(EFrameRangeType::None) 

enum class EFrameRangeType : uint8;
template<> struct TIsUEnumClass<EFrameRangeType> { enum { Value = true }; };
template<> CAPTUREDATACORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFrameRangeType>();
// ********** End Enum EFrameRangeType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
