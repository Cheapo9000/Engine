// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/PhysicalDescriptions/DMXGDTFMeasurement.h"

#ifdef DMXGDTF_DMXGDTFMeasurement_generated_h
#error "DMXGDTFMeasurement.generated.h already included, missing '#pragma once' in DMXGDTFMeasurement.h"
#endif
#define DMXGDTF_DMXGDTFMeasurement_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_PhysicalDescriptions_DMXGDTFMeasurement_h

// ********** Begin Enum EDMXGDTFMeasurementInterpolationTo ****************************************
#define FOREACH_ENUM_EDMXGDTFMEASUREMENTINTERPOLATIONTO(op) \
	op(EDMXGDTFMeasurementInterpolationTo::Linear) \
	op(EDMXGDTFMeasurementInterpolationTo::Step) \
	op(EDMXGDTFMeasurementInterpolationTo::Log) \
	op(EDMXGDTFMeasurementInterpolationTo::MaxEnumValue) 

enum class EDMXGDTFMeasurementInterpolationTo : uint8;
template<> struct TIsUEnumClass<EDMXGDTFMeasurementInterpolationTo> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFMeasurementInterpolationTo>();
// ********** End Enum EDMXGDTFMeasurementInterpolationTo ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
