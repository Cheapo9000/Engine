// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserGeneratedContentLocalization.h"

#ifdef LOCALIZATION_UserGeneratedContentLocalization_generated_h
#error "UserGeneratedContentLocalization.generated.h already included, missing '#pragma once' in UserGeneratedContentLocalization.h"
#endif
#define LOCALIZATION_UserGeneratedContentLocalization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserGeneratedContentLocalizationSettings ********************************
struct Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics;
LOCALIZATION_API UClass* Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_NoRegister();

#define FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserGeneratedContentLocalizationSettings(); \
	friend struct ::Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOCALIZATION_API UClass* ::Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserGeneratedContentLocalizationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Localization"), Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UUserGeneratedContentLocalizationSettings)


#define FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOCALIZATION_API UUserGeneratedContentLocalizationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserGeneratedContentLocalizationSettings(UUserGeneratedContentLocalizationSettings&&) = delete; \
	UUserGeneratedContentLocalizationSettings(const UUserGeneratedContentLocalizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOCALIZATION_API, UUserGeneratedContentLocalizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserGeneratedContentLocalizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserGeneratedContentLocalizationSettings) \
	LOCALIZATION_API virtual ~UUserGeneratedContentLocalizationSettings();


#define FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_27_PROLOG
#define FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserGeneratedContentLocalizationSettings;

// ********** End Class UUserGeneratedContentLocalizationSettings **********************************

// ********** Begin ScriptStruct FUserGeneratedContentLocalizationDescriptor ***********************
struct Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics;
#define FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics; \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


struct FUserGeneratedContentLocalizationDescriptor;
// ********** End ScriptStruct FUserGeneratedContentLocalizationDescriptor *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
