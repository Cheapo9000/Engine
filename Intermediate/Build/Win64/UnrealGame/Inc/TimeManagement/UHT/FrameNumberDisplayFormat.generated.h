// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameNumberDisplayFormat.h"

#ifdef TIMEMANAGEMENT_FrameNumberDisplayFormat_generated_h
#error "FrameNumberDisplayFormat.generated.h already included, missing '#pragma once' in FrameNumberDisplayFormat.h"
#endif
#define TIMEMANAGEMENT_FrameNumberDisplayFormat_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h

// ********** Begin Enum EFrameNumberDisplayFormats ************************************************
#define FOREACH_ENUM_EFRAMENUMBERDISPLAYFORMATS(op) \
	op(EFrameNumberDisplayFormats::NonDropFrameTimecode) \
	op(EFrameNumberDisplayFormats::DropFrameTimecode) \
	op(EFrameNumberDisplayFormats::Seconds) \
	op(EFrameNumberDisplayFormats::Frames) \
	op(EFrameNumberDisplayFormats::Custom) \
	op(EFrameNumberDisplayFormats::MAX_Count) 

enum class EFrameNumberDisplayFormats : uint8;
template<> struct TIsUEnumClass<EFrameNumberDisplayFormats> { enum { Value = true }; };
template<> TIMEMANAGEMENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFrameNumberDisplayFormats>();
// ********** End Enum EFrameNumberDisplayFormats **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
