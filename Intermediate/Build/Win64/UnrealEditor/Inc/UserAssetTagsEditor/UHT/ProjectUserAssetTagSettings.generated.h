// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ProjectUserAssetTagSettings.h"

#ifdef USERASSETTAGSEDITOR_ProjectUserAssetTagSettings_generated_h
#error "ProjectUserAssetTagSettings.generated.h already included, missing '#pragma once' in ProjectUserAssetTagSettings.h"
#endif
#define USERASSETTAGSEDITOR_ProjectUserAssetTagSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProjectUserAssetTagSettings *********************************************
struct Z_Construct_UClass_UProjectUserAssetTagSettings_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UProjectUserAssetTagSettings_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectUserAssetTagSettings(); \
	friend struct ::Z_Construct_UClass_UProjectUserAssetTagSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UProjectUserAssetTagSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectUserAssetTagSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UProjectUserAssetTagSettings_NoRegister) \
	DECLARE_SERIALIZER(UProjectUserAssetTagSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USERASSETTAGSEDITOR_API UProjectUserAssetTagSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectUserAssetTagSettings(UProjectUserAssetTagSettings&&) = delete; \
	UProjectUserAssetTagSettings(const UProjectUserAssetTagSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USERASSETTAGSEDITOR_API, UProjectUserAssetTagSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectUserAssetTagSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectUserAssetTagSettings) \
	USERASSETTAGSEDITOR_API virtual ~UProjectUserAssetTagSettings();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_13_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectUserAssetTagSettings;

// ********** End Class UProjectUserAssetTagSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Private_Settings_ProjectUserAssetTagSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
