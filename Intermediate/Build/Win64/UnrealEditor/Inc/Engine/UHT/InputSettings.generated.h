// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputSettings.h"

#ifdef ENGINE_InputSettings_generated_h
#error "InputSettings.generated.h already included, missing '#pragma once' in InputSettings.h"
#endif
#define ENGINE_InputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputSettings;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;

// ********** Begin Class UInputSettings ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execForceRebuildKeymaps); \
	DECLARE_FUNCTION(execGetAxisNames); \
	DECLARE_FUNCTION(execGetActionNames); \
	DECLARE_FUNCTION(execSaveKeyMappings); \
	DECLARE_FUNCTION(execRemoveAxisMapping); \
	DECLARE_FUNCTION(execGetAxisMappingByName); \
	DECLARE_FUNCTION(execAddAxisMapping); \
	DECLARE_FUNCTION(execRemoveActionMapping); \
	DECLARE_FUNCTION(execGetActionMappingByName); \
	DECLARE_FUNCTION(execAddActionMapping); \
	DECLARE_FUNCTION(execGetInputSettings);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execGetAllActionAndAxisNames);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UInputSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct ::Z_Construct_UClass_UInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputSettings_NoRegister) \
	DECLARE_SERIALIZER(UInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputSettings(UInputSettings&&) = delete; \
	UInputSettings(const UInputSettings&) = delete; \
	ENGINE_API virtual ~UInputSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputSettings;

// ********** End Class UInputSettings *************************************************************

// ********** Begin ScriptStruct FHardwareDeviceIdentifier *****************************************
struct Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_433_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHardwareDeviceIdentifier;
// ********** End ScriptStruct FHardwareDeviceIdentifier *******************************************

// ********** Begin Class UInputPlatformSettings ***************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetAllHardwareDeviceNames);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UInputPlatformSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputPlatformSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UInputPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UInputPlatformSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputPlatformSettings(UInputPlatformSettings&&) = delete; \
	UInputPlatformSettings(const UInputPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputPlatformSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputPlatformSettings) \
	ENGINE_API virtual ~UInputPlatformSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_500_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_503_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputPlatformSettings;

// ********** End Class UInputPlatformSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h

// ********** Begin Enum EHardwareDeviceSupportedFeatures ******************************************
#define FOREACH_ENUM_EHARDWAREDEVICESUPPORTEDFEATURES(op) \
	op(EHardwareDeviceSupportedFeatures::Unspecified) \
	op(EHardwareDeviceSupportedFeatures::Keypress) \
	op(EHardwareDeviceSupportedFeatures::Pointer) \
	op(EHardwareDeviceSupportedFeatures::Gamepad) \
	op(EHardwareDeviceSupportedFeatures::Touch) \
	op(EHardwareDeviceSupportedFeatures::Camera) \
	op(EHardwareDeviceSupportedFeatures::MotionTracking) \
	op(EHardwareDeviceSupportedFeatures::Lights) \
	op(EHardwareDeviceSupportedFeatures::TriggerHaptics) \
	op(EHardwareDeviceSupportedFeatures::ForceFeedback) \
	op(EHardwareDeviceSupportedFeatures::AudioBasedVibrations) \
	op(EHardwareDeviceSupportedFeatures::Acceleration) \
	op(EHardwareDeviceSupportedFeatures::Virtual) \
	op(EHardwareDeviceSupportedFeatures::Microphone) \
	op(EHardwareDeviceSupportedFeatures::Orientation) \
	op(EHardwareDeviceSupportedFeatures::Guitar) \
	op(EHardwareDeviceSupportedFeatures::Drums) \
	op(EHardwareDeviceSupportedFeatures::CustomA) \
	op(EHardwareDeviceSupportedFeatures::CustomB) \
	op(EHardwareDeviceSupportedFeatures::CustomC) \
	op(EHardwareDeviceSupportedFeatures::CustomD) \
	op(EHardwareDeviceSupportedFeatures::All) 

namespace EHardwareDeviceSupportedFeatures { enum Type : int32; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHardwareDeviceSupportedFeatures::Type>();
// ********** End Enum EHardwareDeviceSupportedFeatures ********************************************

// ********** Begin Enum EHardwareDevicePrimaryType ************************************************
#define FOREACH_ENUM_EHARDWAREDEVICEPRIMARYTYPE(op) \
	op(EHardwareDevicePrimaryType::Unspecified) \
	op(EHardwareDevicePrimaryType::KeyboardAndMouse) \
	op(EHardwareDevicePrimaryType::Gamepad) \
	op(EHardwareDevicePrimaryType::Touch) \
	op(EHardwareDevicePrimaryType::MotionTracking) \
	op(EHardwareDevicePrimaryType::RacingWheel) \
	op(EHardwareDevicePrimaryType::FlightStick) \
	op(EHardwareDevicePrimaryType::Camera) \
	op(EHardwareDevicePrimaryType::Instrument) \
	op(EHardwareDevicePrimaryType::CustomTypeA) \
	op(EHardwareDevicePrimaryType::CustomTypeB) \
	op(EHardwareDevicePrimaryType::CustomTypeC) \
	op(EHardwareDevicePrimaryType::CustomTypeD) 

enum class EHardwareDevicePrimaryType : uint8;
template<> struct TIsUEnumClass<EHardwareDevicePrimaryType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHardwareDevicePrimaryType>();
// ********** End Enum EHardwareDevicePrimaryType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
