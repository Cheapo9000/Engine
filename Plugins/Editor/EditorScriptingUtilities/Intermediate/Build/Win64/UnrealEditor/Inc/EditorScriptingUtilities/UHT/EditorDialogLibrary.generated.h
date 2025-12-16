// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorDialogLibrary.h"

#ifdef EDITORSCRIPTINGUTILITIES_EditorDialogLibrary_generated_h
#error "EditorDialogLibrary.generated.h already included, missing '#pragma once' in EditorDialogLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorDialogLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAppMsgCategory : uint8;
struct FEditorDialogLibraryObjectDetailsViewOptions;

// ********** Begin ScriptStruct FEditorDialogLibraryObjectDetailsViewOptions **********************
struct Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics;
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


struct FEditorDialogLibraryObjectDetailsViewOptions;
// ********** End ScriptStruct FEditorDialogLibraryObjectDetailsViewOptions ************************

// ********** Begin Class UEditorDialogLibrary *****************************************************
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowObjectsDetailsView); \
	DECLARE_FUNCTION(execShowObjectDetailsView); \
	DECLARE_FUNCTION(execShowSuppressableWarningDialog); \
	DECLARE_FUNCTION(execShowMessage);


struct Z_Construct_UClass_UEditorDialogLibrary_Statics;
EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorDialogLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDialogLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorDialogLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSCRIPTINGUTILITIES_API UClass* ::Z_Construct_UClass_UEditorDialogLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorDialogLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), Z_Construct_UClass_UEditorDialogLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorDialogLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORSCRIPTINGUTILITIES_API UEditorDialogLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorDialogLibrary(UEditorDialogLibrary&&) = delete; \
	UEditorDialogLibrary(const UEditorDialogLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSCRIPTINGUTILITIES_API, UEditorDialogLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDialogLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDialogLibrary) \
	EDITORSCRIPTINGUTILITIES_API virtual ~UEditorDialogLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_42_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorDialogLibrary;

// ********** End Class UEditorDialogLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
