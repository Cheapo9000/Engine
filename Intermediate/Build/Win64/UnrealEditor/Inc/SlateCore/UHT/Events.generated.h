// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/Events.h"

#ifdef SLATECORE_Events_generated_h
#error "Events.generated.h already included, missing '#pragma once' in Events.h"
#endif
#define SLATECORE_Events_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFocusEvent *******************************************************
struct Z_Construct_UScriptStruct_FFocusEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFocusEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FFocusEvent;
// ********** End ScriptStruct FFocusEvent *********************************************************

// ********** Begin ScriptStruct FCaptureLostEvent *************************************************
struct Z_Construct_UScriptStruct_FCaptureLostEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCaptureLostEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FCaptureLostEvent;
// ********** End ScriptStruct FCaptureLostEvent ***************************************************

// ********** Begin ScriptStruct FInputEvent *******************************************************
struct Z_Construct_UScriptStruct_FInputEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FInputEvent;
// ********** End ScriptStruct FInputEvent *********************************************************

// ********** Begin ScriptStruct FKeyEvent *********************************************************
struct Z_Construct_UScriptStruct_FKeyEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_432_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKeyEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


struct FKeyEvent;
// ********** End ScriptStruct FKeyEvent ***********************************************************

// ********** Begin ScriptStruct FAnalogInputEvent *************************************************
struct Z_Construct_UScriptStruct_FAnalogInputEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_529_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnalogInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FKeyEvent Super;


struct FAnalogInputEvent;
// ********** End ScriptStruct FAnalogInputEvent ***************************************************

// ********** Begin ScriptStruct FCharacterEvent ***************************************************
struct Z_Construct_UScriptStruct_FCharacterEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_607_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCharacterEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


struct FCharacterEvent;
// ********** End ScriptStruct FCharacterEvent *****************************************************

// ********** Begin ScriptStruct FPointerEvent *****************************************************
struct Z_Construct_UScriptStruct_FPointerEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_696_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPointerEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


struct FPointerEvent;
// ********** End ScriptStruct FPointerEvent *******************************************************

// ********** Begin ScriptStruct FMotionEvent ******************************************************
struct Z_Construct_UScriptStruct_FMotionEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_1061_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


struct FMotionEvent;
// ********** End ScriptStruct FMotionEvent ********************************************************

// ********** Begin ScriptStruct FNavigationEvent **************************************************
struct Z_Construct_UScriptStruct_FNavigationEvent_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_1149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


struct FNavigationEvent;
// ********** End ScriptStruct FNavigationEvent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h

// ********** Begin Enum EFocusCause ***************************************************************
#define FOREACH_ENUM_EFOCUSCAUSE(op) \
	op(EFocusCause::Mouse) \
	op(EFocusCause::Navigation) \
	op(EFocusCause::SetDirectly) \
	op(EFocusCause::Cleared) \
	op(EFocusCause::OtherWidgetLostFocus) \
	op(EFocusCause::WindowActivate) 

enum class EFocusCause : uint8;
template<> struct TIsUEnumClass<EFocusCause> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFocusCause>();
// ********** End Enum EFocusCause *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
