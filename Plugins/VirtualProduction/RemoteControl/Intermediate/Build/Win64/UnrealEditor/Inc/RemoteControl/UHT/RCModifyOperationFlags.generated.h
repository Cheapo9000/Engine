// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCModifyOperationFlags.h"

#ifdef REMOTECONTROL_RCModifyOperationFlags_generated_h
#error "RCModifyOperationFlags.generated.h already included, missing '#pragma once' in RCModifyOperationFlags.h"
#endif
#define REMOTECONTROL_RCModifyOperationFlags_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCModifyOperationFlags_h

// ********** Begin Enum ERCModifyOperationFlags ***************************************************
#define FOREACH_ENUM_ERCMODIFYOPERATIONFLAGS(op) \
	op(ERCModifyOperationFlags::None) \
	op(ERCModifyOperationFlags::SkipPropertyChangeEvents) \
	op(ERCModifyOperationFlags::SkipTransactions) 

enum class ERCModifyOperationFlags : uint8;
template<> struct TIsUEnumClass<ERCModifyOperationFlags> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCModifyOperationFlags>();
// ********** End Enum ERCModifyOperationFlags *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
