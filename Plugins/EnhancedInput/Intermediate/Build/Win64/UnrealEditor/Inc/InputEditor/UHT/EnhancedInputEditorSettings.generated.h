// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputEditorSettings.h"

#ifdef INPUTEDITOR_EnhancedInputEditorSettings_generated_h
#error "EnhancedInputEditorSettings.generated.h already included, missing '#pragma once' in EnhancedInputEditorSettings.h"
#endif
#define INPUTEDITOR_EnhancedInputEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnhancedInputEditorProjectSettings **************************************
struct Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics;
INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorProjectSettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTEDITOR_API UClass* ::Z_Construct_UClass_UEnhancedInputEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputEditor"), Z_Construct_UClass_UEnhancedInputEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputEditorProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputEditorProjectSettings(UEnhancedInputEditorProjectSettings&&) = delete; \
	UEnhancedInputEditorProjectSettings(const UEnhancedInputEditorProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputEditorProjectSettings) \
	NO_API virtual ~UEnhancedInputEditorProjectSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_18_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputEditorProjectSettings;

// ********** End Class UEnhancedInputEditorProjectSettings ****************************************

// ********** Begin Class UEnhancedInputEditorSettings *********************************************
struct Z_Construct_UClass_UEnhancedInputEditorSettings_Statics;
INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputEditorSettings(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTEDITOR_API UClass* ::Z_Construct_UClass_UEnhancedInputEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputEditorSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputEditor"), Z_Construct_UClass_UEnhancedInputEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputEditorSettings(UEnhancedInputEditorSettings&&) = delete; \
	UEnhancedInputEditorSettings(const UEnhancedInputEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INPUTEDITOR_API, UEnhancedInputEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputEditorSettings) \
	INPUTEDITOR_API virtual ~UEnhancedInputEditorSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_38_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputEditorSettings;

// ********** End Class UEnhancedInputEditorSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
