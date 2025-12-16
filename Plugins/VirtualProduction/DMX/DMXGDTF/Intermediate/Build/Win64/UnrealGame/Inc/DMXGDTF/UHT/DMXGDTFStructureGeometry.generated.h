// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Geometries/DMXGDTFStructureGeometry.h"

#ifdef DMXGDTF_DMXGDTFStructureGeometry_generated_h
#error "DMXGDTFStructureGeometry.generated.h already included, missing '#pragma once' in DMXGDTFStructureGeometry.h"
#endif
#define DMXGDTF_DMXGDTFStructureGeometry_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Geometries_DMXGDTFStructureGeometry_h

// ********** Begin Enum EDMXGDTFStructureGeometryType *********************************************
#define FOREACH_ENUM_EDMXGDTFSTRUCTUREGEOMETRYTYPE(op) \
	op(EDMXGDTFStructureGeometryType::CenterLineBased) \
	op(EDMXGDTFStructureGeometryType::Detail) \
	op(EDMXGDTFStructureGeometryType::MaxEnumValue) 

enum class EDMXGDTFStructureGeometryType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFStructureGeometryType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFStructureGeometryType>();
// ********** End Enum EDMXGDTFStructureGeometryType ***********************************************

// ********** Begin Enum EDMXGDTFStructureGeometryCrossSectionType *********************************
#define FOREACH_ENUM_EDMXGDTFSTRUCTUREGEOMETRYCROSSSECTIONTYPE(op) \
	op(EDMXGDTFStructureGeometryCrossSectionType::TrussFramework) \
	op(EDMXGDTFStructureGeometryCrossSectionType::Tube) \
	op(EDMXGDTFStructureGeometryCrossSectionType::MaxEnumValue) 

enum class EDMXGDTFStructureGeometryCrossSectionType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFStructureGeometryCrossSectionType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFStructureGeometryCrossSectionType>();
// ********** End Enum EDMXGDTFStructureGeometryCrossSectionType ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
