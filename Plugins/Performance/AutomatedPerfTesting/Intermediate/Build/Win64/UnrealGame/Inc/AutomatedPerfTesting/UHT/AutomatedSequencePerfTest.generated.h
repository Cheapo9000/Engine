// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedSequencePerfTest.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedSequencePerfTest_generated_h
#error "AutomatedSequencePerfTest.generated.h already included, missing '#pragma once' in AutomatedSequencePerfTest.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedSequencePerfTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
struct FAutomatedPerfTestMapSequenceCombo;

// ********** Begin ScriptStruct FAutomatedPerfTestMapSequenceCombo ********************************
struct Z_Construct_UScriptStruct_FAutomatedPerfTestMapSequenceCombo_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomatedPerfTestMapSequenceCombo_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FAutomatedPerfTestMapSequenceCombo;
// ********** End ScriptStruct FAutomatedPerfTestMapSequenceCombo **********************************

// ********** Begin Class UAutomatedSequencePerfTestProjectSettings ********************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetComboFromTestName);


struct Z_Construct_UClass_UAutomatedSequencePerfTestProjectSettings_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedSequencePerfTestProjectSettings_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedSequencePerfTestProjectSettings(); \
	friend struct ::Z_Construct_UClass_UAutomatedSequencePerfTestProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedSequencePerfTestProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedSequencePerfTestProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedSequencePerfTestProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedSequencePerfTestProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedSequencePerfTestProjectSettings(UAutomatedSequencePerfTestProjectSettings&&) = delete; \
	UAutomatedSequencePerfTestProjectSettings(const UAutomatedSequencePerfTestProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedSequencePerfTestProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedSequencePerfTestProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedSequencePerfTestProjectSettings) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedSequencePerfTestProjectSettings();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_48_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedSequencePerfTestProjectSettings;

// ********** End Class UAutomatedSequencePerfTestProjectSettings **********************************

// ********** Begin Class UAutomatedSequencePerfTest ***********************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCameraCut); \
	DECLARE_FUNCTION(execOnSequenceFinished); \
	DECLARE_FUNCTION(execNextMap); \
	DECLARE_FUNCTION(execRunTest);


struct Z_Construct_UClass_UAutomatedSequencePerfTest_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedSequencePerfTest_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedSequencePerfTest(); \
	friend struct ::Z_Construct_UClass_UAutomatedSequencePerfTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedSequencePerfTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedSequencePerfTest, UAutomatedPerfTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedSequencePerfTest_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedSequencePerfTest)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedSequencePerfTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedSequencePerfTest(UAutomatedSequencePerfTest&&) = delete; \
	UAutomatedSequencePerfTest(const UAutomatedSequencePerfTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedSequencePerfTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedSequencePerfTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedSequencePerfTest) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedSequencePerfTest();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_86_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedSequencePerfTest;

// ********** End Class UAutomatedSequencePerfTest *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSequencePerfTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
