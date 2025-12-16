// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/AttributeDefinitions/DMXGDTFPhysicalUnit.h"

#ifdef DMXGDTF_DMXGDTFPhysicalUnit_generated_h
#error "DMXGDTFPhysicalUnit.generated.h already included, missing '#pragma once' in DMXGDTFPhysicalUnit.h"
#endif
#define DMXGDTF_DMXGDTFPhysicalUnit_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_AttributeDefinitions_DMXGDTFPhysicalUnit_h

// ********** Begin Enum EDMXGDTFPhysicalUnit ******************************************************
#define FOREACH_ENUM_EDMXGDTFPHYSICALUNIT(op) \
	op(EDMXGDTFPhysicalUnit::None) \
	op(EDMXGDTFPhysicalUnit::Percent) \
	op(EDMXGDTFPhysicalUnit::Length) \
	op(EDMXGDTFPhysicalUnit::Mass) \
	op(EDMXGDTFPhysicalUnit::Time) \
	op(EDMXGDTFPhysicalUnit::Temperature) \
	op(EDMXGDTFPhysicalUnit::LuminousIntensity) \
	op(EDMXGDTFPhysicalUnit::Angle) \
	op(EDMXGDTFPhysicalUnit::Force) \
	op(EDMXGDTFPhysicalUnit::Frequency) \
	op(EDMXGDTFPhysicalUnit::Current) \
	op(EDMXGDTFPhysicalUnit::Voltage) \
	op(EDMXGDTFPhysicalUnit::Power) \
	op(EDMXGDTFPhysicalUnit::Energy) \
	op(EDMXGDTFPhysicalUnit::Area) \
	op(EDMXGDTFPhysicalUnit::Volume) \
	op(EDMXGDTFPhysicalUnit::Speed) \
	op(EDMXGDTFPhysicalUnit::Acceleration) \
	op(EDMXGDTFPhysicalUnit::AngularSpeed) \
	op(EDMXGDTFPhysicalUnit::AngularAccc) \
	op(EDMXGDTFPhysicalUnit::WaveLength) \
	op(EDMXGDTFPhysicalUnit::ColorComponent) \
	op(EDMXGDTFPhysicalUnit::MaxEnumValue) 

enum class EDMXGDTFPhysicalUnit : uint8;
template<> struct TIsUEnumClass<EDMXGDTFPhysicalUnit> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFPhysicalUnit>();
// ********** End Enum EDMXGDTFPhysicalUnit ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
