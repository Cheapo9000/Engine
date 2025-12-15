// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Config/UserAssetTagsEditorConfig.h"

#ifdef USERASSETTAGSEDITOR_UserAssetTagsEditorConfig_generated_h
#error "UserAssetTagsEditorConfig.generated.h already included, missing '#pragma once' in UserAssetTagsEditorConfig.h"
#endif
#define USERASSETTAGSEDITOR_UserAssetTagsEditorConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerUserAssetTagProviderViewOptions *******************************
struct Z_Construct_UScriptStruct_FPerUserAssetTagProviderViewOptions_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerUserAssetTagProviderViewOptions_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct();


struct FPerUserAssetTagProviderViewOptions;
// ********** End ScriptStruct FPerUserAssetTagProviderViewOptions *********************************

// ********** Begin ScriptStruct FUserAssetTagProviderViewOptions **********************************
struct Z_Construct_UScriptStruct_FUserAssetTagProviderViewOptions_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUserAssetTagProviderViewOptions_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct();


struct FUserAssetTagProviderViewOptions;
// ********** End ScriptStruct FUserAssetTagProviderViewOptions ************************************

// ********** Begin Class UUserAssetTagsEditorConfig ***********************************************
struct Z_Construct_UClass_UUserAssetTagsEditorConfig_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UUserAssetTagsEditorConfig_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserAssetTagsEditorConfig(); \
	friend struct ::Z_Construct_UClass_UUserAssetTagsEditorConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UUserAssetTagsEditorConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserAssetTagsEditorConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UUserAssetTagsEditorConfig_NoRegister) \
	DECLARE_SERIALIZER(UUserAssetTagsEditorConfig)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserAssetTagsEditorConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserAssetTagsEditorConfig(UUserAssetTagsEditorConfig&&) = delete; \
	UUserAssetTagsEditorConfig(const UUserAssetTagsEditorConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserAssetTagsEditorConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserAssetTagsEditorConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserAssetTagsEditorConfig) \
	NO_API virtual ~UUserAssetTagsEditorConfig();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_35_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserAssetTagsEditorConfig;

// ********** End Class UUserAssetTagsEditorConfig *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_UserAssetTagsEditorConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
