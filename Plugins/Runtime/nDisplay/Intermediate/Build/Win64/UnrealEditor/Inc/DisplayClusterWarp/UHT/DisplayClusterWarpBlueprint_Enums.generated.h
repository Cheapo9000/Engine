// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/DisplayClusterWarpBlueprint_Enums.h"

#ifdef DISPLAYCLUSTERWARP_DisplayClusterWarpBlueprint_Enums_generated_h
#error "DisplayClusterWarpBlueprint_Enums.generated.h already included, missing '#pragma once' in DisplayClusterWarpBlueprint_Enums.h"
#endif
#define DISPLAYCLUSTERWARP_DisplayClusterWarpBlueprint_Enums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterWarp_Public_Blueprints_DisplayClusterWarpBlueprint_Enums_h

// ********** Begin Enum EDisplayClusterWarpCameraProjectionMode ***********************************
#define FOREACH_ENUM_EDISPLAYCLUSTERWARPCAMERAPROJECTIONMODE(op) \
	op(EDisplayClusterWarpCameraProjectionMode::Fit) \
	op(EDisplayClusterWarpCameraProjectionMode::Fill) 

enum class EDisplayClusterWarpCameraProjectionMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterWarpCameraProjectionMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERWARP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterWarpCameraProjectionMode>();
// ********** End Enum EDisplayClusterWarpCameraProjectionMode *************************************

// ********** Begin Enum EDisplayClusterWarpCameraViewTarget ***************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERWARPCAMERAVIEWTARGET(op) \
	op(EDisplayClusterWarpCameraViewTarget::GeometricCenter) \
	op(EDisplayClusterWarpCameraViewTarget::MatchViewOrigin) 

enum class EDisplayClusterWarpCameraViewTarget;
template<> struct TIsUEnumClass<EDisplayClusterWarpCameraViewTarget> { enum { Value = true }; };
template<> DISPLAYCLUSTERWARP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterWarpCameraViewTarget>();
// ********** End Enum EDisplayClusterWarpCameraViewTarget *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
