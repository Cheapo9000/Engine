// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilities/EditorPythonScriptingLibrary.h"

#ifdef PYTHONSCRIPTPLUGIN_EditorPythonScriptingLibrary_generated_h
#error "EditorPythonScriptingLibrary.generated.h already included, missing '#pragma once' in EditorPythonScriptingLibrary.h"
#endif
#define PYTHONSCRIPTPLUGIN_EditorPythonScriptingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorPythonScriptingLibrary ********************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetKeepPythonScriptAlive); \
	DECLARE_FUNCTION(execSetKeepPythonScriptAlive);


struct Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UEditorPythonScriptingLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorPythonScriptingLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UEditorPythonScriptingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorPythonScriptingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UEditorPythonScriptingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorPythonScriptingLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorPythonScriptingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorPythonScriptingLibrary(UEditorPythonScriptingLibrary&&) = delete; \
	UEditorPythonScriptingLibrary(const UEditorPythonScriptingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorPythonScriptingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPythonScriptingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPythonScriptingLibrary) \
	NO_API virtual ~UEditorPythonScriptingLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorPythonScriptingLibrary;

// ********** End Class UEditorPythonScriptingLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_EditorUtilities_EditorPythonScriptingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
