// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRequirements.h"

#ifdef MASSENTITY_MassRequirements_generated_h
#error "MassRequirements.generated.h already included, missing '#pragma once' in MassRequirements.h"
#endif
#define MASSENTITY_MassRequirements_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h

// ********** Begin Enum EMassFragmentAccess *******************************************************
#define FOREACH_ENUM_EMASSFRAGMENTACCESS(op) \
	op(EMassFragmentAccess::None) \
	op(EMassFragmentAccess::ReadOnly) \
	op(EMassFragmentAccess::ReadWrite) 

enum class EMassFragmentAccess : uint8;
template<> struct TIsUEnumClass<EMassFragmentAccess> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassFragmentAccess>();
// ********** End Enum EMassFragmentAccess *********************************************************

// ********** Begin Enum EMassFragmentPresence *****************************************************
#define FOREACH_ENUM_EMASSFRAGMENTPRESENCE(op) \
	op(EMassFragmentPresence::All) \
	op(EMassFragmentPresence::Any) \
	op(EMassFragmentPresence::None) \
	op(EMassFragmentPresence::Optional) 

enum class EMassFragmentPresence : uint8;
template<> struct TIsUEnumClass<EMassFragmentPresence> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassFragmentPresence>();
// ********** End Enum EMassFragmentPresence *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
