// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldBrowserConfig.h"

#ifdef WORLDBROWSER_WorldBrowserConfig_generated_h
#error "WorldBrowserConfig.generated.h already included, missing '#pragma once' in WorldBrowserConfig.h"
#endif
#define WORLDBROWSER_WorldBrowserConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldBrowserColumnConfig *****************************************
struct Z_Construct_UScriptStruct_FWorldBrowserColumnConfig_Statics;
#define FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldBrowserColumnConfig_Statics; \
	WORLDBROWSER_API static class UScriptStruct* StaticStruct();


struct FWorldBrowserColumnConfig;
// ********** End ScriptStruct FWorldBrowserColumnConfig *******************************************

// ********** Begin Class UWorldBrowserConfig ******************************************************
struct Z_Construct_UClass_UWorldBrowserConfig_Statics;
WORLDBROWSER_API UClass* Z_Construct_UClass_UWorldBrowserConfig_NoRegister();

#define FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldBrowserConfig(); \
	friend struct ::Z_Construct_UClass_UWorldBrowserConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBROWSER_API UClass* ::Z_Construct_UClass_UWorldBrowserConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldBrowserConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldBrowser"), Z_Construct_UClass_UWorldBrowserConfig_NoRegister) \
	DECLARE_SERIALIZER(UWorldBrowserConfig)


#define FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldBrowserConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldBrowserConfig(UWorldBrowserConfig&&) = delete; \
	UWorldBrowserConfig(const UWorldBrowserConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldBrowserConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldBrowserConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldBrowserConfig) \
	NO_API virtual ~UWorldBrowserConfig();


#define FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_26_PROLOG
#define FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldBrowserConfig;

// ********** End Class UWorldBrowserConfig ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBrowser_Private_WorldBrowserConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
