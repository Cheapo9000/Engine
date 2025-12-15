// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationTestPlatform.h"

#ifdef AUTOMATIONTEST_AutomationTestPlatform_generated_h
#error "AutomationTestPlatform.generated.h already included, missing '#pragma once' in AutomationTestPlatform.h"
#endif
#define AUTOMATIONTEST_AutomationTestPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomationTestPlatformSettings ******************************************
struct Z_Construct_UClass_UAutomationTestPlatformSettings_Statics;
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister();

#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationTestPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UAutomationTestPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATIONTEST_API UClass* ::Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationTestPlatformSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutomationTest"), Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomationTestPlatformSettings)


#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationTestPlatformSettings(UAutomationTestPlatformSettings&&) = delete; \
	UAutomationTestPlatformSettings(const UAutomationTestPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATIONTEST_API, UAutomationTestPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationTestPlatformSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAutomationTestPlatformSettings) \
	AUTOMATIONTEST_API virtual ~UAutomationTestPlatformSettings();


#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_10_PROLOG
#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationTestPlatformSettings;

// ********** End Class UAutomationTestPlatformSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
