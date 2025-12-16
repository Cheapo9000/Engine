// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/Filters/NavigationToolFilterBase.h"

#ifdef SEQUENCENAVIGATOR_NavigationToolFilterBase_generated_h
#error "NavigationToolFilterBase.generated.h already included, missing '#pragma once' in NavigationToolFilterBase.h"
#endif
#define SEQUENCENAVIGATOR_NavigationToolFilterBase_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_Filters_Filters_NavigationToolFilterBase_h

// ********** Begin Enum ENavigationToolFilterMode *************************************************
#define FOREACH_ENUM_ENAVIGATIONTOOLFILTERMODE(op) \
	op(ENavigationToolFilterMode::None) \
	op(ENavigationToolFilterMode::MatchesType) \
	op(ENavigationToolFilterMode::ContainerOfType) 

enum class ENavigationToolFilterMode : uint8;
template<> struct TIsUEnumClass<ENavigationToolFilterMode> { enum { Value = true }; };
template<> SEQUENCENAVIGATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationToolFilterMode>();
// ********** End Enum ENavigationToolFilterMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
