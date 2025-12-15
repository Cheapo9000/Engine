// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrashReporterSettings.h"

#ifdef UNREALED_CrashReporterSettings_generated_h
#error "CrashReporterSettings.generated.h already included, missing '#pragma once' in CrashReporterSettings.h"
#endif
#define UNREALED_CrashReporterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCrashReporterSettings ***************************************************
struct Z_Construct_UClass_UCrashReporterSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCrashReporterSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCrashReporterSettings(); \
	friend struct ::Z_Construct_UClass_UCrashReporterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCrashReporterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrashReporterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCrashReporterSettings_NoRegister) \
	DECLARE_SERIALIZER(UCrashReporterSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCrashReporterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashReporterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCrashReporterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashReporterSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrashReporterSettings(UCrashReporterSettings&&) = delete; \
	UCrashReporterSettings(const UCrashReporterSettings&) = delete; \
	UNREALED_API virtual ~UCrashReporterSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrashReporterSettings;

// ********** End Class UCrashReporterSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
