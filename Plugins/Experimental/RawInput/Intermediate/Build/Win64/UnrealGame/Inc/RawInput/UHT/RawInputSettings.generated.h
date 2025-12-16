// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RawInputSettings.h"

#ifdef RAWINPUT_RawInputSettings_generated_h
#error "RawInputSettings.generated.h already included, missing '#pragma once' in RawInputSettings.h"
#endif
#define RAWINPUT_RawInputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRawInputDeviceAxisProperties *************************************
struct Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics;
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRawInputDeviceAxisProperties;
// ********** End ScriptStruct FRawInputDeviceAxisProperties ***************************************

// ********** Begin ScriptStruct FRawInputDeviceButtonProperties ***********************************
struct Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics;
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRawInputDeviceButtonProperties;
// ********** End ScriptStruct FRawInputDeviceButtonProperties *************************************

// ********** Begin ScriptStruct FRawInputDeviceConfiguration **************************************
struct Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics;
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRawInputDeviceConfiguration;
// ********** End ScriptStruct FRawInputDeviceConfiguration ****************************************

// ********** Begin Class URawInputSettings ********************************************************
struct Z_Construct_UClass_URawInputSettings_Statics;
RAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawInputSettings(); \
	friend struct ::Z_Construct_UClass_URawInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAWINPUT_API UClass* ::Z_Construct_UClass_URawInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URawInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RawInput"), Z_Construct_UClass_URawInputSettings_NoRegister) \
	DECLARE_SERIALIZER(URawInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URawInputSettings(URawInputSettings&&) = delete; \
	URawInputSettings(const URawInputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawInputSettings) \
	NO_API virtual ~URawInputSettings();


#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_86_PROLOG
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URawInputSettings;

// ********** End Class URawInputSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
