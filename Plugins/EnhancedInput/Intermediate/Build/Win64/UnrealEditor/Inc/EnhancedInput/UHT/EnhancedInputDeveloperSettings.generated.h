// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputDeveloperSettings.h"

#ifdef ENHANCEDINPUT_EnhancedInputDeveloperSettings_generated_h
#error "EnhancedInputDeveloperSettings.generated.h already included, missing '#pragma once' in EnhancedInputDeveloperSettings.h"
#endif
#define ENHANCEDINPUT_EnhancedInputDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDefaultContextSetting ********************************************
struct Z_Construct_UScriptStruct_FDefaultContextSetting_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDefaultContextSetting_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FDefaultContextSetting;
// ********** End ScriptStruct FDefaultContextSetting **********************************************

// ********** Begin Class UEnhancedInputDeveloperSettings ******************************************
struct Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputDeveloperSettings(UEnhancedInputDeveloperSettings&&) = delete; \
	UEnhancedInputDeveloperSettings(const UEnhancedInputDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputDeveloperSettings) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputDeveloperSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_42_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputDeveloperSettings;

// ********** End Class UEnhancedInputDeveloperSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
