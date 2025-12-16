// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSetMaterialProperty.h"

#ifdef DYNAMICMATERIALTEXTURESET_DMTextureSetMaterialProperty_generated_h
#error "DMTextureSetMaterialProperty.generated.h already included, missing '#pragma once' in DMTextureSetMaterialProperty.h"
#endif
#define DYNAMICMATERIALTEXTURESET_DMTextureSetMaterialProperty_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSet_Public_DMTextureSetMaterialProperty_h

// ********** Begin Enum EDMTextureSetMaterialProperty *********************************************
#define FOREACH_ENUM_EDMTEXTURESETMATERIALPROPERTY(op) \
	op(EDMTextureSetMaterialProperty::BaseColor) \
	op(EDMTextureSetMaterialProperty::Normal) \
	op(EDMTextureSetMaterialProperty::Metallic) \
	op(EDMTextureSetMaterialProperty::Roughness) \
	op(EDMTextureSetMaterialProperty::AmbientOcclusion) \
	op(EDMTextureSetMaterialProperty::Displacement) \
	op(EDMTextureSetMaterialProperty::Specular) \
	op(EDMTextureSetMaterialProperty::SubsurfaceColor) \
	op(EDMTextureSetMaterialProperty::EmissiveColor) \
	op(EDMTextureSetMaterialProperty::Opacity) \
	op(EDMTextureSetMaterialProperty::OpacityMask) \
	op(EDMTextureSetMaterialProperty::Anisotropy) \
	op(EDMTextureSetMaterialProperty::Refraction) \
	op(EDMTextureSetMaterialProperty::Tangent) \
	op(EDMTextureSetMaterialProperty::WorldPositionOffset) \
	op(EDMTextureSetMaterialProperty::PixelDepthOffset) \
	op(EDMTextureSetMaterialProperty::SurfaceThickness) \
	op(EDMTextureSetMaterialProperty::None) 

enum class EDMTextureSetMaterialProperty : uint8;
template<> struct TIsUEnumClass<EDMTextureSetMaterialProperty> { enum { Value = true }; };
template<> DYNAMICMATERIALTEXTURESET_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMTextureSetMaterialProperty>();
// ********** End Enum EDMTextureSetMaterialProperty ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
