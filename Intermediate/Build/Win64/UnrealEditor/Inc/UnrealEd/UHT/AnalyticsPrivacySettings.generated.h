// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Analytics/AnalyticsPrivacySettings.h"

#ifdef UNREALED_AnalyticsPrivacySettings_generated_h
#error "AnalyticsPrivacySettings.generated.h already included, missing '#pragma once' in AnalyticsPrivacySettings.h"
#endif
#define UNREALED_AnalyticsPrivacySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnalyticsPrivacySettings ************************************************
struct Z_Construct_UClass_UAnalyticsPrivacySettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsPrivacySettings(); \
	friend struct ::Z_Construct_UClass_UAnalyticsPrivacySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalyticsPrivacySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister) \
	DECLARE_SERIALIZER(UAnalyticsPrivacySettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAnalyticsPrivacySettings*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnalyticsPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnalyticsPrivacySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsPrivacySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalyticsPrivacySettings(UAnalyticsPrivacySettings&&) = delete; \
	UAnalyticsPrivacySettings(const UAnalyticsPrivacySettings&) = delete; \
	UNREALED_API virtual ~UAnalyticsPrivacySettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalyticsPrivacySettings;

// ********** End Class UAnalyticsPrivacySettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
