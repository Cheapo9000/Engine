// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialReadinessSignatures.h"

#ifdef SPATIALREADINESS_SpatialReadinessSignatures_generated_h
#error "SpatialReadinessSignatures.generated.h already included, missing '#pragma once' in SpatialReadinessSignatures.h"
#endif
#define SPATIALREADINESS_SpatialReadinessSignatures_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSignatures_h

// ********** Begin Enum EUnreadyVolumeAction ******************************************************
#define FOREACH_ENUM_EUNREADYVOLUMEACTION(op) \
	op(EUnreadyVolumeAction::Added) \
	op(EUnreadyVolumeAction::Removed) 

enum class EUnreadyVolumeAction : uint8;
template<> struct TIsUEnumClass<EUnreadyVolumeAction> { enum { Value = true }; };
template<> SPATIALREADINESS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUnreadyVolumeAction>();
// ********** End Enum EUnreadyVolumeAction ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
