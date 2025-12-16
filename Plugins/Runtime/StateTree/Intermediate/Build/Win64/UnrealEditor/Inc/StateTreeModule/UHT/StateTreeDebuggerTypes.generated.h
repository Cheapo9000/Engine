// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debugger/StateTreeDebuggerTypes.h"

#ifdef STATETREEMODULE_StateTreeDebuggerTypes_generated_h
#error "StateTreeDebuggerTypes.generated.h already included, missing '#pragma once' in StateTreeDebuggerTypes.h"
#endif
#define STATETREEMODULE_StateTreeDebuggerTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h

// ********** Begin Enum EStateTreeBreakpointType **************************************************
#define FOREACH_ENUM_ESTATETREEBREAKPOINTTYPE(op) \
	op(EStateTreeBreakpointType::Unset) \
	op(EStateTreeBreakpointType::OnEnter) \
	op(EStateTreeBreakpointType::OnExit) \
	op(EStateTreeBreakpointType::OnTransition) 

enum class EStateTreeBreakpointType : uint8;
template<> struct TIsUEnumClass<EStateTreeBreakpointType> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeBreakpointType>();
// ********** End Enum EStateTreeBreakpointType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
