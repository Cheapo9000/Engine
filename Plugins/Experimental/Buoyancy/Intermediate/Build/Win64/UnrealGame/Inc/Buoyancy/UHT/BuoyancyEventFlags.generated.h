// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyEventFlags.h"

#ifdef BUOYANCY_BuoyancyEventFlags_generated_h
#error "BuoyancyEventFlags.generated.h already included, missing '#pragma once' in BuoyancyEventFlags.h"
#endif
#define BUOYANCY_BuoyancyEventFlags_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventFlags_h

// ********** Begin Enum EBuoyancyEventFlags *******************************************************
#define FOREACH_ENUM_EBUOYANCYEVENTFLAGS(op) \
	op(None) \
	op(Begin) \
	op(Continue) \
	op(End) 

enum EBuoyancyEventFlags : uint8;
template<> BUOYANCY_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuoyancyEventFlags>();
// ********** End Enum EBuoyancyEventFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
