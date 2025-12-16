// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputComponent.h"

#ifdef ENHANCEDINPUT_EnhancedInputComponent_generated_h
#error "EnhancedInputComponent.generated.h already included, missing '#pragma once' in EnhancedInputComponent.h"
#endif
#define ENHANCEDINPUT_EnhancedInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FInputActionValue;
struct FKey;

// ********** Begin Delegate FInputDebugKeyHandlerDynamicSignature *********************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_21_DELEGATE \
ENHANCEDINPUT_API void FInputDebugKeyHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputDebugKeyHandlerDynamicSignature, FKey Key, FInputActionValue ActionValue);


// ********** End Delegate FInputDebugKeyHandlerDynamicSignature ***********************************

// ********** Begin Delegate FEnhancedInputActionHandlerDynamicSignature ***************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_33_DELEGATE \
ENHANCEDINPUT_API void FEnhancedInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& EnhancedInputActionHandlerDynamicSignature, FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const UInputAction* SourceAction);


// ********** End Delegate FEnhancedInputActionHandlerDynamicSignature *****************************

// ********** Begin Class UEnhancedInputComponent **************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBoundActionValue);


struct Z_Construct_UClass_UEnhancedInputComponent_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_INCLASS \
private: \
	static void StaticRegisterNativesUEnhancedInputComponent(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputComponent, UInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputComponent)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputComponent(UEnhancedInputComponent&&) = delete; \
	UEnhancedInputComponent(const UEnhancedInputComponent&) = delete; \
	ENHANCEDINPUT_API virtual ~UEnhancedInputComponent();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_372_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_376_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputComponent;

// ********** End Class UEnhancedInputComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
