// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesAsset.h"

#ifdef CONSOLEVARIABLESEDITORRUNTIME_ConsoleVariablesAsset_generated_h
#error "ConsoleVariablesAsset.generated.h already included, missing '#pragma once' in ConsoleVariablesAsset.h"
#endif
#define CONSOLEVARIABLESEDITORRUNTIME_ConsoleVariablesAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleVariablesAsset;
class UObject;
struct FConsoleVariablesEditorAssetSaveData;

// ********** Begin ScriptStruct FConsoleVariablesEditorAssetSaveData ******************************
struct Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics;
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics; \
	CONSOLEVARIABLESEDITORRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConsoleVariablesEditorAssetSaveData;
// ********** End ScriptStruct FConsoleVariablesEditorAssetSaveData ********************************

// ********** Begin Class UConsoleVariablesAsset ***************************************************
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddFrom); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execAddOrSetConsoleObjectSavedData); \
	DECLARE_FUNCTION(execFindSavedDataByCommandString); \
	DECLARE_FUNCTION(execGetSavedCommandsCount); \
	DECLARE_FUNCTION(execReplaceSavedCommands); \
	DECLARE_FUNCTION(execExecuteSavedCommands); \
	DECLARE_FUNCTION(execGetSavedCommandsAsCommaSeparatedString); \
	DECLARE_FUNCTION(execGetSavedCommandsAsStringArray); \
	DECLARE_FUNCTION(execGetSavedCommands); \
	DECLARE_FUNCTION(execGetVariableCollectionDescription); \
	DECLARE_FUNCTION(execSetVariableCollectionDescription);


struct Z_Construct_UClass_UConsoleVariablesAsset_Statics;
CONSOLEVARIABLESEDITORRUNTIME_API UClass* Z_Construct_UClass_UConsoleVariablesAsset_NoRegister();

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesAsset(); \
	friend struct ::Z_Construct_UClass_UConsoleVariablesAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSOLEVARIABLESEDITORRUNTIME_API UClass* ::Z_Construct_UClass_UConsoleVariablesAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsoleVariablesAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditorRuntime"), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister) \
	DECLARE_SERIALIZER(UConsoleVariablesAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UConsoleVariablesAsset*>(this); }


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSOLEVARIABLESEDITORRUNTIME_API UConsoleVariablesAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsoleVariablesAsset(UConsoleVariablesAsset&&) = delete; \
	UConsoleVariablesAsset(const UConsoleVariablesAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSOLEVARIABLESEDITORRUNTIME_API, UConsoleVariablesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesAsset) \
	CONSOLEVARIABLESEDITORRUNTIME_API virtual ~UConsoleVariablesAsset();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_36_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsoleVariablesAsset;

// ********** End Class UConsoleVariablesAsset *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
