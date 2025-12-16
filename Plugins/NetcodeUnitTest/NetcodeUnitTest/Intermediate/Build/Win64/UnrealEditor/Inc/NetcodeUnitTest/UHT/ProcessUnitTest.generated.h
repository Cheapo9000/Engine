// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProcessUnitTest.h"

#ifdef NETCODEUNITTEST_ProcessUnitTest_generated_h
#error "ProcessUnitTest.generated.h already included, missing '#pragma once' in ProcessUnitTest.h"
#endif
#define NETCODEUNITTEST_ProcessUnitTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProcessUnitTest *********************************************************
struct Z_Construct_UClass_UProcessUnitTest_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UProcessUnitTest_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_168_INCLASS \
private: \
	static void StaticRegisterNativesUProcessUnitTest(); \
	friend struct ::Z_Construct_UClass_UProcessUnitTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UProcessUnitTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UProcessUnitTest, UUnitTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UProcessUnitTest_NoRegister) \
	DECLARE_SERIALIZER(UProcessUnitTest)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_168_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProcessUnitTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProcessUnitTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProcessUnitTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProcessUnitTest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProcessUnitTest(UProcessUnitTest&&) = delete; \
	UProcessUnitTest(const UProcessUnitTest&) = delete; \
	NO_API virtual ~UProcessUnitTest();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_165_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_168_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_168_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_168_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProcessUnitTest;

// ********** End Class UProcessUnitTest ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
