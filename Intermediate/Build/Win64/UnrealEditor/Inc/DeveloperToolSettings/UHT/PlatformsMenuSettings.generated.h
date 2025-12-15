// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/PlatformsMenuSettings.h"

#ifdef DEVELOPERTOOLSETTINGS_PlatformsMenuSettings_generated_h
#error "PlatformsMenuSettings.generated.h already included, missing '#pragma once' in PlatformsMenuSettings.h"
#endif
#define DEVELOPERTOOLSETTINGS_PlatformsMenuSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlatformsMenuSettings ***************************************************
struct Z_Construct_UClass_UPlatformsMenuSettings_Statics;
DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UPlatformsMenuSettings_NoRegister();

#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformsMenuSettings(); \
	friend struct ::Z_Construct_UClass_UPlatformsMenuSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEVELOPERTOOLSETTINGS_API UClass* ::Z_Construct_UClass_UPlatformsMenuSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformsMenuSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), Z_Construct_UClass_UPlatformsMenuSettings_NoRegister) \
	DECLARE_SERIALIZER(UPlatformsMenuSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEVELOPERTOOLSETTINGS_API UPlatformsMenuSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformsMenuSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERTOOLSETTINGS_API, UPlatformsMenuSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformsMenuSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformsMenuSettings(UPlatformsMenuSettings&&) = delete; \
	UPlatformsMenuSettings(const UPlatformsMenuSettings&) = delete; \
	DEVELOPERTOOLSETTINGS_API virtual ~UPlatformsMenuSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_22_PROLOG
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_26_INCLASS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformsMenuSettings;

// ********** End Class UPlatformsMenuSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
