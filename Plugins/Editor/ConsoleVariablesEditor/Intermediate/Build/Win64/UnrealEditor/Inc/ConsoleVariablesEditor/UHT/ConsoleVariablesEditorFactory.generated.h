// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ConsoleVariablesEditorFactory.h"

#ifdef CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFactory_generated_h
#error "ConsoleVariablesEditorFactory.generated.h already included, missing '#pragma once' in ConsoleVariablesEditorFactory.h"
#endif
#define CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConsoleVariablesEditorFactory *******************************************
struct Z_Construct_UClass_UConsoleVariablesEditorFactory_Statics;
CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorFactory_NoRegister();

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorFactory(); \
	friend struct ::Z_Construct_UClass_UConsoleVariablesEditorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSOLEVARIABLESEDITOR_API UClass* ::Z_Construct_UClass_UConsoleVariablesEditorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsoleVariablesEditorFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), Z_Construct_UClass_UConsoleVariablesEditorFactory_NoRegister) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorFactory)


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsoleVariablesEditorFactory(UConsoleVariablesEditorFactory&&) = delete; \
	UConsoleVariablesEditorFactory(const UConsoleVariablesEditorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSOLEVARIABLESEDITOR_API, UConsoleVariablesEditorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConsoleVariablesEditorFactory) \
	CONSOLEVARIABLESEDITOR_API virtual ~UConsoleVariablesEditorFactory();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_10_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsoleVariablesEditorFactory;

// ********** End Class UConsoleVariablesEditorFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_Factories_ConsoleVariablesEditorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
