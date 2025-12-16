// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/AttributeDefinitions/DMXGDTFSubphysicalUnit.h"

#ifdef DMXGDTF_DMXGDTFSubphysicalUnit_generated_h
#error "DMXGDTFSubphysicalUnit.generated.h already included, missing '#pragma once' in DMXGDTFSubphysicalUnit.h"
#endif
#define DMXGDTF_DMXGDTFSubphysicalUnit_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_AttributeDefinitions_DMXGDTFSubphysicalUnit_h

// ********** Begin Enum EDMXGDTFSubphysicalUnit ***************************************************
#define FOREACH_ENUM_EDMXGDTFSUBPHYSICALUNIT(op) \
	op(EDMXGDTFSubphysicalUnit::PlacementOffset) \
	op(EDMXGDTFSubphysicalUnit::Amplitude) \
	op(EDMXGDTFSubphysicalUnit::AmplitudeMin) \
	op(EDMXGDTFSubphysicalUnit::AmplitudeMax) \
	op(EDMXGDTFSubphysicalUnit::Duration) \
	op(EDMXGDTFSubphysicalUnit::DutyCycle) \
	op(EDMXGDTFSubphysicalUnit::TimeOffset) \
	op(EDMXGDTFSubphysicalUnit::MinimumOpening) \
	op(EDMXGDTFSubphysicalUnit::Value) \
	op(EDMXGDTFSubphysicalUnit::RatioHorizontal) \
	op(EDMXGDTFSubphysicalUnit::RatioVertical) \
	op(EDMXGDTFSubphysicalUnit::MaxEnumValue) 

enum class EDMXGDTFSubphysicalUnit : uint8;
template<> struct TIsUEnumClass<EDMXGDTFSubphysicalUnit> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFSubphysicalUnit>();
// ********** End Enum EDMXGDTFSubphysicalUnit *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
