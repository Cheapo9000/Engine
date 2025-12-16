// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/RCFieldGroupType.h"

#ifdef REMOTECONTROLUI_RCFieldGroupType_generated_h
#error "RCFieldGroupType.generated.h already included, missing '#pragma once' in RCFieldGroupType.h"
#endif
#define REMOTECONTROLUI_RCFieldGroupType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Public_UI_RCFieldGroupType_h

// ********** Begin Enum ERCFieldGroupType *********************************************************
#define FOREACH_ENUM_ERCFIELDGROUPTYPE(op) \
	op(ERCFieldGroupType::None) \
	op(ERCFieldGroupType::PropertyId) \
	op(ERCFieldGroupType::Owner) 

enum class ERCFieldGroupType : uint8;
template<> struct TIsUEnumClass<ERCFieldGroupType> { enum { Value = true }; };
template<> REMOTECONTROLUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCFieldGroupType>();
// ********** End Enum ERCFieldGroupType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
