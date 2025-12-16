// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedReplayPerfTest.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedReplayPerfTest_generated_h
#error "AutomatedReplayPerfTest.generated.h already included, missing '#pragma once' in AutomatedReplayPerfTest.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedReplayPerfTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedReplayPerfTestProjectSettings **********************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReplayPathFromName);


struct Z_Construct_UClass_UAutomatedReplayPerfTestProjectSettings_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedReplayPerfTestProjectSettings_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedReplayPerfTestProjectSettings(); \
	friend struct ::Z_Construct_UClass_UAutomatedReplayPerfTestProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedReplayPerfTestProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedReplayPerfTestProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedReplayPerfTestProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedReplayPerfTestProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedReplayPerfTestProjectSettings(UAutomatedReplayPerfTestProjectSettings&&) = delete; \
	UAutomatedReplayPerfTestProjectSettings(const UAutomatedReplayPerfTestProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedReplayPerfTestProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedReplayPerfTestProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedReplayPerfTestProjectSettings) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedReplayPerfTestProjectSettings();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_19_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedReplayPerfTestProjectSettings;

// ********** End Class UAutomatedReplayPerfTestProjectSettings ************************************

// ********** Begin Class UAutomatedReplayPerfTest *************************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTest);


struct Z_Construct_UClass_UAutomatedReplayPerfTest_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedReplayPerfTest_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedReplayPerfTest(); \
	friend struct ::Z_Construct_UClass_UAutomatedReplayPerfTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedReplayPerfTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedReplayPerfTest, UAutomatedPerfTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedReplayPerfTest_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedReplayPerfTest)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedReplayPerfTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedReplayPerfTest(UAutomatedReplayPerfTest&&) = delete; \
	UAutomatedReplayPerfTest(const UAutomatedReplayPerfTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedReplayPerfTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedReplayPerfTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedReplayPerfTest) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedReplayPerfTest();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_47_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedReplayPerfTest;

// ********** End Class UAutomatedReplayPerfTest ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedReplayPerfTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
