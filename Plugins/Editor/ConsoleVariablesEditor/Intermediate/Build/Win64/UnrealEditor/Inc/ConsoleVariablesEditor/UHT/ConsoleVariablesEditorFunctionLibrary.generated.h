// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesEditorFunctionLibrary.h"

#ifdef CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFunctionLibrary_generated_h
#error "ConsoleVariablesEditorFunctionLibrary.generated.h already included, missing '#pragma once' in ConsoleVariablesEditorFunctionLibrary.h"
#endif
#define CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleVariablesAsset;
enum class EConsoleVariablesEditorPresetImportMode : uint8;

// ********** Begin Class UConsoleVariablesEditorFunctionLibrary ***********************************
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetConsoleVariableSourceByName); \
	DECLARE_FUNCTION(execGetConsoleVariableStringValue); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_String); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Int); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Bool); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Float); \
	DECLARE_FUNCTION(execGetListOfCommandsFromPreset); \
	DECLARE_FUNCTION(execRemoveCommandFromCurrentPreset); \
	DECLARE_FUNCTION(execAddValidatedCommandToCurrentPreset); \
	DECLARE_FUNCTION(execCopyCurrentListToAsset); \
	DECLARE_FUNCTION(execLoadPresetIntoConsoleVariablesEditor); \
	DECLARE_FUNCTION(execGetCurrentlyLoadedPreset);


struct Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics;
CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSOLEVARIABLESEDITOR_API UClass* ::Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsoleVariablesEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorFunctionLibrary)


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSOLEVARIABLESEDITOR_API UConsoleVariablesEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsoleVariablesEditorFunctionLibrary(UConsoleVariablesEditorFunctionLibrary&&) = delete; \
	UConsoleVariablesEditorFunctionLibrary(const UConsoleVariablesEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSOLEVARIABLESEDITOR_API, UConsoleVariablesEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesEditorFunctionLibrary) \
	CONSOLEVARIABLESEDITOR_API virtual ~UConsoleVariablesEditorFunctionLibrary();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsoleVariablesEditorFunctionLibrary;

// ********** End Class UConsoleVariablesEditorFunctionLibrary *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
