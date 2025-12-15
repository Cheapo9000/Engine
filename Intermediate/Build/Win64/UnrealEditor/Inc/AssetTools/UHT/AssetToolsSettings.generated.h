// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetToolsSettings.h"

#ifdef ASSETTOOLS_AssetToolsSettings_generated_h
#error "AssetToolsSettings.generated.h already included, missing '#pragma once' in AssetToolsSettings.h"
#endif
#define ASSETTOOLS_AssetToolsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAdvancedCopyMap **************************************************
struct Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics;
#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


struct FAdvancedCopyMap;
// ********** End ScriptStruct FAdvancedCopyMap ****************************************************

// ********** Begin Class UAssetToolsSettings ******************************************************
struct Z_Construct_UClass_UAssetToolsSettings_Statics;
ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsSettings_NoRegister();

#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsSettings(); \
	friend struct ::Z_Construct_UClass_UAssetToolsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETTOOLS_API UClass* ::Z_Construct_UClass_UAssetToolsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetTools"), Z_Construct_UClass_UAssetToolsSettings_NoRegister) \
	DECLARE_SERIALIZER(UAssetToolsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetToolsSettings(UAssetToolsSettings&&) = delete; \
	UAssetToolsSettings(const UAssetToolsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetToolsSettings) \
	ASSETTOOLS_API virtual ~UAssetToolsSettings();


#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_27_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetToolsSettings;

// ********** End Class UAssetToolsSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
