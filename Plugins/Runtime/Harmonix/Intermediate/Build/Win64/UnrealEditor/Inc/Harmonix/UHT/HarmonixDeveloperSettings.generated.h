// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Harmonix/HarmonixDeveloperSettings.h"

#ifdef HARMONIX_HarmonixDeveloperSettings_generated_h
#error "HarmonixDeveloperSettings.generated.h already included, missing '#pragma once' in HarmonixDeveloperSettings.h"
#endif
#define HARMONIX_HarmonixDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHarmonixDeveloperSettings ***********************************************
struct Z_Construct_UClass_UHarmonixDeveloperSettings_Statics;
HARMONIX_API UClass* Z_Construct_UClass_UHarmonixDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UHarmonixDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIX_API UClass* ::Z_Construct_UClass_UHarmonixDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixDeveloperSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Harmonix"), Z_Construct_UClass_UHarmonixDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixDeveloperSettings)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIX_API UHarmonixDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixDeveloperSettings(UHarmonixDeveloperSettings&&) = delete; \
	UHarmonixDeveloperSettings(const UHarmonixDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIX_API, UHarmonixDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixDeveloperSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixDeveloperSettings) \
	HARMONIX_API virtual ~UHarmonixDeveloperSettings();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixDeveloperSettings;

// ********** End Class UHarmonixDeveloperSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
