// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEvents.h"

#ifdef STATETREEMODULE_StateTreeEvents_generated_h
#error "StateTreeEvents.generated.h already included, missing '#pragma once' in StateTreeEvents.h"
#endif
#define STATETREEMODULE_StateTreeEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeEvent ***************************************************
struct Z_Construct_UScriptStruct_FStateTreeEvent_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEvent_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeEvent;
// ********** End ScriptStruct FStateTreeEvent *****************************************************

// ********** Begin ScriptStruct FStateTreeSharedEvent *********************************************
struct Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeSharedEvent;
// ********** End ScriptStruct FStateTreeSharedEvent ***********************************************

// ********** Begin ScriptStruct FStateTreeEventQueue **********************************************
struct Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeEventQueue;
// ********** End ScriptStruct FStateTreeEventQueue ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h

// ********** Begin Enum EStateTreeLoopEvents ******************************************************
#define FOREACH_ENUM_ESTATETREELOOPEVENTS(op) \
	op(EStateTreeLoopEvents::Next) \
	op(EStateTreeLoopEvents::Break) \
	op(EStateTreeLoopEvents::Consume) 

enum class EStateTreeLoopEvents : uint8;
template<> struct TIsUEnumClass<EStateTreeLoopEvents> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeLoopEvents>();
// ********** End Enum EStateTreeLoopEvents ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
