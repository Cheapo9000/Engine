// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuDelegates.h"

#ifdef TOOLMENUS_ToolMenuDelegates_generated_h
#error "ToolMenuDelegates.generated.h already included, missing '#pragma once' in ToolMenuDelegates.h"
#endif
#define TOOLMENUS_ToolMenuDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
struct FToolMenuContext;

// ********** Begin Delegate FToolMenuDynamicExecuteAction *****************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_40_DELEGATE \
TOOLMENUS_API void FToolMenuDynamicExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicExecuteAction, FToolMenuContext const& Context);


// ********** End Delegate FToolMenuDynamicExecuteAction *******************************************

// ********** Begin Delegate FToolMenuDynamicCanExecuteAction **************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_41_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicCanExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicCanExecuteAction, FToolMenuContext const& Context);


// ********** End Delegate FToolMenuDynamicCanExecuteAction ****************************************

// ********** Begin Delegate FToolMenuDynamicIsActionChecked ***************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_42_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicIsActionChecked_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionChecked, FToolMenuContext const& Context);


// ********** End Delegate FToolMenuDynamicIsActionChecked *****************************************

// ********** Begin Delegate FToolMenuDynamicGetActionCheckState ***********************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_43_DELEGATE \
TOOLMENUS_API ECheckBoxState FToolMenuDynamicGetActionCheckState_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicGetActionCheckState, FToolMenuContext const& Context);


// ********** End Delegate FToolMenuDynamicGetActionCheckState *************************************

// ********** Begin Delegate FToolMenuDynamicIsActionButtonVisible *********************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_44_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicIsActionButtonVisible_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionButtonVisible, FToolMenuContext const& Context);


// ********** End Delegate FToolMenuDynamicIsActionButtonVisible ***********************************

// ********** Begin ScriptStruct FToolDynamicUIAction **********************************************
struct Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolDynamicUIAction;
// ********** End ScriptStruct FToolDynamicUIAction ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
