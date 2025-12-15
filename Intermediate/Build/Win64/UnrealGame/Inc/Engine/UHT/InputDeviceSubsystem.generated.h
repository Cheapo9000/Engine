// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceSubsystem.h"

#ifdef ENGINE_InputDeviceSubsystem_generated_h
#error "InputDeviceSubsystem.generated.h already included, missing '#pragma once' in InputDeviceSubsystem.h"
#endif
#define ENGINE_InputDeviceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInputDeviceProperty;
enum class EHardwareDevicePrimaryType : uint8;
struct FActivateDevicePropertyParams;
struct FHardwareDeviceIdentifier;
struct FInputDeviceId;
struct FInputDevicePropertyHandle;
struct FPlatformUserId;

// ********** Begin ScriptStruct FActivateDevicePropertyParams *************************************
struct Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActivateDevicePropertyParams;
// ********** End ScriptStruct FActivateDevicePropertyParams ***************************************

// ********** Begin ScriptStruct FActiveDeviceProperty *********************************************
struct Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActiveDeviceProperty;
// ********** End ScriptStruct FActiveDeviceProperty ***********************************************

// ********** Begin Delegate FHardwareInputDeviceChanged *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_112_DELEGATE \
ENGINE_API void FHardwareInputDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& HardwareInputDeviceChanged, const FPlatformUserId UserId, const FInputDeviceId DeviceId);


// ********** End Delegate FHardwareInputDeviceChanged *********************************************

// ********** Begin Class UInputDeviceSubsystem ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputDeviceHardwareIdentifier); \
	DECLARE_FUNCTION(execGetMostRecentlyUsedInputDeviceId); \
	DECLARE_FUNCTION(execGetMostRecentlyUsedHardwareDevice); \
	DECLARE_FUNCTION(execRemoveAllDeviceProperties); \
	DECLARE_FUNCTION(execRemoveDevicePropertyHandles); \
	DECLARE_FUNCTION(execRemoveDevicePropertyByHandle); \
	DECLARE_FUNCTION(execIsPropertyActive); \
	DECLARE_FUNCTION(execGetActiveDeviceProperty); \
	DECLARE_FUNCTION(execActivateDevicePropertyOfClass);


struct Z_Construct_UClass_UInputDeviceSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceSubsystem(); \
	friend struct ::Z_Construct_UClass_UInputDeviceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputDeviceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceSubsystem(UInputDeviceSubsystem&&) = delete; \
	UInputDeviceSubsystem(const UInputDeviceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDeviceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceSubsystem) \
	ENGINE_API virtual ~UInputDeviceSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_118_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceSubsystem;

// ********** End Class UInputDeviceSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
