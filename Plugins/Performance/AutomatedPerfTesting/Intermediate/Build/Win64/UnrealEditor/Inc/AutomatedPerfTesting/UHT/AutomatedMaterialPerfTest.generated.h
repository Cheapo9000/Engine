// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedMaterialPerfTest.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedMaterialPerfTest_generated_h
#error "AutomatedMaterialPerfTest.generated.h already included, missing '#pragma once' in AutomatedMaterialPerfTest.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedMaterialPerfTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedMaterialPerfTestProjectSettings ********************************
struct Z_Construct_UClass_UAutomatedMaterialPerfTestProjectSettings_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedMaterialPerfTestProjectSettings_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedMaterialPerfTestProjectSettings(); \
	friend struct ::Z_Construct_UClass_UAutomatedMaterialPerfTestProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedMaterialPerfTestProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedMaterialPerfTestProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedMaterialPerfTestProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedMaterialPerfTestProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedMaterialPerfTestProjectSettings(UAutomatedMaterialPerfTestProjectSettings&&) = delete; \
	UAutomatedMaterialPerfTestProjectSettings(const UAutomatedMaterialPerfTestProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedMaterialPerfTestProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedMaterialPerfTestProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedMaterialPerfTestProjectSettings) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedMaterialPerfTestProjectSettings();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_18_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedMaterialPerfTestProjectSettings;

// ********** End Class UAutomatedMaterialPerfTestProjectSettings **********************************

// ********** Begin Class UAutomatedMaterialPerfTest ***********************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScreenshotMaterial); \
	DECLARE_FUNCTION(execFinishMaterialEvaluation); \
	DECLARE_FUNCTION(execEvaluateMaterial); \
	DECLARE_FUNCTION(execSetUpNextMaterial); \
	DECLARE_FUNCTION(execRunTest);


struct Z_Construct_UClass_UAutomatedMaterialPerfTest_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedMaterialPerfTest_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedMaterialPerfTest(); \
	friend struct ::Z_Construct_UClass_UAutomatedMaterialPerfTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedMaterialPerfTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedMaterialPerfTest, UAutomatedPerfTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedMaterialPerfTest_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedMaterialPerfTest)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedMaterialPerfTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedMaterialPerfTest(UAutomatedMaterialPerfTest&&) = delete; \
	UAutomatedMaterialPerfTest(const UAutomatedMaterialPerfTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedMaterialPerfTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedMaterialPerfTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedMaterialPerfTest) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedMaterialPerfTest();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_104_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedMaterialPerfTest;

// ********** End Class UAutomatedMaterialPerfTest *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedMaterialPerfTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
