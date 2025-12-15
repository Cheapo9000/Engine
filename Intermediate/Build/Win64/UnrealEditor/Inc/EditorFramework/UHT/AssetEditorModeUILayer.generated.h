// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Toolkits/AssetEditorModeUILayer.h"

#ifdef EDITORFRAMEWORK_AssetEditorModeUILayer_generated_h
#error "AssetEditorModeUILayer.generated.h already included, missing '#pragma once' in AssetEditorModeUILayer.h"
#endif
#define EDITORFRAMEWORK_AssetEditorModeUILayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetEditorUISubsystem **************************************************
struct Z_Construct_UClass_UAssetEditorUISubsystem_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditorUISubsystem(); \
	friend struct ::Z_Construct_UClass_UAssetEditorUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UAssetEditorUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetEditorUISubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UAssetEditorUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAssetEditorUISubsystem)


#define FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UAssetEditorUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetEditorUISubsystem(UAssetEditorUISubsystem&&) = delete; \
	UAssetEditorUISubsystem(const UAssetEditorUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UAssetEditorUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetEditorUISubsystem) \
	EDITORFRAMEWORK_API virtual ~UAssetEditorUISubsystem();


#define FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_43_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetEditorUISubsystem;

// ********** End Class UAssetEditorUISubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
