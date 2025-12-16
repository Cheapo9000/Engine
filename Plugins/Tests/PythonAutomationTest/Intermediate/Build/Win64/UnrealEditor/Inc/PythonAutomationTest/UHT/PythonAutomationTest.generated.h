// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonAutomationTest.h"

#ifdef PYTHONAUTOMATIONTEST_PythonAutomationTest_generated_h
#error "PythonAutomationTest.generated.h already included, missing '#pragma once' in PythonAutomationTest.h"
#endif
#define PYTHONAUTOMATIONTEST_PythonAutomationTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPyAutomationTestLibrary *************************************************
#define FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetPyLatentCommand); \
	DECLARE_FUNCTION(execGetPyLatentCommandTimeout); \
	DECLARE_FUNCTION(execSetPyLatentCommandTimeout); \
	DECLARE_FUNCTION(execGetIsRunningPyLatentCommand); \
	DECLARE_FUNCTION(execSetIsRunningPyLatentCommand);


struct Z_Construct_UClass_UPyAutomationTestLibrary_Statics;
PYTHONAUTOMATIONTEST_API UClass* Z_Construct_UClass_UPyAutomationTestLibrary_NoRegister();

#define FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyAutomationTestLibrary(); \
	friend struct ::Z_Construct_UClass_UPyAutomationTestLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONAUTOMATIONTEST_API UClass* ::Z_Construct_UClass_UPyAutomationTestLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyAutomationTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonAutomationTest"), Z_Construct_UClass_UPyAutomationTestLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPyAutomationTestLibrary)


#define FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PYTHONAUTOMATIONTEST_API UPyAutomationTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyAutomationTestLibrary(UPyAutomationTestLibrary&&) = delete; \
	UPyAutomationTestLibrary(const UPyAutomationTestLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PYTHONAUTOMATIONTEST_API, UPyAutomationTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyAutomationTestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyAutomationTestLibrary) \
	PYTHONAUTOMATIONTEST_API virtual ~UPyAutomationTestLibrary();


#define FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_11_PROLOG
#define FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyAutomationTestLibrary;

// ********** End Class UPyAutomationTestLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
