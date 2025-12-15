// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Text/ISlateEditableTextWidget.h"

#ifdef SLATE_ISlateEditableTextWidget_generated_h
#error "ISlateEditableTextWidget.generated.h already included, missing '#pragma once' in ISlateEditableTextWidget.h"
#endif
#define SLATE_ISlateEditableTextWidget_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h

// ********** Begin Enum EVirtualKeyboardTrigger ***************************************************
#define FOREACH_ENUM_EVIRTUALKEYBOARDTRIGGER(op) \
	op(EVirtualKeyboardTrigger::OnFocusByPointer) \
	op(EVirtualKeyboardTrigger::OnAllFocusEvents) 

enum class EVirtualKeyboardTrigger : uint8;
template<> struct TIsUEnumClass<EVirtualKeyboardTrigger> { enum { Value = true }; };
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVirtualKeyboardTrigger>();
// ********** End Enum EVirtualKeyboardTrigger *****************************************************

// ********** Begin Enum EVirtualKeyboardDismissAction *********************************************
#define FOREACH_ENUM_EVIRTUALKEYBOARDDISMISSACTION(op) \
	op(EVirtualKeyboardDismissAction::TextChangeOnDismiss) \
	op(EVirtualKeyboardDismissAction::TextCommitOnAccept) \
	op(EVirtualKeyboardDismissAction::TextCommitOnDismiss) 

enum class EVirtualKeyboardDismissAction : uint8;
template<> struct TIsUEnumClass<EVirtualKeyboardDismissAction> { enum { Value = true }; };
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVirtualKeyboardDismissAction>();
// ********** End Enum EVirtualKeyboardDismissAction ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
