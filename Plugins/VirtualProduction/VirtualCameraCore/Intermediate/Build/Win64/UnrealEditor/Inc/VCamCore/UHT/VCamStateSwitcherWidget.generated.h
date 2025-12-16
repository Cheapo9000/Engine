// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Switcher/VCamStateSwitcherWidget.h"

#ifdef VCAMCORE_VCamStateSwitcherWidget_generated_h
#error "VCamStateSwitcherWidget.generated.h already included, missing '#pragma once' in VCamStateSwitcherWidget.h"
#endif
#define VCAMCORE_VCamStateSwitcherWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamStateSwitcherWidget;
struct FVCamWidgetConnectionState;

// ********** Begin Delegate FChangeConnectionStateEvent *******************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_10_DELEGATE \
VCAMCORE_API void FChangeConnectionStateEvent_DelegateWrapper(const FMulticastScriptDelegate& ChangeConnectionStateEvent, UVCamStateSwitcherWidget* Widget, FName OldState, FName NewState);


// ********** End Delegate FChangeConnectionStateEvent *********************************************

// ********** Begin Class UVCamStateSwitcherWidget *************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execGetStates); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execK2_SetCurrentState);


struct Z_Construct_UClass_UVCamStateSwitcherWidget_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamStateSwitcherWidget(); \
	friend struct ::Z_Construct_UClass_UVCamStateSwitcherWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamStateSwitcherWidget, UVCamWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister) \
	DECLARE_SERIALIZER(UVCamStateSwitcherWidget)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamStateSwitcherWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamStateSwitcherWidget(UVCamStateSwitcherWidget&&) = delete; \
	UVCamStateSwitcherWidget(const UVCamStateSwitcherWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamStateSwitcherWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamStateSwitcherWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamStateSwitcherWidget) \
	NO_API virtual ~UVCamStateSwitcherWidget();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamStateSwitcherWidget;

// ********** End Class UVCamStateSwitcherWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
