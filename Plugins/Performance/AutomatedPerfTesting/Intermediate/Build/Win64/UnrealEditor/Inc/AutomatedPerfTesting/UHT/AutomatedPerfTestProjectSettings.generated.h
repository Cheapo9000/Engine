// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedPerfTestProjectSettings.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedPerfTestProjectSettings_generated_h
#error "AutomatedPerfTestProjectSettings.generated.h already included, missing '#pragma once' in AutomatedPerfTestProjectSettings.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedPerfTestProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedPerfTestProjectSettings ****************************************
struct Z_Construct_UClass_UAutomatedPerfTestProjectSettings_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedPerfTestProjectSettings_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedPerfTestProjectSettings(); \
	friend struct ::Z_Construct_UClass_UAutomatedPerfTestProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedPerfTestProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedPerfTestProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedPerfTestProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedPerfTestProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedPerfTestProjectSettings(UAutomatedPerfTestProjectSettings&&) = delete; \
	UAutomatedPerfTestProjectSettings(const UAutomatedPerfTestProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedPerfTestProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedPerfTestProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedPerfTestProjectSettings) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedPerfTestProjectSettings();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_13_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedPerfTestProjectSettings;

// ********** End Class UAutomatedPerfTestProjectSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
