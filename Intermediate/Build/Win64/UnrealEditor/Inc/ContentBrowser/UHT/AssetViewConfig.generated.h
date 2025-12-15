// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetView/AssetViewConfig.h"

#ifdef CONTENTBROWSER_AssetViewConfig_generated_h
#error "AssetViewConfig.generated.h already included, missing '#pragma once' in AssetViewConfig.h"
#endif
#define CONTENTBROWSER_AssetViewConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAssetViewInstanceConfig ******************************************
struct Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics;
#define FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics; \
	CONTENTBROWSER_API static class UScriptStruct* StaticStruct();


struct FAssetViewInstanceConfig;
// ********** End ScriptStruct FAssetViewInstanceConfig ********************************************

// ********** Begin Class UAssetViewConfig *********************************************************
struct Z_Construct_UClass_UAssetViewConfig_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UAssetViewConfig_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetViewConfig(); \
	friend struct ::Z_Construct_UClass_UAssetViewConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UAssetViewConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetViewConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UAssetViewConfig_NoRegister) \
	DECLARE_SERIALIZER(UAssetViewConfig)


#define FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSER_API UAssetViewConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetViewConfig(UAssetViewConfig&&) = delete; \
	UAssetViewConfig(const UAssetViewConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSER_API, UAssetViewConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetViewConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetViewConfig) \
	CONTENTBROWSER_API virtual ~UAssetViewConfig();


#define FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_39_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetViewConfig;

// ********** End Class UAssetViewConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
