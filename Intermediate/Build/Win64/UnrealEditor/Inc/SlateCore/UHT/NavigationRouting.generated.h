// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/NavigationRouting.h"

#ifdef SLATECORE_NavigationRouting_generated_h
#error "NavigationRouting.generated.h already included, missing '#pragma once' in NavigationRouting.h"
#endif
#define SLATECORE_NavigationRouting_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationRouting_h

// ********** Begin Enum EWidgetNavigationRoutingPolicy ********************************************
#define FOREACH_ENUM_EWIDGETNAVIGATIONROUTINGPOLICY(op) \
	op(EWidgetNavigationRoutingPolicy::AcceptFocus) \
	op(EWidgetNavigationRoutingPolicy::RouteToTopMostChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToBottomMostChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToLeftMostChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToRightMostChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToTopLeftChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToTopRightChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToBottomLeftChild) \
	op(EWidgetNavigationRoutingPolicy::RouteToBottomRightChild) \
	op(EWidgetNavigationRoutingPolicy::Default) 

enum class EWidgetNavigationRoutingPolicy : uint8;
template<> struct TIsUEnumClass<EWidgetNavigationRoutingPolicy> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetNavigationRoutingPolicy>();
// ********** End Enum EWidgetNavigationRoutingPolicy **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
