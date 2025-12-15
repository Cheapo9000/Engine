// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlatformSettings.h"

#ifdef DEVELOPERSETTINGS_PlatformSettings_generated_h
#error "PlatformSettings.generated.h already included, missing '#pragma once' in PlatformSettings.h"
#endif
#define DEVELOPERSETTINGS_PlatformSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerPlatformSettings **********************************************
struct Z_Construct_UScriptStruct_FPerPlatformSettings_Statics;
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerPlatformSettings_Statics; \
	DEVELOPERSETTINGS_API static class UScriptStruct* StaticStruct();


struct FPerPlatformSettings;
// ********** End ScriptStruct FPerPlatformSettings ************************************************

// ********** Begin Class UPlatformSettings ********************************************************
struct Z_Construct_UClass_UPlatformSettings_Statics;
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings_NoRegister();

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEVELOPERSETTINGS_API UClass* ::Z_Construct_UClass_UPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), Z_Construct_UClass_UPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UPlatformSettings)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformSettings(UPlatformSettings&&) = delete; \
	UPlatformSettings(const UPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERSETTINGS_API, UPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformSettings) \
	DEVELOPERSETTINGS_API virtual ~UPlatformSettings();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_57_PROLOG
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformSettings;

// ********** End Class UPlatformSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
