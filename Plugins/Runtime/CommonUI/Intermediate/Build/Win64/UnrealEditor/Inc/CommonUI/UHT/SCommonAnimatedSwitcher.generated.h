// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/SCommonAnimatedSwitcher.h"

#ifdef COMMONUI_SCommonAnimatedSwitcher_generated_h
#error "SCommonAnimatedSwitcher.generated.h already included, missing '#pragma once' in SCommonAnimatedSwitcher.h"
#endif
#define COMMONUI_SCommonAnimatedSwitcher_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h

// ********** Begin Enum ECommonSwitcherTransition *************************************************
#define FOREACH_ENUM_ECOMMONSWITCHERTRANSITION(op) \
	op(ECommonSwitcherTransition::FadeOnly) \
	op(ECommonSwitcherTransition::Horizontal) \
	op(ECommonSwitcherTransition::Vertical) \
	op(ECommonSwitcherTransition::Zoom) 

enum class ECommonSwitcherTransition : uint8;
template<> struct TIsUEnumClass<ECommonSwitcherTransition> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommonSwitcherTransition>();
// ********** End Enum ECommonSwitcherTransition ***************************************************

// ********** Begin Enum ETransitionCurve **********************************************************
#define FOREACH_ENUM_ETRANSITIONCURVE(op) \
	op(ETransitionCurve::Linear) \
	op(ETransitionCurve::QuadIn) \
	op(ETransitionCurve::QuadOut) \
	op(ETransitionCurve::QuadInOut) \
	op(ETransitionCurve::CubicIn) \
	op(ETransitionCurve::CubicOut) \
	op(ETransitionCurve::CubicInOut) 

enum class ETransitionCurve : uint8;
template<> struct TIsUEnumClass<ETransitionCurve> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionCurve>();
// ********** End Enum ETransitionCurve ************************************************************

// ********** Begin Enum ECommonSwitcherTransitionFallbackStrategy *********************************
#define FOREACH_ENUM_ECOMMONSWITCHERTRANSITIONFALLBACKSTRATEGY(op) \
	op(ECommonSwitcherTransitionFallbackStrategy::None) \
	op(ECommonSwitcherTransitionFallbackStrategy::Previous) \
	op(ECommonSwitcherTransitionFallbackStrategy::Next) \
	op(ECommonSwitcherTransitionFallbackStrategy::First) \
	op(ECommonSwitcherTransitionFallbackStrategy::Last) 

enum class ECommonSwitcherTransitionFallbackStrategy : uint8;
template<> struct TIsUEnumClass<ECommonSwitcherTransitionFallbackStrategy> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommonSwitcherTransitionFallbackStrategy>();
// ********** End Enum ECommonSwitcherTransitionFallbackStrategy ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
