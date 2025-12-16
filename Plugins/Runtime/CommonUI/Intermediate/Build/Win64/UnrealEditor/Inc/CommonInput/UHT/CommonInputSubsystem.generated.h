// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputSubsystem.h"

#ifdef COMMONINPUT_CommonInputSubsystem_generated_h
#error "CommonInputSubsystem.generated.h already included, missing '#pragma once' in CommonInputSubsystem.h"
#endif
#define COMMONINPUT_CommonInputSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonInputType : uint8;

// ********** Begin Delegate FInputMethodChangedDelegate *******************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_19_DELEGATE \
COMMONINPUT_API void FInputMethodChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputMethodChangedDelegate, ECommonInputType bNewInputType);


// ********** End Delegate FInputMethodChangedDelegate *********************************************

// ********** Begin Class UCommonInputSubsystem ****************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastInputMethodChanged); \
	DECLARE_FUNCTION(execShouldShowInputKeys); \
	DECLARE_FUNCTION(execIsUsingPointerInput); \
	DECLARE_FUNCTION(execSetGamepadInputType); \
	DECLARE_FUNCTION(execGetCurrentGamepadName); \
	DECLARE_FUNCTION(execSetCurrentInputType); \
	DECLARE_FUNCTION(execGetDefaultInputType); \
	DECLARE_FUNCTION(execGetCurrentInputType); \
	DECLARE_FUNCTION(execIsInputMethodActive);


struct Z_Construct_UClass_UCommonInputSubsystem_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputSubsystem(); \
	friend struct ::Z_Construct_UClass_UCommonInputSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputSubsystem)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputSubsystem(UCommonInputSubsystem&&) = delete; \
	UCommonInputSubsystem(const UCommonInputSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputSubsystem) \
	COMMONINPUT_API virtual ~UCommonInputSubsystem();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputSubsystem;

// ********** End Class UCommonInputSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
