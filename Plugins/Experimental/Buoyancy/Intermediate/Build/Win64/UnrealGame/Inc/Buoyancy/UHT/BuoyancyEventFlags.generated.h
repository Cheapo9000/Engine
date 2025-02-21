// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyEventFlags.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUOYANCY_BuoyancyEventFlags_generated_h
#error "BuoyancyEventFlags.generated.h already included, missing '#pragma once' in BuoyancyEventFlags.h"
#endif
#define BUOYANCY_BuoyancyEventFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyEventFlags_h


#define FOREACH_ENUM_EBUOYANCYEVENTFLAGS(op) \
	op(None) \
	op(Begin) \
	op(Continue) \
	op(End) 

enum EBuoyancyEventFlags : uint8;
template<> BUOYANCY_API UEnum* StaticEnum<EBuoyancyEventFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
