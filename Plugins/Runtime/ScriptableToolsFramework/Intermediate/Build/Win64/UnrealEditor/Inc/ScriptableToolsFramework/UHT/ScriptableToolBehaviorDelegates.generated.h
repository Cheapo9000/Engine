// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviors/ScriptableToolBehaviorDelegates.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolBehaviorDelegates_generated_h
#error "ScriptableToolBehaviorDelegates.generated.h already included, missing '#pragma once' in ScriptableToolBehaviorDelegates.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolBehaviorDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EScriptableToolMouseButton : uint8;
struct FInputDeviceRay;
struct FInputDeviceState;
struct FInputRayHit;
struct FKey;
struct FScriptableToolModifierStates;

// ********** Begin Delegate FMouseBehaviorModiferCheckDelegate ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_18_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API bool FMouseBehaviorModiferCheckDelegate_DelegateWrapper(const FScriptDelegate& MouseBehaviorModiferCheckDelegate, FInputDeviceState const& InputDeviceState);


// ********** End Delegate FMouseBehaviorModiferCheckDelegate **************************************

// ********** Begin Delegate FTestIfHitByClickDelegate *********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_20_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API FInputRayHit FTestIfHitByClickDelegate_DelegateWrapper(const FScriptDelegate& TestIfHitByClickDelegate, FInputDeviceRay ClickPos, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FTestIfHitByClickDelegate ***********************************************

// ********** Begin Delegate FOnHitByClickDelegate *************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_21_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnHitByClickDelegate_DelegateWrapper(const FScriptDelegate& OnHitByClickDelegate, FInputDeviceRay ClickPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnHitByClickDelegate ***************************************************

// ********** Begin Delegate FTestCanBeginClickDragSequenceDelegate ********************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_23_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API FInputRayHit FTestCanBeginClickDragSequenceDelegate_DelegateWrapper(const FScriptDelegate& TestCanBeginClickDragSequenceDelegate, FInputDeviceRay PressPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FTestCanBeginClickDragSequenceDelegate **********************************

// ********** Begin Delegate FOnClickPressDelegate *************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_24_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnClickPressDelegate_DelegateWrapper(const FScriptDelegate& OnClickPressDelegate, FInputDeviceRay PressPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnClickPressDelegate ***************************************************

// ********** Begin Delegate FOnClickDragDelegate **************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_25_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnClickDragDelegate_DelegateWrapper(const FScriptDelegate& OnClickDragDelegate, FInputDeviceRay DragPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnClickDragDelegate ****************************************************

// ********** Begin Delegate FOnClickReleaseDelegate ***********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_26_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnClickReleaseDelegate_DelegateWrapper(const FScriptDelegate& OnClickReleaseDelegate, FInputDeviceRay ReleasePos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnClickReleaseDelegate *************************************************

// ********** Begin Delegate FOnTerminateDragSequenceDelegate **************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_27_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnTerminateDragSequenceDelegate_DelegateWrapper(const FScriptDelegate& OnTerminateDragSequenceDelegate, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnTerminateDragSequenceDelegate ****************************************

// ********** Begin Delegate FTestShouldRespondToMouseWheelDelegate ********************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_29_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API FInputRayHit FTestShouldRespondToMouseWheelDelegate_DelegateWrapper(const FScriptDelegate& TestShouldRespondToMouseWheelDelegate, FInputDeviceRay CurrentPos);


// ********** End Delegate FTestShouldRespondToMouseWheelDelegate **********************************

// ********** Begin Delegate FOnMouseWheelScrollUpDelegate *****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_30_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnMouseWheelScrollUpDelegate_DelegateWrapper(const FScriptDelegate& OnMouseWheelScrollUpDelegate, FInputDeviceRay CurrentPos, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FOnMouseWheelScrollUpDelegate *******************************************

// ********** Begin Delegate FOnMouseWheelScrollDownDelegate ***************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_31_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnMouseWheelScrollDownDelegate_DelegateWrapper(const FScriptDelegate& OnMouseWheelScrollDownDelegate, FInputDeviceRay CurrentPos, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FOnMouseWheelScrollDownDelegate *****************************************

// ********** Begin Delegate FOnBeginSequencePreviewDelegate ***************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_33_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnBeginSequencePreviewDelegate_DelegateWrapper(const FScriptDelegate& OnBeginSequencePreviewDelegate, FInputDeviceRay ClickPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnBeginSequencePreviewDelegate *****************************************

// ********** Begin Delegate FCanBeginClickSequenceDelegate ****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_34_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API bool FCanBeginClickSequenceDelegate_DelegateWrapper(const FScriptDelegate& CanBeginClickSequenceDelegate, FInputDeviceRay ClickPos, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FCanBeginClickSequenceDelegate ******************************************

// ********** Begin Delegate FOnBeginClickSequenceDelegate *****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_35_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnBeginClickSequenceDelegate_DelegateWrapper(const FScriptDelegate& OnBeginClickSequenceDelegate, FInputDeviceRay ClickPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnBeginClickSequenceDelegate *******************************************

// ********** Begin Delegate FOnNextSequencePreviewDelegate ****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_36_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnNextSequencePreviewDelegate_DelegateWrapper(const FScriptDelegate& OnNextSequencePreviewDelegate, FInputDeviceRay ClickPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnNextSequencePreviewDelegate ******************************************

// ********** Begin Delegate FOnNextSequenceClickDelegate ******************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_37_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API bool FOnNextSequenceClickDelegate_DelegateWrapper(const FScriptDelegate& OnNextSequenceClickDelegate, FInputDeviceRay ClickPos, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnNextSequenceClickDelegate ********************************************

// ********** Begin Delegate FOnTerminateClickSequenceDelegate *************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_38_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnTerminateClickSequenceDelegate_DelegateWrapper(const FScriptDelegate& OnTerminateClickSequenceDelegate, FScriptableToolModifierStates Modifiers, EScriptableToolMouseButton MouseButton);


// ********** End Delegate FOnTerminateClickSequenceDelegate ***************************************

// ********** Begin Delegate FRequestAbortClickSequenceDelegate ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_39_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API bool FRequestAbortClickSequenceDelegate_DelegateWrapper(const FScriptDelegate& RequestAbortClickSequenceDelegate);


// ********** End Delegate FRequestAbortClickSequenceDelegate **************************************

// ********** Begin Delegate FBeginHoverSequenceHitTestDelegate ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_41_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API FInputRayHit FBeginHoverSequenceHitTestDelegate_DelegateWrapper(const FScriptDelegate& BeginHoverSequenceHitTestDelegate, FInputDeviceRay CurrentPos, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FBeginHoverSequenceHitTestDelegate **************************************

// ********** Begin Delegate FOnBeginHoverDelegate *************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_42_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnBeginHoverDelegate_DelegateWrapper(const FScriptDelegate& OnBeginHoverDelegate, FInputDeviceRay CurrentPos, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FOnBeginHoverDelegate ***************************************************

// ********** Begin Delegate FOnUpdateHoverDelegate ************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_43_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API bool FOnUpdateHoverDelegate_DelegateWrapper(const FScriptDelegate& OnUpdateHoverDelegate, FInputDeviceRay CurrentPos, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FOnUpdateHoverDelegate **************************************************

// ********** Begin Delegate FOnEndHoverDelegate ***************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_44_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnEndHoverDelegate_DelegateWrapper(const FScriptDelegate& OnEndHoverDelegate);


// ********** End Delegate FOnEndHoverDelegate *****************************************************

// ********** Begin Delegate FOnKeyStateToggleDelegate *********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_46_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnKeyStateToggleDelegate_DelegateWrapper(const FScriptDelegate& OnKeyStateToggleDelegate, FKey Key, FScriptableToolModifierStates Modifiers);


// ********** End Delegate FOnKeyStateToggleDelegate ***********************************************

// ********** Begin Delegate FOnForceEndCaptureDelegate_ScriptableTools ****************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h_47_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FOnForceEndCaptureDelegate_ScriptableTools_DelegateWrapper(const FScriptDelegate& OnForceEndCaptureDelegate_ScriptableTools);


// ********** End Delegate FOnForceEndCaptureDelegate_ScriptableTools ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Behaviors_ScriptableToolBehaviorDelegates_h

// ********** Begin Enum EScriptableToolMouseButton ************************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLMOUSEBUTTON(op) \
	op(EScriptableToolMouseButton::LeftButton) \
	op(EScriptableToolMouseButton::RightButton) \
	op(EScriptableToolMouseButton::MiddleButton) 

enum class EScriptableToolMouseButton : uint8;
template<> struct TIsUEnumClass<EScriptableToolMouseButton> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolMouseButton>();
// ********** End Enum EScriptableToolMouseButton **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
