// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDTF/PhysicalDescriptions/DMXGDTFColorSpace.h"

#ifdef DMXGDTF_DMXGDTFColorSpace_generated_h
#error "DMXGDTFColorSpace.generated.h already included, missing '#pragma once' in DMXGDTFColorSpace.h"
#endif
#define DMXGDTF_DMXGDTFColorSpace_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXGDTF_Source_DMXGDTF_Public_GDTF_PhysicalDescriptions_DMXGDTFColorSpace_h

// ********** Begin Enum EDMXGDTFColorSpaceMode ****************************************************
#define FOREACH_ENUM_EDMXGDTFCOLORSPACEMODE(op) \
	op(EDMXGDTFColorSpaceMode::Custom) \
	op(EDMXGDTFColorSpaceMode::sRGB) \
	op(EDMXGDTFColorSpaceMode::ProPhoto) \
	op(EDMXGDTFColorSpaceMode::ANSI) \
	op(EDMXGDTFColorSpaceMode::MaxEnumValue) 

enum class EDMXGDTFColorSpaceMode : uint8;
template<> struct TIsUEnumClass<EDMXGDTFColorSpaceMode> { enum { Value = true }; };
template<> DMXGDTF_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXGDTFColorSpaceMode>();
// ********** End Enum EDMXGDTFColorSpaceMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
