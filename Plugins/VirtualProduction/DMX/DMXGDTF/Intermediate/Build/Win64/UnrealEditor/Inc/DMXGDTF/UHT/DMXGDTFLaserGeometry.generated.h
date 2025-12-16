// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Geometries/DMXGDTFLaserGeometry.h"

#ifdef DMXGDTF_DMXGDTFLaserGeometry_generated_h
#error "DMXGDTFLaserGeometry.generated.h already included, missing '#pragma once' in DMXGDTFLaserGeometry.h"
#endif
#define DMXGDTF_DMXGDTFLaserGeometry_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Geometries_DMXGDTFLaserGeometry_h

// ********** Begin Enum EDMXLaserGeometryColorType ************************************************
#define FOREACH_ENUM_EDMXLASERGEOMETRYCOLORTYPE(op) \
	op(EDMXLaserGeometryColorType::RGB) \
	op(EDMXLaserGeometryColorType::SingleWaveLength) \
	op(EDMXLaserGeometryColorType::MaxEnumValue) 

enum class EDMXLaserGeometryColorType;
template<> struct TIsUEnumClass<EDMXLaserGeometryColorType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXLaserGeometryColorType>();
// ********** End Enum EDMXLaserGeometryColorType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
