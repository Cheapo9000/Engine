// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InputComponent.h"

#ifdef ENGINE_InputComponent_generated_h
#error "InputComponent.generated.h already included, missing '#pragma once' in InputComponent.h"
#endif
#define ENGINE_InputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;

// ********** Begin Delegate FInputActionHandlerDynamicSignature ***********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_127_DELEGATE \
ENGINE_API void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key);


// ********** End Delegate FInputActionHandlerDynamicSignature *************************************

// ********** Begin Delegate FInputTouchHandlerDynamicSignature ************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_412_DELEGATE \
ENGINE_API void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location);


// ********** End Delegate FInputTouchHandlerDynamicSignature **************************************

// ********** Begin Delegate FInputAxisHandlerDynamicSignature *************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_465_DELEGATE \
ENGINE_API void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue);


// ********** End Delegate FInputAxisHandlerDynamicSignature ***************************************

// ********** Begin Delegate FInputVectorAxisHandlerDynamicSignature *******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_563_DELEGATE \
ENGINE_API void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue);


// ********** End Delegate FInputVectorAxisHandlerDynamicSignature *********************************

// ********** Begin Delegate FInputGestureHandlerDynamicSignature **********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_626_DELEGATE \
ENGINE_API void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value);


// ********** End Delegate FInputGestureHandlerDynamicSignature ************************************

// ********** Begin ScriptStruct FCachedKeyToActionInfo ********************************************
struct Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_695_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCachedKeyToActionInfo;
// ********** End ScriptStruct FCachedKeyToActionInfo **********************************************

// ********** Begin Class UInputComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetControllerAnalogStickState); \
	DECLARE_FUNCTION(execGetControllerMouseDelta); \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown); \
	DECLARE_FUNCTION(execGetTouchState); \
	DECLARE_FUNCTION(execGetControllerVectorKeyState); \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState); \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased); \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed); \
	DECLARE_FUNCTION(execIsControllerKeyDown); \
	DECLARE_FUNCTION(execOnInputOwnerEndPlayed);


struct Z_Construct_UClass_UInputComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend struct ::Z_Construct_UClass_UInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UInputComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputComponent(UInputComponent&&) = delete; \
	UInputComponent(const UInputComponent&) = delete; \
	ENGINE_API virtual ~UInputComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_726_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_730_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputComponent;

// ********** End Class UInputComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h

// ********** Begin Enum EControllerAnalogStick ****************************************************
#define FOREACH_ENUM_ECONTROLLERANALOGSTICK(op) \
	op(EControllerAnalogStick::CAS_LeftStick) \
	op(EControllerAnalogStick::CAS_RightStick) 

namespace EControllerAnalogStick { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EControllerAnalogStick::Type>();
// ********** End Enum EControllerAnalogStick ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
