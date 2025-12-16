// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/MVVMExecutionMode.h"

#ifdef MODELVIEWVIEWMODEL_MVVMExecutionMode_generated_h
#error "MVVMExecutionMode.generated.h already included, missing '#pragma once' in MVVMExecutionMode.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMExecutionMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h

// ********** Begin Enum EMVVMExecutionMode ********************************************************
#define FOREACH_ENUM_EMVVMEXECUTIONMODE(op) \
	op(EMVVMExecutionMode::Immediate) \
	op(EMVVMExecutionMode::Delayed) \
	op(EMVVMExecutionMode::Tick) \
	op(EMVVMExecutionMode::DelayedWhenSharedElseImmediate) 

enum class EMVVMExecutionMode : uint8;
template<> struct TIsUEnumClass<EMVVMExecutionMode> { enum { Value = true }; };
template<> MODELVIEWVIEWMODEL_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMExecutionMode>();
// ********** End Enum EMVVMExecutionMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
