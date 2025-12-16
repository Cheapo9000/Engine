// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/MVVMConditionOperation.h"

#ifdef MODELVIEWVIEWMODEL_MVVMConditionOperation_generated_h
#error "MVVMConditionOperation.generated.h already included, missing '#pragma once' in MVVMConditionOperation.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMConditionOperation_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMConditionOperation_h

// ********** Begin Enum EMVVMConditionOperation ***************************************************
#define FOREACH_ENUM_EMVVMCONDITIONOPERATION(op) \
	op(EMVVMConditionOperation::Equal) \
	op(EMVVMConditionOperation::NotEqual) \
	op(EMVVMConditionOperation::MoreThan) \
	op(EMVVMConditionOperation::MoreThanOrEqual) \
	op(EMVVMConditionOperation::LessThan) \
	op(EMVVMConditionOperation::LessThanOrEqual) \
	op(EMVVMConditionOperation::BetweenInclusive) \
	op(EMVVMConditionOperation::BetweenExclusive) 

enum class EMVVMConditionOperation : uint8;
template<> struct TIsUEnumClass<EMVVMConditionOperation> { enum { Value = true }; };
template<> MODELVIEWVIEWMODEL_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMConditionOperation>();
// ********** End Enum EMVVMConditionOperation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
