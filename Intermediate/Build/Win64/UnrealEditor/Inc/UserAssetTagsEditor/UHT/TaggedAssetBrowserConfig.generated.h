// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Config/TaggedAssetBrowserConfig.h"

#ifdef USERASSETTAGSEDITOR_TaggedAssetBrowserConfig_generated_h
#error "TaggedAssetBrowserConfig.generated.h already included, missing '#pragma once' in TaggedAssetBrowserConfig.h"
#endif
#define USERASSETTAGSEDITOR_TaggedAssetBrowserConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerTaggedAssetBrowserSavedState **********************************
struct Z_Construct_UScriptStruct_FPerTaggedAssetBrowserSavedState_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerTaggedAssetBrowserSavedState_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct();


struct FPerTaggedAssetBrowserSavedState;
// ********** End ScriptStruct FPerTaggedAssetBrowserSavedState ************************************

// ********** Begin Class UTaggedAssetBrowserConfig ************************************************
struct Z_Construct_UClass_UTaggedAssetBrowserConfig_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UTaggedAssetBrowserConfig_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaggedAssetBrowserConfig(); \
	friend struct ::Z_Construct_UClass_UTaggedAssetBrowserConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UTaggedAssetBrowserConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaggedAssetBrowserConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UTaggedAssetBrowserConfig_NoRegister) \
	DECLARE_SERIALIZER(UTaggedAssetBrowserConfig)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaggedAssetBrowserConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaggedAssetBrowserConfig(UTaggedAssetBrowserConfig&&) = delete; \
	UTaggedAssetBrowserConfig(const UTaggedAssetBrowserConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaggedAssetBrowserConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaggedAssetBrowserConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaggedAssetBrowserConfig) \
	NO_API virtual ~UTaggedAssetBrowserConfig();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_18_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaggedAssetBrowserConfig;

// ********** End Class UTaggedAssetBrowserConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_TaggedAssetBrowserConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
