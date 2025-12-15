// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenShotComparisonSettings.h"

#ifdef SCREENSHOTCOMPARISONTOOLS_ScreenShotComparisonSettings_generated_h
#error "ScreenShotComparisonSettings.generated.h already included, missing '#pragma once' in ScreenShotComparisonSettings.h"
#endif
#define SCREENSHOTCOMPARISONTOOLS_ScreenShotComparisonSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FScreenshotFallbackEntry ******************************************
struct Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics;
#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics; \
	SCREENSHOTCOMPARISONTOOLS_API static class UScriptStruct* StaticStruct();


struct FScreenshotFallbackEntry;
// ********** End ScriptStruct FScreenshotFallbackEntry ********************************************

// ********** Begin Class UScreenShotComparisonSettings ********************************************
struct Z_Construct_UClass_UScreenShotComparisonSettings_Statics;
SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister();

#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUScreenShotComparisonSettings(); \
	friend struct ::Z_Construct_UClass_UScreenShotComparisonSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCREENSHOTCOMPARISONTOOLS_API UClass* ::Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UScreenShotComparisonSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScreenShotComparisonTools"), Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister) \
	DECLARE_SERIALIZER(UScreenShotComparisonSettings)


#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCREENSHOTCOMPARISONTOOLS_API UScreenShotComparisonSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenShotComparisonSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCREENSHOTCOMPARISONTOOLS_API, UScreenShotComparisonSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenShotComparisonSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreenShotComparisonSettings(UScreenShotComparisonSettings&&) = delete; \
	UScreenShotComparisonSettings(const UScreenShotComparisonSettings&) = delete; \
	SCREENSHOTCOMPARISONTOOLS_API virtual ~UScreenShotComparisonSettings();


#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_38_PROLOG
#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_41_INCLASS \
	FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreenShotComparisonSettings;

// ********** End Class UScreenShotComparisonSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
