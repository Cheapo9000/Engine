// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_ProxyAsset.h"

#ifdef PROXYTABLEEDITOR_AssetDefinition_ProxyAsset_generated_h
#error "AssetDefinition_ProxyAsset.generated.h already included, missing '#pragma once' in AssetDefinition_ProxyAsset.h"
#endif
#define PROXYTABLEEDITOR_AssetDefinition_ProxyAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_ProxyAsset **********************************************
struct Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics;
PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ProxyAsset_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_ProxyAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_ProxyAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLEEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_ProxyAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_ProxyAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTableEditor"), Z_Construct_UClass_UAssetDefinition_ProxyAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_ProxyAsset)


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_ProxyAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_ProxyAsset(UAssetDefinition_ProxyAsset&&) = delete; \
	UAssetDefinition_ProxyAsset(const UAssetDefinition_ProxyAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_ProxyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_ProxyAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_ProxyAsset) \
	NO_API virtual ~UAssetDefinition_ProxyAsset();


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_10_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_ProxyAsset;

// ********** End Class UAssetDefinition_ProxyAsset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_AssetDefinition_ProxyAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
