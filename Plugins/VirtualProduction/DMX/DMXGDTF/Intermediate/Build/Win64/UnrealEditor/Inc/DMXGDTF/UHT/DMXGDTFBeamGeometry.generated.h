// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Geometries/DMXGDTFBeamGeometry.h"

#ifdef DMXGDTF_DMXGDTFBeamGeometry_generated_h
#error "DMXGDTFBeamGeometry.generated.h already included, missing '#pragma once' in DMXGDTFBeamGeometry.h"
#endif
#define DMXGDTF_DMXGDTFBeamGeometry_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Geometries_DMXGDTFBeamGeometry_h

// ********** Begin Enum EDMXGDTFBeamGeometryLampType **********************************************
#define FOREACH_ENUM_EDMXGDTFBEAMGEOMETRYLAMPTYPE(op) \
	op(EDMXGDTFBeamGeometryLampType::Discharge) \
	op(EDMXGDTFBeamGeometryLampType::Tungsten) \
	op(EDMXGDTFBeamGeometryLampType::Halogen) \
	op(EDMXGDTFBeamGeometryLampType::LED) \
	op(EDMXGDTFBeamGeometryLampType::MaxEnumValue) 

enum class EDMXGDTFBeamGeometryLampType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFBeamGeometryLampType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFBeamGeometryLampType>();
// ********** End Enum EDMXGDTFBeamGeometryLampType ************************************************

// ********** Begin Enum EDMXGDTFBeamGeometryBeamType **********************************************
#define FOREACH_ENUM_EDMXGDTFBEAMGEOMETRYBEAMTYPE(op) \
	op(EDMXGDTFBeamGeometryBeamType::Wash) \
	op(EDMXGDTFBeamGeometryBeamType::Spot) \
	op(EDMXGDTFBeamGeometryBeamType::None) \
	op(EDMXGDTFBeamGeometryBeamType::Rectangle) \
	op(EDMXGDTFBeamGeometryBeamType::PC) \
	op(EDMXGDTFBeamGeometryBeamType::Fresnel) \
	op(EDMXGDTFBeamGeometryBeamType::Glow) \
	op(EDMXGDTFBeamGeometryBeamType::MaxEnumValue) 

enum class EDMXGDTFBeamGeometryBeamType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFBeamGeometryBeamType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFBeamGeometryBeamType>();
// ********** End Enum EDMXGDTFBeamGeometryBeamType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
