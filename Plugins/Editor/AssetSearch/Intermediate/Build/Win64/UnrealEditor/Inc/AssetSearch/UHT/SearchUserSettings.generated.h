// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SearchUserSettings.h"

#ifdef ASSETSEARCH_SearchUserSettings_generated_h
#error "SearchUserSettings.generated.h already included, missing '#pragma once' in SearchUserSettings.h"
#endif
#define ASSETSEARCH_SearchUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSearchPerformance ************************************************
struct Z_Construct_UScriptStruct_FSearchPerformance_Statics;
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSearchPerformance_Statics; \
	ASSETSEARCH_API static class UScriptStruct* StaticStruct();


struct FSearchPerformance;
// ********** End ScriptStruct FSearchPerformance **************************************************

// ********** Begin Class USearchUserSettings ******************************************************
struct Z_Construct_UClass_USearchUserSettings_Statics;
ASSETSEARCH_API UClass* Z_Construct_UClass_USearchUserSettings_NoRegister();

#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSearchUserSettings(); \
	friend struct ::Z_Construct_UClass_USearchUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETSEARCH_API UClass* ::Z_Construct_UClass_USearchUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USearchUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetSearch"), Z_Construct_UClass_USearchUserSettings_NoRegister) \
	DECLARE_SERIALIZER(USearchUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USearchUserSettings(USearchUserSettings&&) = delete; \
	USearchUserSettings(const USearchUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USearchUserSettings) \
	NO_API virtual ~USearchUserSettings();


#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_26_PROLOG
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USearchUserSettings;

// ********** End Class USearchUserSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
