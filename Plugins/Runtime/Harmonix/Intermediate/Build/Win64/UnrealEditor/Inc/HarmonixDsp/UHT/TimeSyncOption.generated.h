// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/TimeSyncOption.h"

#ifdef HARMONIXDSP_TimeSyncOption_generated_h
#error "TimeSyncOption.generated.h already included, missing '#pragma once' in TimeSyncOption.h"
#endif
#define HARMONIXDSP_TimeSyncOption_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_TimeSyncOption_h

// ********** Begin Enum ETimeSyncOption ***********************************************************
#define FOREACH_ENUM_ETIMESYNCOPTION(op) \
	op(ETimeSyncOption::None) \
	op(ETimeSyncOption::TempoSync) \
	op(ETimeSyncOption::SpeedScale) \
	op(ETimeSyncOption::Num) 

enum class ETimeSyncOption : uint8;
template<> struct TIsUEnumClass<ETimeSyncOption> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimeSyncOption>();
// ********** End Enum ETimeSyncOption *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
