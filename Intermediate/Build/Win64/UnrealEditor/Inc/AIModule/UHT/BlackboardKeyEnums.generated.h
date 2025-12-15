// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyEnums.h"

#ifdef AIMODULE_BlackboardKeyEnums_generated_h
#error "BlackboardKeyEnums.generated.h already included, missing '#pragma once' in BlackboardKeyEnums.h"
#endif
#define AIMODULE_BlackboardKeyEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h

// ********** Begin Enum EBasicKeyOperation ********************************************************
#define FOREACH_ENUM_EBASICKEYOPERATION(op) \
	op(EBasicKeyOperation::Set) \
	op(EBasicKeyOperation::NotSet) 

namespace EBasicKeyOperation { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBasicKeyOperation::Type>();
// ********** End Enum EBasicKeyOperation **********************************************************

// ********** Begin Enum EArithmeticKeyOperation ***************************************************
#define FOREACH_ENUM_EARITHMETICKEYOPERATION(op) \
	op(EArithmeticKeyOperation::Equal) \
	op(EArithmeticKeyOperation::NotEqual) \
	op(EArithmeticKeyOperation::Less) \
	op(EArithmeticKeyOperation::LessOrEqual) \
	op(EArithmeticKeyOperation::Greater) \
	op(EArithmeticKeyOperation::GreaterOrEqual) 

namespace EArithmeticKeyOperation { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArithmeticKeyOperation::Type>();
// ********** End Enum EArithmeticKeyOperation *****************************************************

// ********** Begin Enum ETextKeyOperation *********************************************************
#define FOREACH_ENUM_ETEXTKEYOPERATION(op) \
	op(ETextKeyOperation::Equal) \
	op(ETextKeyOperation::NotEqual) \
	op(ETextKeyOperation::Contain) \
	op(ETextKeyOperation::NotContain) 

namespace ETextKeyOperation { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextKeyOperation::Type>();
// ********** End Enum ETextKeyOperation ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
