// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Marks/AvaMarkShared.h"

#ifdef AVALANCHESEQUENCE_AvaMarkShared_generated_h
#error "AvaMarkShared.generated.h already included, missing '#pragma once' in AvaMarkShared.h"
#endif
#define AVALANCHESEQUENCE_AvaMarkShared_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Marks_AvaMarkShared_h

// ********** Begin Enum EAvaMarkRole **************************************************************
#define FOREACH_ENUM_EAVAMARKROLE(op) \
	op(EAvaMarkRole::None) \
	op(EAvaMarkRole::Stop) \
	op(EAvaMarkRole::Pause) \
	op(EAvaMarkRole::Jump) \
	op(EAvaMarkRole::Reverse) 

enum class EAvaMarkRole : uint8;
template<> struct TIsUEnumClass<EAvaMarkRole> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMarkRole>();
// ********** End Enum EAvaMarkRole ****************************************************************

// ********** Begin Enum EAvaMarkDirection *********************************************************
#define FOREACH_ENUM_EAVAMARKDIRECTION(op) \
	op(EAvaMarkDirection::Both) \
	op(EAvaMarkDirection::Forwards) \
	op(EAvaMarkDirection::Backwards) 

enum class EAvaMarkDirection : uint8;
template<> struct TIsUEnumClass<EAvaMarkDirection> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMarkDirection>();
// ********** End Enum EAvaMarkDirection ***********************************************************

// ********** Begin Enum EAvaMarkSearchDirection ***************************************************
#define FOREACH_ENUM_EAVAMARKSEARCHDIRECTION(op) \
	op(EAvaMarkSearchDirection::All) \
	op(EAvaMarkSearchDirection::SameDirection) \
	op(EAvaMarkSearchDirection::OppositeDirection) \
	op(EAvaMarkSearchDirection::AbsoluteForwards) \
	op(EAvaMarkSearchDirection::AbsoluteBackwards) 

enum class EAvaMarkSearchDirection : uint8;
template<> struct TIsUEnumClass<EAvaMarkSearchDirection> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMarkSearchDirection>();
// ********** End Enum EAvaMarkSearchDirection *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
