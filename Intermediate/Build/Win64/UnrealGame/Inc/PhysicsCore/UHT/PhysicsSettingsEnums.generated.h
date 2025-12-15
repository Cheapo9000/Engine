// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsSettingsEnums.h"

#ifdef PHYSICSCORE_PhysicsSettingsEnums_generated_h
#error "PhysicsSettingsEnums.generated.h already included, missing '#pragma once' in PhysicsSettingsEnums.h"
#endif
#define PHYSICSCORE_PhysicsSettingsEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h

// ********** Begin Enum EFrictionCombineMode ******************************************************
#define FOREACH_ENUM_EFRICTIONCOMBINEMODE(op) \
	op(EFrictionCombineMode::Average) \
	op(EFrictionCombineMode::Min) \
	op(EFrictionCombineMode::Multiply) \
	op(EFrictionCombineMode::Max) 

namespace EFrictionCombineMode { enum Type : int; }
template<> PHYSICSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFrictionCombineMode::Type>();
// ********** End Enum EFrictionCombineMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
