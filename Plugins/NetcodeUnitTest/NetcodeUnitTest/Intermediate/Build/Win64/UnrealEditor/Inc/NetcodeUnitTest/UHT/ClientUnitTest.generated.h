// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientUnitTest.h"

#ifdef NETCODEUNITTEST_ClientUnitTest_generated_h
#error "ClientUnitTest.generated.h already included, missing '#pragma once' in ClientUnitTest.h"
#endif
#define NETCODEUNITTEST_ClientUnitTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientUnitTest **********************************************************
struct Z_Construct_UClass_UClientUnitTest_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUClientUnitTest(); \
	friend struct ::Z_Construct_UClass_UClientUnitTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UClientUnitTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientUnitTest, UProcessUnitTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UClientUnitTest_NoRegister) \
	DECLARE_SERIALIZER(UClientUnitTest)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientUnitTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientUnitTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientUnitTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientUnitTest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientUnitTest(UClientUnitTest&&) = delete; \
	UClientUnitTest(const UClientUnitTest&) = delete; \
	NO_API virtual ~UClientUnitTest();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_45_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_48_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientUnitTest;

// ********** End Class UClientUnitTest ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
