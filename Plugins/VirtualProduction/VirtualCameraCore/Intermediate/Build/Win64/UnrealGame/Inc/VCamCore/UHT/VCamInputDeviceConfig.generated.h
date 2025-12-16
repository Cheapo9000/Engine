// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/VCamInputDeviceConfig.h"

#ifdef VCAMCORE_VCamInputDeviceConfig_generated_h
#error "VCamInputDeviceConfig.generated.h already included, missing '#pragma once' in VCamInputDeviceConfig.h"
#endif
#define VCAMCORE_VCamInputDeviceConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVCamInputDeviceID ************************************************
struct Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamInputDeviceID;
// ********** End ScriptStruct FVCamInputDeviceID **************************************************

// ********** Begin ScriptStruct FVCamInputDeviceConfig ********************************************
struct Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamInputDeviceConfig;
// ********** End ScriptStruct FVCamInputDeviceConfig **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h

// ********** Begin Enum EVCamInputLoggingMode *****************************************************
#define FOREACH_ENUM_EVCAMINPUTLOGGINGMODE(op) \
	op(EVCamInputLoggingMode::None) \
	op(EVCamInputLoggingMode::OnlyConsumable) \
	op(EVCamInputLoggingMode::OnlyGamepad) \
	op(EVCamInputLoggingMode::All) 

enum class EVCamInputLoggingMode : uint8;
template<> struct TIsUEnumClass<EVCamInputLoggingMode> { enum { Value = true }; };
template<> VCAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamInputLoggingMode>();
// ********** End Enum EVCamInputLoggingMode *******************************************************

// ********** Begin Enum EVCamInputMode ************************************************************
#define FOREACH_ENUM_EVCAMINPUTMODE(op) \
	op(EVCamInputMode::ConsumeIfUsed) \
	op(EVCamInputMode::ConsumeDevice) \
	op(EVCamInputMode::DoNotConsume) \
	op(EVCamInputMode::Ignore) 

enum class EVCamInputMode : uint8;
template<> struct TIsUEnumClass<EVCamInputMode> { enum { Value = true }; };
template<> VCAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamInputMode>();
// ********** End Enum EVCamInputMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
