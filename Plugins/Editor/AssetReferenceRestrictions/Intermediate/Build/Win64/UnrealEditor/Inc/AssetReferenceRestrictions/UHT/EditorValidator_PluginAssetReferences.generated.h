// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidator_PluginAssetReferences.h"

#ifdef ASSETREFERENCERESTRICTIONS_EditorValidator_PluginAssetReferences_generated_h
#error "EditorValidator_PluginAssetReferences.generated.h already included, missing '#pragma once' in EditorValidator_PluginAssetReferences.h"
#endif
#define ASSETREFERENCERESTRICTIONS_EditorValidator_PluginAssetReferences_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorValidator_PluginAssetReferences ***********************************
struct Z_Construct_UClass_UEditorValidator_PluginAssetReferences_Statics;
ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UEditorValidator_PluginAssetReferences_NoRegister();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidator_PluginAssetReferences(); \
	friend struct ::Z_Construct_UClass_UEditorValidator_PluginAssetReferences_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETREFERENCERESTRICTIONS_API UClass* ::Z_Construct_UClass_UEditorValidator_PluginAssetReferences_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorValidator_PluginAssetReferences, UEditorValidatorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetReferenceRestrictions"), Z_Construct_UClass_UEditorValidator_PluginAssetReferences_NoRegister) \
	DECLARE_SERIALIZER(UEditorValidator_PluginAssetReferences)


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorValidator_PluginAssetReferences(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorValidator_PluginAssetReferences(UEditorValidator_PluginAssetReferences&&) = delete; \
	UEditorValidator_PluginAssetReferences(const UEditorValidator_PluginAssetReferences&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidator_PluginAssetReferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidator_PluginAssetReferences); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidator_PluginAssetReferences) \
	NO_API virtual ~UEditorValidator_PluginAssetReferences();


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_9_PROLOG
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorValidator_PluginAssetReferences;

// ********** End Class UEditorValidator_PluginAssetReferences *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_EditorValidator_PluginAssetReferences_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
