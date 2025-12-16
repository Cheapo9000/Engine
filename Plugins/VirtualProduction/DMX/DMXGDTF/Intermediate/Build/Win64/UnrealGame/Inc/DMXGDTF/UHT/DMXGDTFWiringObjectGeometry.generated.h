// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Geometries/DMXGDTFWiringObjectGeometry.h"

#ifdef DMXGDTF_DMXGDTFWiringObjectGeometry_generated_h
#error "DMXGDTFWiringObjectGeometry.generated.h already included, missing '#pragma once' in DMXGDTFWiringObjectGeometry.h"
#endif
#define DMXGDTF_DMXGDTFWiringObjectGeometry_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Geometries_DMXGDTFWiringObjectGeometry_h

// ********** Begin Enum EDMXWiringObjectGeometryComponentType *************************************
#define FOREACH_ENUM_EDMXWIRINGOBJECTGEOMETRYCOMPONENTTYPE(op) \
	op(EDMXWiringObjectGeometryComponentType::Input) \
	op(EDMXWiringObjectGeometryComponentType::Output) \
	op(EDMXWiringObjectGeometryComponentType::PowerSource) \
	op(EDMXWiringObjectGeometryComponentType::Consumer) \
	op(EDMXWiringObjectGeometryComponentType::Fuse) \
	op(EDMXWiringObjectGeometryComponentType::NetworkProvider) \
	op(EDMXWiringObjectGeometryComponentType::NetworkInput) \
	op(EDMXWiringObjectGeometryComponentType::NetworkOutput) \
	op(EDMXWiringObjectGeometryComponentType::NetworkInOut) \
	op(EDMXWiringObjectGeometryComponentType::MaxEnumValue) 

enum class EDMXWiringObjectGeometryComponentType : uint8;
template<> struct TIsUEnumClass<EDMXWiringObjectGeometryComponentType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXWiringObjectGeometryComponentType>();
// ********** End Enum EDMXWiringObjectGeometryComponentType ***************************************

// ********** Begin Enum EDMXWiringObjectGeometryFuseRating ****************************************
#define FOREACH_ENUM_EDMXWIRINGOBJECTGEOMETRYFUSERATING(op) \
	op(EDMXWiringObjectGeometryFuseRating::B) \
	op(EDMXWiringObjectGeometryFuseRating::C) \
	op(EDMXWiringObjectGeometryFuseRating::D) \
	op(EDMXWiringObjectGeometryFuseRating::K) \
	op(EDMXWiringObjectGeometryFuseRating::Z) \
	op(EDMXWiringObjectGeometryFuseRating::MaxEnumValue) 

enum class EDMXWiringObjectGeometryFuseRating : uint8;
template<> struct TIsUEnumClass<EDMXWiringObjectGeometryFuseRating> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXWiringObjectGeometryFuseRating>();
// ********** End Enum EDMXWiringObjectGeometryFuseRating ******************************************

// ********** Begin Enum EDMXWiringObjectGeometryOrientation ***************************************
#define FOREACH_ENUM_EDMXWIRINGOBJECTGEOMETRYORIENTATION(op) \
	op(EDMXWiringObjectGeometryOrientation::Left) \
	op(EDMXWiringObjectGeometryOrientation::Right) \
	op(EDMXWiringObjectGeometryOrientation::Top) \
	op(EDMXWiringObjectGeometryOrientation::Bottom) \
	op(EDMXWiringObjectGeometryOrientation::MaxEnumValue) 

enum class EDMXWiringObjectGeometryOrientation : uint8;
template<> struct TIsUEnumClass<EDMXWiringObjectGeometryOrientation> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXWiringObjectGeometryOrientation>();
// ********** End Enum EDMXWiringObjectGeometryOrientation *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
