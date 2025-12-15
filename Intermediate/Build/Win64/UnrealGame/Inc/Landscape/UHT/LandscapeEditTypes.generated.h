// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEditTypes.h"

#ifdef LANDSCAPE_LandscapeEditTypes_generated_h
#error "LandscapeEditTypes.generated.h already included, missing '#pragma once' in LandscapeEditTypes.h"
#endif
#define LANDSCAPE_LandscapeEditTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditTypes_h

// ********** Begin Enum ELandscapeToolTargetType **************************************************
#define FOREACH_ENUM_ELANDSCAPETOOLTARGETTYPE(op) \
	op(ELandscapeToolTargetType::Heightmap) \
	op(ELandscapeToolTargetType::Weightmap) \
	op(ELandscapeToolTargetType::Visibility) \
	op(ELandscapeToolTargetType::Invalid) \
	op(ELandscapeToolTargetType::Count) 

enum class ELandscapeToolTargetType : uint8;
template<> struct TIsUEnumClass<ELandscapeToolTargetType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeToolTargetType>();
// ********** End Enum ELandscapeToolTargetType ****************************************************

// ********** Begin Enum ELandscapeTargetLayerBlendMethod ******************************************
#define FOREACH_ENUM_ELANDSCAPETARGETLAYERBLENDMETHOD(op) \
	op(ELandscapeTargetLayerBlendMethod::None) \
	op(ELandscapeTargetLayerBlendMethod::FinalWeightBlending) \
	op(ELandscapeTargetLayerBlendMethod::PremultipliedAlphaBlending) \
	op(ELandscapeTargetLayerBlendMethod::Count) 

enum class ELandscapeTargetLayerBlendMethod : uint8;
template<> struct TIsUEnumClass<ELandscapeTargetLayerBlendMethod> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTargetLayerBlendMethod>();
// ********** End Enum ELandscapeTargetLayerBlendMethod ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
