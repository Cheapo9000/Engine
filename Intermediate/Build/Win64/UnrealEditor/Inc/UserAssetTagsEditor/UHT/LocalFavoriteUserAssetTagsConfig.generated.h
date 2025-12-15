// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Config/LocalFavoriteUserAssetTagsConfig.h"

#ifdef USERASSETTAGSEDITOR_LocalFavoriteUserAssetTagsConfig_generated_h
#error "LocalFavoriteUserAssetTagsConfig.generated.h already included, missing '#pragma once' in LocalFavoriteUserAssetTagsConfig.h"
#endif
#define USERASSETTAGSEDITOR_LocalFavoriteUserAssetTagsConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerTypeFavoriteUserAssetTags *************************************
struct Z_Construct_UScriptStruct_FPerTypeFavoriteUserAssetTags_Statics;
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerTypeFavoriteUserAssetTags_Statics; \
	USERASSETTAGSEDITOR_API static class UScriptStruct* StaticStruct();


struct FPerTypeFavoriteUserAssetTags;
// ********** End ScriptStruct FPerTypeFavoriteUserAssetTags ***************************************

// ********** Begin Class ULocalFavoriteUserAssetTagsConfig ****************************************
struct Z_Construct_UClass_ULocalFavoriteUserAssetTagsConfig_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_ULocalFavoriteUserAssetTagsConfig_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalFavoriteUserAssetTagsConfig(); \
	friend struct ::Z_Construct_UClass_ULocalFavoriteUserAssetTagsConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_ULocalFavoriteUserAssetTagsConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalFavoriteUserAssetTagsConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_ULocalFavoriteUserAssetTagsConfig_NoRegister) \
	DECLARE_SERIALIZER(ULocalFavoriteUserAssetTagsConfig)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFavoriteUserAssetTagsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalFavoriteUserAssetTagsConfig(ULocalFavoriteUserAssetTagsConfig&&) = delete; \
	ULocalFavoriteUserAssetTagsConfig(const ULocalFavoriteUserAssetTagsConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFavoriteUserAssetTagsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFavoriteUserAssetTagsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFavoriteUserAssetTagsConfig) \
	NO_API virtual ~ULocalFavoriteUserAssetTagsConfig();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_20_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalFavoriteUserAssetTagsConfig;

// ********** End Class ULocalFavoriteUserAssetTagsConfig ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_Config_LocalFavoriteUserAssetTagsConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
