// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODTypes.h"

#ifdef MASSLOD_MassLODTypes_generated_h
#error "MassLODTypes.generated.h already included, missing '#pragma once' in MassLODTypes.h"
#endif
#define MASSLOD_MassLODTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h

// ********** Begin Enum EMassLOD ******************************************************************
#define FOREACH_ENUM_EMASSLOD(op) \
	op(EMassLOD::High) \
	op(EMassLOD::Medium) \
	op(EMassLOD::Low) \
	op(EMassLOD::Off) \
	op(EMassLOD::Max) 

namespace EMassLOD { enum Type : int; }
template<> MASSLOD_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassLOD::Type>();
// ********** End Enum EMassLOD ********************************************************************

// ********** Begin Enum EMassVisibility ***********************************************************
#define FOREACH_ENUM_EMASSVISIBILITY(op) \
	op(EMassVisibility::CanBeSeen) \
	op(EMassVisibility::CulledByFrustum) \
	op(EMassVisibility::CulledByDistance) \
	op(EMassVisibility::Max) 

enum class EMassVisibility : uint8;
template<> struct TIsUEnumClass<EMassVisibility> { enum { Value = true }; };
template<> MASSLOD_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassVisibility>();
// ********** End Enum EMassVisibility *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
