// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XcodeProjectSettings.h"

#ifdef MACTARGETPLATFORMSETTINGS_XcodeProjectSettings_generated_h
#error "XcodeProjectSettings.generated.h already included, missing '#pragma once' in XcodeProjectSettings.h"
#endif
#define MACTARGETPLATFORMSETTINGS_XcodeProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UXcodeProjectSettings ****************************************************
#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShouldDisableIOSSettings);


struct Z_Construct_UClass_UXcodeProjectSettings_Statics;
MACTARGETPLATFORMSETTINGS_API UClass* Z_Construct_UClass_UXcodeProjectSettings_NoRegister();

#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUXcodeProjectSettings(); \
	friend struct ::Z_Construct_UClass_UXcodeProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MACTARGETPLATFORMSETTINGS_API UClass* ::Z_Construct_UClass_UXcodeProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UXcodeProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MacTargetPlatformSettings"), Z_Construct_UClass_UXcodeProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UXcodeProjectSettings)


#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXcodeProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXcodeProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXcodeProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXcodeProjectSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXcodeProjectSettings(UXcodeProjectSettings&&) = delete; \
	UXcodeProjectSettings(const UXcodeProjectSettings&) = delete; \
	NO_API virtual ~UXcodeProjectSettings();


#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_16_PROLOG
#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_INCLASS \
	FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXcodeProjectSettings;

// ********** End Class UXcodeProjectSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_XcodeProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
