// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groups/CommonButtonGroupBase.h"

#ifdef COMMONUI_CommonButtonGroupBase_generated_h
#error "CommonButtonGroupBase.generated.h already included, missing '#pragma once' in CommonButtonGroupBase.h"
#endif
#define COMMONUI_CommonButtonGroupBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;

// ********** Begin Delegate FSimpleButtonBaseGroupDelegate ****************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_12_DELEGATE \
COMMONUI_API void FSimpleButtonBaseGroupDelegate_DelegateWrapper(const FMulticastScriptDelegate& SimpleButtonBaseGroupDelegate, UCommonButtonBase* AssociatedButton, int32 ButtonIndex);


// ********** End Delegate FSimpleButtonBaseGroupDelegate ******************************************

// ********** Begin Delegate FOnSelectionCleared ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_13_DELEGATE \
COMMONUI_API void FOnSelectionCleared_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionCleared);


// ********** End Delegate FOnSelectionCleared *****************************************************

// ********** Begin Class UCommonButtonGroupBase ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHandleButtonBaseLockDoubleClicked); \
	DECLARE_FUNCTION(execOnHandleButtonBaseLockClicked); \
	DECLARE_FUNCTION(execOnButtonBaseUnhovered); \
	DECLARE_FUNCTION(execOnButtonBaseHovered); \
	DECLARE_FUNCTION(execOnHandleButtonBaseDoubleClicked); \
	DECLARE_FUNCTION(execOnHandleButtonBaseClicked); \
	DECLARE_FUNCTION(execOnSelectionStateChangedBase); \
	DECLARE_FUNCTION(execGetButtonCount); \
	DECLARE_FUNCTION(execHasAnyButtons); \
	DECLARE_FUNCTION(execGetSelectedButtonBase); \
	DECLARE_FUNCTION(execGetButtonBaseAtIndex); \
	DECLARE_FUNCTION(execFindButtonIndex); \
	DECLARE_FUNCTION(execGetHoveredButtonIndex); \
	DECLARE_FUNCTION(execGetSelectedButtonIndex); \
	DECLARE_FUNCTION(execSelectButtonAtIndex); \
	DECLARE_FUNCTION(execSelectPreviousButton); \
	DECLARE_FUNCTION(execSelectNextButton); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execSetSelectionRequired);


struct Z_Construct_UClass_UCommonButtonGroupBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroupBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonGroupBase(); \
	friend struct ::Z_Construct_UClass_UCommonButtonGroupBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonButtonGroupBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonButtonGroupBase, UCommonWidgetGroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonButtonGroupBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonButtonGroupBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonButtonGroupBase(UCommonButtonGroupBase&&) = delete; \
	UCommonButtonGroupBase(const UCommonButtonGroupBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonButtonGroupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonGroupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonButtonGroupBase) \
	COMMONUI_API virtual ~UCommonButtonGroupBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonButtonGroupBase;

// ********** End Class UCommonButtonGroupBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
