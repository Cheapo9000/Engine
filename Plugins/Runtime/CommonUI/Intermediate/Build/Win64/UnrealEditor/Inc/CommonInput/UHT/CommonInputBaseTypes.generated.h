// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputBaseTypes.h"

#ifdef COMMONINPUT_CommonInputBaseTypes_generated_h
#error "CommonInputBaseTypes.generated.h already included, missing '#pragma once' in CommonInputBaseTypes.h"
#endif
#define COMMONINPUT_CommonInputBaseTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCommonInputKeyBrushConfiguration *********************************
struct Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics; \
	COMMONINPUT_API static class UScriptStruct* StaticStruct();


struct FCommonInputKeyBrushConfiguration;
// ********** End ScriptStruct FCommonInputKeyBrushConfiguration ***********************************

// ********** Begin ScriptStruct FCommonInputKeySetBrushConfiguration ******************************
struct Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics; \
	COMMONINPUT_API static class UScriptStruct* StaticStruct();


struct FCommonInputKeySetBrushConfiguration;
// ********** End ScriptStruct FCommonInputKeySetBrushConfiguration ********************************

// ********** Begin ScriptStruct FInputDeviceIdentifierPair ****************************************
struct Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics; \
	COMMONINPUT_API static class UScriptStruct* StaticStruct();


struct FInputDeviceIdentifierPair;
// ********** End ScriptStruct FInputDeviceIdentifierPair ******************************************

// ********** Begin ScriptStruct FInputHoldData ****************************************************
struct Z_Construct_UScriptStruct_FInputHoldData_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputHoldData_Statics; \
	COMMONINPUT_API static class UScriptStruct* StaticStruct();


struct FInputHoldData;
// ********** End ScriptStruct FInputHoldData ******************************************************

// ********** Begin Class UCommonUIInputData *******************************************************
struct Z_Construct_UClass_UCommonUIInputData_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIInputData(); \
	friend struct ::Z_Construct_UClass_UCommonUIInputData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonUIInputData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIInputData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonUIInputData_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIInputData)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONINPUT_API UCommonUIInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIInputData(UCommonUIInputData&&) = delete; \
	UCommonUIInputData(const UCommonUIInputData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonUIInputData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIInputData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIInputData) \
	COMMONINPUT_API virtual ~UCommonUIInputData();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_102_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIInputData;

// ********** End Class UCommonUIInputData *********************************************************

// ********** Begin Class UCommonUIHoldData ********************************************************
struct Z_Construct_UClass_UCommonUIHoldData_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIHoldData_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIHoldData(); \
	friend struct ::Z_Construct_UClass_UCommonUIHoldData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonUIHoldData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIHoldData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonUIHoldData_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIHoldData)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_135_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIHoldData(UCommonUIHoldData&&) = delete; \
	UCommonUIHoldData(const UCommonUIHoldData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonUIHoldData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIHoldData); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonUIHoldData) \
	COMMONINPUT_API virtual ~UCommonUIHoldData();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_132_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIHoldData;

// ********** End Class UCommonUIHoldData **********************************************************

// ********** Begin Class UCommonInputBaseControllerData *******************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegisteredGamepads);


struct Z_Construct_UClass_UCommonInputBaseControllerData_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputBaseControllerData(); \
	friend struct ::Z_Construct_UClass_UCommonInputBaseControllerData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputBaseControllerData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputBaseControllerData)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONINPUT_API UCommonInputBaseControllerData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputBaseControllerData(UCommonInputBaseControllerData&&) = delete; \
	UCommonInputBaseControllerData(const UCommonInputBaseControllerData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputBaseControllerData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputBaseControllerData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputBaseControllerData) \
	COMMONINPUT_API virtual ~UCommonInputBaseControllerData();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_156_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputBaseControllerData;

// ********** End Class UCommonInputBaseControllerData *********************************************

// ********** Begin Class UCommonInputPlatformSettings *********************************************
struct Z_Construct_UClass_UCommonInputPlatformSettings_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UCommonInputPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputPlatformSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_218_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputPlatformSettings(UCommonInputPlatformSettings&&) = delete; \
	UCommonInputPlatformSettings(const UCommonInputPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputPlatformSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputPlatformSettings) \
	COMMONINPUT_API virtual ~UCommonInputPlatformSettings();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_215_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputPlatformSettings;

// ********** End Class UCommonInputPlatformSettings ***********************************************

// ********** Begin ScriptStruct FCommonInputPlatformBaseData **************************************
struct Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_300_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics; \
	COMMONINPUT_API static class UScriptStruct* StaticStruct();


struct FCommonInputPlatformBaseData;
// ********** End ScriptStruct FCommonInputPlatformBaseData ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
