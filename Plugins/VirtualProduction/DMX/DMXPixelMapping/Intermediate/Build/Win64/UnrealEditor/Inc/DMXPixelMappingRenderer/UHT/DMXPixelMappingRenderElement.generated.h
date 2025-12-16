// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXPixelMappingRenderElement.h"

#ifdef DMXPIXELMAPPINGRENDERER_DMXPixelMappingRenderElement_generated_h
#error "DMXPixelMappingRenderElement.generated.h already included, missing '#pragma once' in DMXPixelMappingRenderElement.h"
#endif
#define DMXPIXELMAPPINGRENDERER_DMXPixelMappingRenderElement_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingRenderElement_h

// ********** Begin Enum EDMXPixelBlendingQuality **************************************************
#define FOREACH_ENUM_EDMXPIXELBLENDINGQUALITY(op) \
	op(EDMXPixelBlendingQuality::Low) \
	op(EDMXPixelBlendingQuality::Medium) \
	op(EDMXPixelBlendingQuality::High) 

enum class EDMXPixelBlendingQuality : uint8;
template<> struct TIsUEnumClass<EDMXPixelBlendingQuality> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelBlendingQuality>();
// ********** End Enum EDMXPixelBlendingQuality ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
