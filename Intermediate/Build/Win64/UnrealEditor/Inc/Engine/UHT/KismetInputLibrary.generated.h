// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetInputLibrary.h"

#ifdef ENGINE_KismetInputLibrary_generated_h
#error "KismetInputLibrary.generated.h already included, missing '#pragma once' in KismetInputLibrary.h"
#endif
#define ENGINE_KismetInputLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateGesture : uint8;
enum class EUINavigation : uint8;
enum class EUINavigationAction : uint8;
struct FAnalogInputEvent;
struct FInputChord;
struct FInputEvent;
struct FKey;
struct FKeyEvent;
struct FPointerEvent;
struct FSlateModifierKeysState;

// ********** Begin ScriptStruct FSlateModifierKeysState *******************************************
struct Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSlateModifierKeysState;
// ********** End ScriptStruct FSlateModifierKeysState *********************************************

// ********** Begin Class UKismetInputLibrary ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPointerEvent_GetGestureDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetGestureType); \
	DECLARE_FUNCTION(execPointerEvent_IsTouchEvent); \
	DECLARE_FUNCTION(execPointerEvent_GetTouchpadIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetPointerIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetUserIndex); \
	DECLARE_FUNCTION(execPointerEvent_GetWheelDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetEffectingButton); \
	DECLARE_FUNCTION(execPointerEvent_IsMouseButtonDown); \
	DECLARE_FUNCTION(execPointerEvent_GetCursorDelta); \
	DECLARE_FUNCTION(execPointerEvent_GetLastScreenSpacePosition); \
	DECLARE_FUNCTION(execPointerEvent_GetScreenSpacePosition); \
	DECLARE_FUNCTION(execGetAnalogValue); \
	DECLARE_FUNCTION(execGetUserIndex); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execInputChord_GetDisplayName); \
	DECLARE_FUNCTION(execGetModifierKeysState); \
	DECLARE_FUNCTION(execModifierKeysState_IsCommandDown); \
	DECLARE_FUNCTION(execModifierKeysState_IsAltDown); \
	DECLARE_FUNCTION(execModifierKeysState_IsControlDown); \
	DECLARE_FUNCTION(execModifierKeysState_IsShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsCommandDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsAltDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsControlDown); \
	DECLARE_FUNCTION(execInputEvent_IsRightShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsLeftShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsShiftDown); \
	DECLARE_FUNCTION(execInputEvent_IsRepeat); \
	DECLARE_FUNCTION(execKey_GetDisplayName); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromAnalog); \
	DECLARE_FUNCTION(execKey_GetNavigationDirectionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationActionFromKey); \
	DECLARE_FUNCTION(execKey_GetNavigationAction); \
	DECLARE_FUNCTION(execKey_IsValid); \
	DECLARE_FUNCTION(execKey_IsDigital); \
	DECLARE_FUNCTION(execKey_IsAnalog); \
	DECLARE_FUNCTION(execKey_IsButtonAxis); \
	DECLARE_FUNCTION(execKey_IsAxis3D); \
	DECLARE_FUNCTION(execKey_IsAxis2D); \
	DECLARE_FUNCTION(execKey_IsAxis1D); \
	DECLARE_FUNCTION(execKey_IsKeyboardKey); \
	DECLARE_FUNCTION(execKey_IsMouseButton); \
	DECLARE_FUNCTION(execKey_IsGamepadKey); \
	DECLARE_FUNCTION(execKey_IsModifierKey); \
	DECLARE_FUNCTION(execEqualEqual_InputChordInputChord); \
	DECLARE_FUNCTION(execEqualEqual_KeyKey); \
	DECLARE_FUNCTION(execCalibrateTilt);


struct Z_Construct_UClass_UKismetInputLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUKismetInputLibrary(); \
	friend struct ::Z_Construct_UClass_UKismetInputLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UKismetInputLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKismetInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UKismetInputLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKismetInputLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInputLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKismetInputLibrary(UKismetInputLibrary&&) = delete; \
	UKismetInputLibrary(const UKismetInputLibrary&) = delete; \
	ENGINE_API virtual ~UKismetInputLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKismetInputLibrary;

// ********** End Class UKismetInputLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h

// ********** Begin Enum ESlateGesture *************************************************************
#define FOREACH_ENUM_ESLATEGESTURE(op) \
	op(ESlateGesture::None) \
	op(ESlateGesture::Scroll) \
	op(ESlateGesture::Magnify) \
	op(ESlateGesture::Swipe) \
	op(ESlateGesture::Rotate) \
	op(ESlateGesture::LongPress) 

enum class ESlateGesture : uint8;
template<> struct TIsUEnumClass<ESlateGesture> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateGesture>();
// ********** End Enum ESlateGesture ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
