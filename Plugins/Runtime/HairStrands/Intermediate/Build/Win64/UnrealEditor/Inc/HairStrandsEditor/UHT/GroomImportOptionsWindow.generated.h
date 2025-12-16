// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomImportOptionsWindow.h"

#ifdef HAIRSTRANDSEDITOR_GroomImportOptionsWindow_generated_h
#error "GroomImportOptionsWindow.generated.h already included, missing '#pragma once' in GroomImportOptionsWindow.h"
#endif
#define HAIRSTRANDSEDITOR_GroomImportOptionsWindow_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Private_GroomImportOptionsWindow_h

// ********** Begin Enum EHairDescriptionStatus ****************************************************
#define FOREACH_ENUM_EHAIRDESCRIPTIONSTATUS(op) \
	op(EHairDescriptionStatus::None) \
	op(EHairDescriptionStatus::GroomValid) \
	op(EHairDescriptionStatus::NoGroup) \
	op(EHairDescriptionStatus::NoCurve) \
	op(EHairDescriptionStatus::GroomCache) \
	op(EHairDescriptionStatus::GroomCacheCompatible) \
	op(EHairDescriptionStatus::GroomCacheIncompatible) \
	op(EHairDescriptionStatus::GuidesOnly) \
	op(EHairDescriptionStatus::GuidesOnlyCompatible) \
	op(EHairDescriptionStatus::GuidesOnlyIncompatible) \
	op(EHairDescriptionStatus::PointLimit) \
	op(EHairDescriptionStatus::CurveLimit) \
	op(EHairDescriptionStatus::InvalidPoint) \
	op(EHairDescriptionStatus::InvalidGroupMapping) \
	op(EHairDescriptionStatus::Unknown) \
	op(EHairDescriptionStatus::Warning) \
	op(EHairDescriptionStatus::Error) \
	op(EHairDescriptionStatus::Valid) 

enum class EHairDescriptionStatus : uint32;
template<> struct TIsUEnumClass<EHairDescriptionStatus> { enum { Value = true }; };
template<> HAIRSTRANDSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairDescriptionStatus>();
// ********** End Enum EHairDescriptionStatus ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
