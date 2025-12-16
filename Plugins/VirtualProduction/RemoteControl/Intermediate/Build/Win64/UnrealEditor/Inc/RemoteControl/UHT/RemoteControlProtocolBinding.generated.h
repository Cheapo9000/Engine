// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlProtocolBinding.h"

#ifdef REMOTECONTROL_RemoteControlProtocolBinding_generated_h
#error "RemoteControlProtocolBinding.generated.h already included, missing '#pragma once' in RemoteControlProtocolBinding.h"
#endif
#define REMOTECONTROL_RemoteControlProtocolBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlProtocolMapping *************************************
struct Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlProtocolMapping;
// ********** End ScriptStruct FRemoteControlProtocolMapping ***************************************

// ********** Begin ScriptStruct FRemoteControlProtocolEntity **************************************
struct Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_389_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlProtocolEntity;
// ********** End ScriptStruct FRemoteControlProtocolEntity ****************************************

// ********** Begin ScriptStruct FRemoteControlProtocolBinding *************************************
struct Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_602_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlProtocolBinding;
// ********** End ScriptStruct FRemoteControlProtocolBinding ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h

// ********** Begin Enum ERCBindingStatus **********************************************************
#define FOREACH_ENUM_ERCBINDINGSTATUS(op) \
	op(ERCBindingStatus::Unassigned) \
	op(ERCBindingStatus::Awaiting) \
	op(ERCBindingStatus::Bound) 

enum class ERCBindingStatus : uint8;
template<> struct TIsUEnumClass<ERCBindingStatus> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCBindingStatus>();
// ********** End Enum ERCBindingStatus ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
