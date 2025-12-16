// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedSoakTest.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedSoakTest_generated_h
#error "AutomatedSoakTest.generated.h already included, missing '#pragma once' in AutomatedSoakTest.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedSoakTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedSoakTest *******************************************************
struct Z_Construct_UClass_UAutomatedSoakTest_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedSoakTest_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedSoakTest(); \
	friend struct ::Z_Construct_UClass_UAutomatedSoakTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedSoakTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedSoakTest, UAutomatedPerfTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedSoakTest_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedSoakTest)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedSoakTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedSoakTest(UAutomatedSoakTest&&) = delete; \
	UAutomatedSoakTest(const UAutomatedSoakTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedSoakTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedSoakTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedSoakTest) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedSoakTest();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_12_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedSoakTest;

// ********** End Class UAutomatedSoakTest *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedSoakTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
