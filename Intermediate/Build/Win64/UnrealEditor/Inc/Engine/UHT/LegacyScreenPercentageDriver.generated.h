// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LegacyScreenPercentageDriver.h"

#ifdef ENGINE_LegacyScreenPercentageDriver_generated_h
#error "LegacyScreenPercentageDriver.generated.h already included, missing '#pragma once' in LegacyScreenPercentageDriver.h"
#endif
#define ENGINE_LegacyScreenPercentageDriver_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h

// ********** Begin Enum EViewStatusForScreenPercentage ********************************************
#define FOREACH_ENUM_EVIEWSTATUSFORSCREENPERCENTAGE(op) \
	op(EViewStatusForScreenPercentage::NonRealtime) \
	op(EViewStatusForScreenPercentage::Desktop) \
	op(EViewStatusForScreenPercentage::Mobile) \
	op(EViewStatusForScreenPercentage::VR) \
	op(EViewStatusForScreenPercentage::PathTracer) 

enum class EViewStatusForScreenPercentage;
template<> struct TIsUEnumClass<EViewStatusForScreenPercentage> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewStatusForScreenPercentage>();
// ********** End Enum EViewStatusForScreenPercentage **********************************************

// ********** Begin Enum EScreenPercentageMode *****************************************************
#define FOREACH_ENUM_ESCREENPERCENTAGEMODE(op) \
	op(EScreenPercentageMode::Manual) \
	op(EScreenPercentageMode::BasedOnDisplayResolution) \
	op(EScreenPercentageMode::BasedOnDPIScale) 

enum class EScreenPercentageMode;
template<> struct TIsUEnumClass<EScreenPercentageMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EScreenPercentageMode>();
// ********** End Enum EScreenPercentageMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
