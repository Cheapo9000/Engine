// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeTasksStatus.h"

#ifdef STATETREEMODULE_StateTreeTasksStatus_generated_h
#error "StateTreeTasksStatus.generated.h already included, missing '#pragma once' in StateTreeTasksStatus.h"
#endif
#define STATETREEMODULE_StateTreeTasksStatus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeTasksCompletionStatus ***********************************
struct Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeTasksCompletionStatus;
// ********** End ScriptStruct FStateTreeTasksCompletionStatus *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h

// ********** Begin Enum EStateTreeTaskCompletionType **********************************************
#define FOREACH_ENUM_ESTATETREETASKCOMPLETIONTYPE(op) \
	op(EStateTreeTaskCompletionType::All) \
	op(EStateTreeTaskCompletionType::Any) 

enum class EStateTreeTaskCompletionType : uint8;
template<> struct TIsUEnumClass<EStateTreeTaskCompletionType> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeTaskCompletionType>();
// ********** End Enum EStateTreeTaskCompletionType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
