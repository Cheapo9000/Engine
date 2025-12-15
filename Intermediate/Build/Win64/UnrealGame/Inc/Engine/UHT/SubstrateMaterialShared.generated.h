// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SubstrateMaterialShared.h"

#ifdef ENGINE_SubstrateMaterialShared_generated_h
#error "SubstrateMaterialShared.generated.h already included, missing '#pragma once' in SubstrateMaterialShared.h"
#endif
#define ENGINE_SubstrateMaterialShared_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Rendering_SubstrateMaterialShared_h

// ********** Begin Enum ESubstrateBsdfFeature *****************************************************
#define FOREACH_ENUM_ESUBSTRATEBSDFFEATURE(op) \
	op(ESubstrateBsdfFeature::None) \
	op(ESubstrateBsdfFeature::SSS) \
	op(ESubstrateBsdfFeature::MFPPluggedIn) \
	op(ESubstrateBsdfFeature::EdgeColor) \
	op(ESubstrateBsdfFeature::Fuzz) \
	op(ESubstrateBsdfFeature::SecondRoughnessOrSimpleClearCoat) \
	op(ESubstrateBsdfFeature::Anisotropy) \
	op(ESubstrateBsdfFeature::Glint) \
	op(ESubstrateBsdfFeature::SpecularProfile) \
	op(ESubstrateBsdfFeature::Eye) \
	op(ESubstrateBsdfFeature::EyeIrisNormalPluggedIn) \
	op(ESubstrateBsdfFeature::EyeIrisTangentPluggedIn) \
	op(ESubstrateBsdfFeature::Hair) \
	op(ESubstrateBsdfFeature::SingleMask) \
	op(ESubstrateBsdfFeature::ComplexMask) \
	op(ESubstrateBsdfFeature::ComplexSpecialMask) 

enum class ESubstrateBsdfFeature : uint16;
template<> struct TIsUEnumClass<ESubstrateBsdfFeature> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubstrateBsdfFeature>();
// ********** End Enum ESubstrateBsdfFeature *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
