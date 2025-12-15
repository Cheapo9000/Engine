// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserConfig.h"

#ifdef CONTENTBROWSER_ContentBrowserConfig_generated_h
#error "ContentBrowserConfig.generated.h already included, missing '#pragma once' in ContentBrowserConfig.h"
#endif
#define CONTENTBROWSER_ContentBrowserConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPathViewConfig ***************************************************
struct Z_Construct_UScriptStruct_FPathViewConfig_Statics;
#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPathViewConfig_Statics; \
	CONTENTBROWSER_API static class UScriptStruct* StaticStruct();


struct FPathViewConfig;
// ********** End ScriptStruct FPathViewConfig *****************************************************

// ********** Begin ScriptStruct FContentBrowserInstanceConfig *************************************
struct Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics;
#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics; \
	CONTENTBROWSER_API static class UScriptStruct* StaticStruct();


struct FContentBrowserInstanceConfig;
// ********** End ScriptStruct FContentBrowserInstanceConfig ***************************************

// ********** Begin Class UContentBrowserConfig ****************************************************
struct Z_Construct_UClass_UContentBrowserConfig_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserConfig_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserConfig(); \
	friend struct ::Z_Construct_UClass_UContentBrowserConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UContentBrowserConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UContentBrowserConfig_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserConfig)


#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserConfig(UContentBrowserConfig&&) = delete; \
	UContentBrowserConfig(const UContentBrowserConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserConfig) \
	NO_API virtual ~UContentBrowserConfig();


#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_79_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserConfig;

// ********** End Class UContentBrowserConfig ******************************************************

// ********** Begin Class UContentBrowserCollectionProjectSettings *********************************
struct Z_Construct_UClass_UContentBrowserCollectionProjectSettings_Statics;
CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserCollectionProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserCollectionProjectSettings(); \
	friend struct ::Z_Construct_UClass_UContentBrowserCollectionProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSER_API UClass* ::Z_Construct_UClass_UContentBrowserCollectionProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserCollectionProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContentBrowser"), Z_Construct_UClass_UContentBrowserCollectionProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserCollectionProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTENTBROWSER_API UContentBrowserCollectionProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserCollectionProjectSettings(UContentBrowserCollectionProjectSettings&&) = delete; \
	UContentBrowserCollectionProjectSettings(const UContentBrowserCollectionProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSER_API, UContentBrowserCollectionProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserCollectionProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserCollectionProjectSettings) \
	CONTENTBROWSER_API virtual ~UContentBrowserCollectionProjectSettings();


#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_99_PROLOG
#define FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserCollectionProjectSettings;

// ********** End Class UContentBrowserCollectionProjectSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
