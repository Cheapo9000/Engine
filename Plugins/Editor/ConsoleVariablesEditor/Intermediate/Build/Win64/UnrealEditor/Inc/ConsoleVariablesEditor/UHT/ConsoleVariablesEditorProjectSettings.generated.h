// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesEditorProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorProjectSettings_generated_h
#error "ConsoleVariablesEditorProjectSettings.generated.h already included, missing '#pragma once' in ConsoleVariablesEditorProjectSettings.h"
#endif
#define CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorProjectSettings_generated_h

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UConsoleVariablesEditorProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), NO_API) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConsoleVariablesEditorProjectSettings(UConsoleVariablesEditorProjectSettings&&); \
	UConsoleVariablesEditorProjectSettings(const UConsoleVariablesEditorProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleVariablesEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesEditorProjectSettings) \
	NO_API virtual ~UConsoleVariablesEditorProjectSettings();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_35_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<class UConsoleVariablesEditorProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h


#define FOREACH_ENUM_ECONSOLEVARIABLESEDITORROWDISPLAYTYPE(op) \
	op(EConsoleVariablesEditorRowDisplayType::ShowCurrentValue) \
	op(EConsoleVariablesEditorRowDisplayType::ShowLastEnteredValue) 

enum class EConsoleVariablesEditorRowDisplayType : uint8;
template<> struct TIsUEnumClass<EConsoleVariablesEditorRowDisplayType> { enum { Value = true }; };
template<> CONSOLEVARIABLESEDITOR_API UEnum* StaticEnum<EConsoleVariablesEditorRowDisplayType>();

#define FOREACH_ENUM_ECONSOLEVARIABLESEDITORPRESETIMPORTMODE(op) \
	op(EConsoleVariablesEditorPresetImportMode::AddToExisting) \
	op(EConsoleVariablesEditorPresetImportMode::ReplaceExisting) \
	op(EConsoleVariablesEditorPresetImportMode::UseDefault) 

enum class EConsoleVariablesEditorPresetImportMode : uint8;
template<> struct TIsUEnumClass<EConsoleVariablesEditorPresetImportMode> { enum { Value = true }; };
template<> CONSOLEVARIABLESEDITOR_API UEnum* StaticEnum<EConsoleVariablesEditorPresetImportMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
