// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorMiscSettings.h"

#ifdef UNREALED_LevelEditorMiscSettings_generated_h
#error "LevelEditorMiscSettings.generated.h already included, missing '#pragma once' in LevelEditorMiscSettings.h"
#endif
#define UNREALED_LevelEditorMiscSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelEditorMiscSettings *************************************************
struct Z_Construct_UClass_ULevelEditorMiscSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULevelEditorMiscSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorMiscSettings(); \
	friend struct ::Z_Construct_UClass_ULevelEditorMiscSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULevelEditorMiscSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelEditorMiscSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULevelEditorMiscSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelEditorMiscSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorMiscSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelEditorMiscSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorMiscSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelEditorMiscSettings(ULevelEditorMiscSettings&&) = delete; \
	ULevelEditorMiscSettings(const ULevelEditorMiscSettings&) = delete; \
	UNREALED_API virtual ~ULevelEditorMiscSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelEditorMiscSettings;

// ********** End Class ULevelEditorMiscSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
