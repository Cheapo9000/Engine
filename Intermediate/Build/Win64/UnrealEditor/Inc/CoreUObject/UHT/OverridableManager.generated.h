// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/OverridableManager.h"

#ifdef COREUOBJECT_OverridableManager_generated_h
#error "OverridableManager.generated.h already included, missing '#pragma once' in OverridableManager.h"
#endif
#define COREUOBJECT_OverridableManager_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverridableManager_h

// ********** Begin Enum EOverriddenState **********************************************************
#define FOREACH_ENUM_EOVERRIDDENSTATE(op) \
	op(EOverriddenState::NoOverrides) \
	op(EOverriddenState::HasOverrides) \
	op(EOverriddenState::AllOverridden) \
	op(EOverriddenState::SubObjectsHasOverrides) \
	op(EOverriddenState::Added) 

enum class EOverriddenState : uint8;
template<> struct TIsUEnumClass<EOverriddenState> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOverriddenState>();
// ********** End Enum EOverriddenState ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
