// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesEditorProjectSettings.h"

#ifdef CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorProjectSettings_generated_h
#error "ConsoleVariablesEditorProjectSettings.generated.h already included, missing '#pragma once' in ConsoleVariablesEditorProjectSettings.h"
#endif
#define CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConsoleVariablesEditorProjectSettings ***********************************
struct Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics;
CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_NoRegister();

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSOLEVARIABLESEDITOR_API UClass* ::Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsoleVariablesEditorProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorProjectSettings)


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsoleVariablesEditorProjectSettings(UConsoleVariablesEditorProjectSettings&&) = delete; \
	UConsoleVariablesEditorProjectSettings(const UConsoleVariablesEditorProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSOLEVARIABLESEDITOR_API, UConsoleVariablesEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesEditorProjectSettings) \
	CONSOLEVARIABLESEDITOR_API virtual ~UConsoleVariablesEditorProjectSettings();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_35_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsoleVariablesEditorProjectSettings;

// ********** End Class UConsoleVariablesEditorProjectSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h

// ********** Begin Enum EConsoleVariablesEditorRowDisplayType *************************************
#define FOREACH_ENUM_ECONSOLEVARIABLESEDITORROWDISPLAYTYPE(op) \
	op(EConsoleVariablesEditorRowDisplayType::ShowCurrentValue) \
	op(EConsoleVariablesEditorRowDisplayType::ShowLastEnteredValue) 

enum class EConsoleVariablesEditorRowDisplayType : uint8;
template<> struct TIsUEnumClass<EConsoleVariablesEditorRowDisplayType> { enum { Value = true }; };
template<> CONSOLEVARIABLESEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EConsoleVariablesEditorRowDisplayType>();
// ********** End Enum EConsoleVariablesEditorRowDisplayType ***************************************

// ********** Begin Enum EConsoleVariablesEditorPresetImportMode ***********************************
#define FOREACH_ENUM_ECONSOLEVARIABLESEDITORPRESETIMPORTMODE(op) \
	op(EConsoleVariablesEditorPresetImportMode::AddToExisting) \
	op(EConsoleVariablesEditorPresetImportMode::ReplaceExisting) \
	op(EConsoleVariablesEditorPresetImportMode::UseDefault) 

enum class EConsoleVariablesEditorPresetImportMode : uint8;
template<> struct TIsUEnumClass<EConsoleVariablesEditorPresetImportMode> { enum { Value = true }; };
template<> CONSOLEVARIABLESEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EConsoleVariablesEditorPresetImportMode>();
// ********** End Enum EConsoleVariablesEditorPresetImportMode *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
