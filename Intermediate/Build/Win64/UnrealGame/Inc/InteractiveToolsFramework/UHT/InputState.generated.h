// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputState.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InputState_generated_h
#error "InputState.generated.h already included, missing '#pragma once' in InputState.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInputRayHit ******************************************************
struct Z_Construct_UScriptStruct_FInputRayHit_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputRayHit_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FInputRayHit;
// ********** End ScriptStruct FInputRayHit ********************************************************

// ********** Begin ScriptStruct FDeviceButtonState ************************************************
struct Z_Construct_UScriptStruct_FDeviceButtonState_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceButtonState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FDeviceButtonState;
// ********** End ScriptStruct FDeviceButtonState **************************************************

// ********** Begin ScriptStruct FKeyboardInputDeviceState *****************************************
struct Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FKeyboardInputDeviceState;
// ********** End ScriptStruct FKeyboardInputDeviceState *******************************************

// ********** Begin ScriptStruct FMouseInputDeviceState ********************************************
struct Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_213_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMouseInputDeviceState;
// ********** End ScriptStruct FMouseInputDeviceState **********************************************

// ********** Begin ScriptStruct FInputDeviceState *************************************************
struct Z_Construct_UScriptStruct_FInputDeviceState_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FInputDeviceState;
// ********** End ScriptStruct FInputDeviceState ***************************************************

// ********** Begin ScriptStruct FInputDeviceRay ***************************************************
struct Z_Construct_UScriptStruct_FInputDeviceRay_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_368_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputDeviceRay_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FInputDeviceRay;
// ********** End ScriptStruct FInputDeviceRay *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h

// ********** Begin Enum EInputDevices *************************************************************
#define FOREACH_ENUM_EINPUTDEVICES(op) \
	op(EInputDevices::None) \
	op(EInputDevices::Keyboard) \
	op(EInputDevices::Mouse) \
	op(EInputDevices::Gamepad) \
	op(EInputDevices::OculusTouch) \
	op(EInputDevices::HTCViveWands) \
	op(EInputDevices::AnySpatialDevice) \
	op(EInputDevices::TabletFingers) 

enum class EInputDevices;
template<> struct TIsUEnumClass<EInputDevices> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputDevices>();
// ********** End Enum EInputDevices ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
