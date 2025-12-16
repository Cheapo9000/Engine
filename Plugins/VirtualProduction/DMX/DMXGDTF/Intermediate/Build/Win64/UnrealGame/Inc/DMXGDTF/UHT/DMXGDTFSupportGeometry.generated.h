// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/Geometries/DMXGDTFSupportGeometry.h"

#ifdef DMXGDTF_DMXGDTFSupportGeometry_generated_h
#error "DMXGDTFSupportGeometry.generated.h already included, missing '#pragma once' in DMXGDTFSupportGeometry.h"
#endif
#define DMXGDTF_DMXGDTFSupportGeometry_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_Geometries_DMXGDTFSupportGeometry_h

// ********** Begin Enum EDMXGDTFGeometrySupportType ***********************************************
#define FOREACH_ENUM_EDMXGDTFGEOMETRYSUPPORTTYPE(op) \
	op(EDMXGDTFGeometrySupportType::Rope) \
	op(EDMXGDTFGeometrySupportType::GroundSupport) \
	op(EDMXGDTFGeometrySupportType::MaxEnumValue) 

enum class EDMXGDTFGeometrySupportType : uint8;
template<> struct TIsUEnumClass<EDMXGDTFGeometrySupportType> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFGeometrySupportType>();
// ********** End Enum EDMXGDTFGeometrySupportType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
