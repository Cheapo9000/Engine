// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Analytics/CrashReportsPrivacySettings.h"

#ifdef UNREALED_CrashReportsPrivacySettings_generated_h
#error "CrashReportsPrivacySettings.generated.h already included, missing '#pragma once' in CrashReportsPrivacySettings.h"
#endif
#define UNREALED_CrashReportsPrivacySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCrashReportsPrivacySettings *********************************************
struct Z_Construct_UClass_UCrashReportsPrivacySettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCrashReportsPrivacySettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCrashReportsPrivacySettings(); \
	friend struct ::Z_Construct_UClass_UCrashReportsPrivacySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCrashReportsPrivacySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrashReportsPrivacySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCrashReportsPrivacySettings_NoRegister) \
	DECLARE_SERIALIZER(UCrashReportsPrivacySettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCrashReportsPrivacySettings*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCrashReportsPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashReportsPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCrashReportsPrivacySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashReportsPrivacySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrashReportsPrivacySettings(UCrashReportsPrivacySettings&&) = delete; \
	UCrashReportsPrivacySettings(const UCrashReportsPrivacySettings&) = delete; \
	UNREALED_API virtual ~UCrashReportsPrivacySettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrashReportsPrivacySettings;

// ********** End Class UCrashReportsPrivacySettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
