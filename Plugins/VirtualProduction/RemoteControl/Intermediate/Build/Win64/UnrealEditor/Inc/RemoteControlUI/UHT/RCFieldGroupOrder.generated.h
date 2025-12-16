// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/RCFieldGroupOrder.h"

#ifdef REMOTECONTROLUI_RCFieldGroupOrder_generated_h
#error "RCFieldGroupOrder.generated.h already included, missing '#pragma once' in RCFieldGroupOrder.h"
#endif
#define REMOTECONTROLUI_RCFieldGroupOrder_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Public_UI_RCFieldGroupOrder_h

// ********** Begin Enum ERCFieldGroupOrder ********************************************************
#define FOREACH_ENUM_ERCFIELDGROUPORDER(op) \
	op(ERCFieldGroupOrder::None) \
	op(ERCFieldGroupOrder::Ascending) \
	op(ERCFieldGroupOrder::Descending) 

enum class ERCFieldGroupOrder : uint8;
template<> struct TIsUEnumClass<ERCFieldGroupOrder> { enum { Value = true }; };
template<> REMOTECONTROLUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCFieldGroupOrder>();
// ********** End Enum ERCFieldGroupOrder **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
