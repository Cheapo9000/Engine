// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTEDITOR_EnhancedInputEditorSettings_generated_h
#error "EnhancedInputEditorSettings.generated.h already included, missing '#pragma once' in EnhancedInputEditorSettings.h"
#endif
#define INPUTEDITOR_EnhancedInputEditorSettings_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputEditor"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputEditorProjectSettings(UEnhancedInputEditorProjectSettings&&); \
	UEnhancedInputEditorProjectSettings(const UEnhancedInputEditorProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputEditorProjectSettings) \
	NO_API virtual ~UEnhancedInputEditorProjectSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_16_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTEDITOR_API UClass* StaticClass<class UEnhancedInputEditorProjectSettings>();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputEditorSettings(); \
	friend struct Z_Construct_UClass_UEnhancedInputEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputEditorSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputEditor"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputEditorSettings(UEnhancedInputEditorSettings&&); \
	UEnhancedInputEditorSettings(const UEnhancedInputEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputEditorSettings) \
	NO_API virtual ~UEnhancedInputEditorSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_36_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTEDITOR_API UClass* StaticClass<class UEnhancedInputEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
