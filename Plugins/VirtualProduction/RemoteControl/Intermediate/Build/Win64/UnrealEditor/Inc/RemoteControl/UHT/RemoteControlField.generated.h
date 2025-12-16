// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlField.h"

#ifdef REMOTECONTROL_RemoteControlField_generated_h
#error "RemoteControlField.generated.h already included, missing '#pragma once' in RemoteControlField.h"
#endif
#define REMOTECONTROL_RemoteControlField_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlField ***********************************************
struct Z_Construct_UScriptStruct_FRemoteControlField_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlField_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlEntity Super;


struct FRemoteControlField;
// ********** End ScriptStruct FRemoteControlField *************************************************

// ********** Begin ScriptStruct FRemoteControlProperty ********************************************
struct Z_Construct_UScriptStruct_FRemoteControlProperty_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlProperty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlField Super;


struct FRemoteControlProperty;
// ********** End ScriptStruct FRemoteControlProperty **********************************************

// ********** Begin ScriptStruct FRemoteControlFunction ********************************************
struct Z_Construct_UScriptStruct_FRemoteControlFunction_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlFunction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlField Super;


struct FRemoteControlFunction;
// ********** End ScriptStruct FRemoteControlFunction **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h

// ********** Begin Enum EExposedFieldType *********************************************************
#define FOREACH_ENUM_EEXPOSEDFIELDTYPE(op) \
	op(EExposedFieldType::Invalid) \
	op(EExposedFieldType::Property) \
	op(EExposedFieldType::Function) 

enum class EExposedFieldType : uint8;
template<> struct TIsUEnumClass<EExposedFieldType> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<EExposedFieldType>();
// ********** End Enum EExposedFieldType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
