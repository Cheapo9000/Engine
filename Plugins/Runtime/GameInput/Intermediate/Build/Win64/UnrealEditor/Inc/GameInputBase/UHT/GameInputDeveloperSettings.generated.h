// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInputDeveloperSettings.h"

#ifdef GAMEINPUTBASE_GameInputDeveloperSettings_generated_h
#error "GameInputDeveloperSettings.generated.h already included, missing '#pragma once' in GameInputDeveloperSettings.h"
#endif
#define GAMEINPUTBASE_GameInputDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameInputDeviceIdentifier ****************************************
struct Z_Construct_UScriptStruct_FGameInputDeviceIdentifier_Statics;
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameInputDeviceIdentifier_Statics; \
	GAMEINPUTBASE_API static class UScriptStruct* StaticStruct();


struct FGameInputDeviceIdentifier;
// ********** End ScriptStruct FGameInputDeviceIdentifier ******************************************

// ********** Begin ScriptStruct FGameInputControllerAxisData **************************************
struct Z_Construct_UScriptStruct_FGameInputControllerAxisData_Statics;
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameInputControllerAxisData_Statics; \
	GAMEINPUTBASE_API static class UScriptStruct* StaticStruct();


struct FGameInputControllerAxisData;
// ********** End ScriptStruct FGameInputControllerAxisData ****************************************

// ********** Begin ScriptStruct FGameInputRawDeviceReportData *************************************
struct Z_Construct_UScriptStruct_FGameInputRawDeviceReportData_Statics;
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameInputRawDeviceReportData_Statics; \
	GAMEINPUTBASE_API static class UScriptStruct* StaticStruct();


struct FGameInputRawDeviceReportData;
// ********** End ScriptStruct FGameInputRawDeviceReportData ***************************************

// ********** Begin ScriptStruct FGameInputDeviceConfiguration *************************************
struct Z_Construct_UScriptStruct_FGameInputDeviceConfiguration_Statics;
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameInputDeviceConfiguration_Statics; \
	GAMEINPUTBASE_API static class UScriptStruct* StaticStruct();


struct FGameInputDeviceConfiguration;
// ********** End ScriptStruct FGameInputDeviceConfiguration ***************************************

// ********** Begin Class UGameInputPlatformSettings ***********************************************
struct Z_Construct_UClass_UGameInputPlatformSettings_Statics;
GAMEINPUTBASE_API UClass* Z_Construct_UClass_UGameInputPlatformSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_288_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInputPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UGameInputPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEINPUTBASE_API UClass* ::Z_Construct_UClass_UGameInputPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInputBase"), Z_Construct_UClass_UGameInputPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameInputPlatformSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_288_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEINPUTBASE_API UGameInputPlatformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInputPlatformSettings(UGameInputPlatformSettings&&) = delete; \
	UGameInputPlatformSettings(const UGameInputPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEINPUTBASE_API, UGameInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInputPlatformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInputPlatformSettings) \
	GAMEINPUTBASE_API virtual ~UGameInputPlatformSettings();


#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_285_PROLOG
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_288_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_288_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_288_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInputPlatformSettings;

// ********** End Class UGameInputPlatformSettings *************************************************

// ********** Begin Class UGameInputDeveloperSettings **********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetControllerButtonMappingDataKeyOptions);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UGameInputDeveloperSettings_Statics;
GAMEINPUTBASE_API UClass* Z_Construct_UClass_UGameInputDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInputDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UGameInputDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEINPUTBASE_API UClass* ::Z_Construct_UClass_UGameInputDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInputDeveloperSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInputBase"), Z_Construct_UClass_UGameInputDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameInputDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInputDeveloperSettings(UGameInputDeveloperSettings&&) = delete; \
	UGameInputDeveloperSettings(const UGameInputDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEINPUTBASE_API, UGameInputDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInputDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInputDeveloperSettings) \
	GAMEINPUTBASE_API virtual ~UGameInputDeveloperSettings();


#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_430_PROLOG
#define FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h_433_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInputDeveloperSettings;

// ********** End Class UGameInputDeveloperSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameInput_Source_GameInputBase_Public_GameInputDeveloperSettings_h

// ********** Begin Enum ERawDeviceReportTranslationBehavior ***************************************
#define FOREACH_ENUM_ERAWDEVICEREPORTTRANSLATIONBEHAVIOR(op) \
	op(ERawDeviceReportTranslationBehavior::TreatAsTrigger) \
	op(ERawDeviceReportTranslationBehavior::TreatAsAnalog) \
	op(ERawDeviceReportTranslationBehavior::TreatAsButton) \
	op(ERawDeviceReportTranslationBehavior::TreatAsButtonBitmask) \
	op(ERawDeviceReportTranslationBehavior::TreatAsPackedAxisPair) 

enum class ERawDeviceReportTranslationBehavior : uint8;
template<> struct TIsUEnumClass<ERawDeviceReportTranslationBehavior> { enum { Value = true }; };
template<> GAMEINPUTBASE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERawDeviceReportTranslationBehavior>();
// ********** End Enum ERawDeviceReportTranslationBehavior *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
