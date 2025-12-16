// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPointPropertiesTraits.h"

#ifdef PCG_PCGPointPropertiesTraits_generated_h
#error "PCGPointPropertiesTraits.generated.h already included, missing '#pragma once' in PCGPointPropertiesTraits.h"
#endif
#define PCG_PCGPointPropertiesTraits_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPointPropertiesTraits_h

// ********** Begin Enum EPCGPointNativeProperties *************************************************
#define FOREACH_ENUM_EPCGPOINTNATIVEPROPERTIES(op) \
	op(EPCGPointNativeProperties::None) \
	op(EPCGPointNativeProperties::Transform) \
	op(EPCGPointNativeProperties::Density) \
	op(EPCGPointNativeProperties::BoundsMin) \
	op(EPCGPointNativeProperties::BoundsMax) \
	op(EPCGPointNativeProperties::Color) \
	op(EPCGPointNativeProperties::Steepness) \
	op(EPCGPointNativeProperties::Seed) \
	op(EPCGPointNativeProperties::MetadataEntry) \
	op(EPCGPointNativeProperties::All) 

enum class EPCGPointNativeProperties : uint32;
template<> struct TIsUEnumClass<EPCGPointNativeProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPointNativeProperties>();
// ********** End Enum EPCGPointNativeProperties ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
