// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SecuritySandboxSettings.h"

#ifdef SECURITYSANDBOX_SecuritySandboxSettings_generated_h
#error "SecuritySandboxSettings.generated.h already included, missing '#pragma once' in SecuritySandboxSettings.h"
#endif
#define SECURITYSANDBOX_SecuritySandboxSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USecuritySandboxSettings *************************************************
struct Z_Construct_UClass_USecuritySandboxSettings_Statics;
SECURITYSANDBOX_API UClass* Z_Construct_UClass_USecuritySandboxSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecuritySandboxSettings(); \
	friend struct ::Z_Construct_UClass_USecuritySandboxSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SECURITYSANDBOX_API UClass* ::Z_Construct_UClass_USecuritySandboxSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USecuritySandboxSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecuritySandbox"), Z_Construct_UClass_USecuritySandboxSettings_NoRegister) \
	DECLARE_SERIALIZER(USecuritySandboxSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USecuritySandboxSettings(USecuritySandboxSettings&&) = delete; \
	USecuritySandboxSettings(const USecuritySandboxSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecuritySandboxSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecuritySandboxSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USecuritySandboxSettings) \
	NO_API virtual ~USecuritySandboxSettings();


#define FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USecuritySandboxSettings;

// ********** End Class USecuritySandboxSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SecuritySandbox_Source_SecuritySandbox_Public_SecuritySandboxSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
