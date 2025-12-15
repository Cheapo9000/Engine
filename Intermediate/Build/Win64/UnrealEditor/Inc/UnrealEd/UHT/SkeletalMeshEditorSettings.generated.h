// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SkeletalMeshEditorSettings.h"

#ifdef UNREALED_SkeletalMeshEditorSettings_generated_h
#error "SkeletalMeshEditorSettings.generated.h already included, missing '#pragma once' in SkeletalMeshEditorSettings.h"
#endif
#define UNREALED_SkeletalMeshEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshEditorSettings **********************************************
struct Z_Construct_UClass_USkeletalMeshEditorSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorSettings(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletalMeshEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletalMeshEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshEditorSettings(USkeletalMeshEditorSettings&&) = delete; \
	USkeletalMeshEditorSettings(const USkeletalMeshEditorSettings&) = delete; \
	UNREALED_API virtual ~USkeletalMeshEditorSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshEditorSettings;

// ********** End Class USkeletalMeshEditorSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
