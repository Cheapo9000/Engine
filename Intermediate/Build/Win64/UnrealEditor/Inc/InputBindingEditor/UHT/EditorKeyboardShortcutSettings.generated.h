// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorKeyboardShortcutSettings.h"

#ifdef INPUTBINDINGEDITOR_EditorKeyboardShortcutSettings_generated_h
#error "EditorKeyboardShortcutSettings.generated.h already included, missing '#pragma once' in EditorKeyboardShortcutSettings.h"
#endif
#define INPUTBINDINGEDITOR_EditorKeyboardShortcutSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorKeyboardShortcutSettings ******************************************
struct Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics;
INPUTBINDINGEDITOR_API UClass* Z_Construct_UClass_UEditorKeyboardShortcutSettings_NoRegister();

#define FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorKeyboardShortcutSettings(); \
	friend struct ::Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTBINDINGEDITOR_API UClass* ::Z_Construct_UClass_UEditorKeyboardShortcutSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorKeyboardShortcutSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputBindingEditor"), Z_Construct_UClass_UEditorKeyboardShortcutSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorKeyboardShortcutSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorKeyBindings");} \



#define FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorKeyboardShortcutSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorKeyboardShortcutSettings(UEditorKeyboardShortcutSettings&&) = delete; \
	UEditorKeyboardShortcutSettings(const UEditorKeyboardShortcutSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorKeyboardShortcutSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorKeyboardShortcutSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorKeyboardShortcutSettings) \
	NO_API virtual ~UEditorKeyboardShortcutSettings();


#define FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_10_PROLOG
#define FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorKeyboardShortcutSettings;

// ********** End Class UEditorKeyboardShortcutSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
