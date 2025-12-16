// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureChannelMask.h"

#ifdef DYNAMICMATERIALTEXTURESET_DMTextureChannelMask_generated_h
#error "DMTextureChannelMask.generated.h already included, missing '#pragma once' in DMTextureChannelMask.h"
#endif
#define DYNAMICMATERIALTEXTURESET_DMTextureChannelMask_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureChannelMask_h

// ********** Begin Enum EDMTextureChannelMask *****************************************************
#define FOREACH_ENUM_EDMTEXTURECHANNELMASK(op) \
	op(EDMTextureChannelMask::None) \
	op(EDMTextureChannelMask::Red) \
	op(EDMTextureChannelMask::Green) \
	op(EDMTextureChannelMask::Blue) \
	op(EDMTextureChannelMask::Alpha) \
	op(EDMTextureChannelMask::RGB) \
	op(EDMTextureChannelMask::RGBA) 

enum class EDMTextureChannelMask : uint8;
template<> struct TIsUEnumClass<EDMTextureChannelMask> { enum { Value = true }; };
template<> DYNAMICMATERIALTEXTURESET_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMTextureChannelMask>();
// ********** End Enum EDMTextureChannelMask *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
