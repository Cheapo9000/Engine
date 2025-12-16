// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGWorldQueryHelpers.h"

#ifdef PCG_PCGWorldQueryHelpers_generated_h
#error "PCGWorldQueryHelpers.generated.h already included, missing '#pragma once' in PCGWorldQueryHelpers.h"
#endif
#define PCG_PCGWorldQueryHelpers_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGWorldQueryHelpers_h

// ********** Begin Enum EPCGWorldRaycastMode ******************************************************
#define FOREACH_ENUM_EPCGWORLDRAYCASTMODE(op) \
	op(EPCGWorldRaycastMode::Infinite) \
	op(EPCGWorldRaycastMode::ScaledVector) \
	op(EPCGWorldRaycastMode::NormalizedWithLength) \
	op(EPCGWorldRaycastMode::Segments) 

enum class EPCGWorldRaycastMode : uint8;
template<> struct TIsUEnumClass<EPCGWorldRaycastMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGWorldRaycastMode>();
// ********** End Enum EPCGWorldRaycastMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
