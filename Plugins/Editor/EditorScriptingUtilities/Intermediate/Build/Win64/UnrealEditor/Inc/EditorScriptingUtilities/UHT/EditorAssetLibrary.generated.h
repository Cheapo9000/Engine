// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorAssetLibrary.h"

#ifdef EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h
#error "EditorAssetLibrary.generated.h already included, missing '#pragma once' in EditorAssetLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class UPackage;
struct FAssetData;

// ********** Begin Class UEditorAssetLibrary ******************************************************
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSyncBrowserToObjects); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetProjectRootAssetDirectory); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryHaveAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execGetPackageForObject); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


struct Z_Construct_UClass_UEditorAssetLibrary_Statics;
EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorAssetLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAssetLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorAssetLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSCRIPTINGUTILITIES_API UClass* ::Z_Construct_UClass_UEditorAssetLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), Z_Construct_UClass_UEditorAssetLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorAssetLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORSCRIPTINGUTILITIES_API UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorAssetLibrary(UEditorAssetLibrary&&) = delete; \
	UEditorAssetLibrary(const UEditorAssetLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSCRIPTINGUTILITIES_API, UEditorAssetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetLibrary) \
	EDITORSCRIPTINGUTILITIES_API virtual ~UEditorAssetLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_25_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorAssetLibrary;

// ********** End Class UEditorAssetLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
