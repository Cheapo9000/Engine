// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinimalClient.h"

#ifdef NETCODEUNITTEST_MinimalClient_generated_h
#error "MinimalClient.generated.h already included, missing '#pragma once' in MinimalClient.h"
#endif
#define NETCODEUNITTEST_MinimalClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMinimalClient ***********************************************************
struct Z_Construct_UClass_UMinimalClient_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_319_INCLASS \
private: \
	static void StaticRegisterNativesUMinimalClient(); \
	friend struct ::Z_Construct_UClass_UMinimalClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UMinimalClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UMinimalClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UMinimalClient_NoRegister) \
	DECLARE_SERIALIZER(UMinimalClient)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_319_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinimalClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinimalClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinimalClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinimalClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMinimalClient(UMinimalClient&&) = delete; \
	UMinimalClient(const UMinimalClient&) = delete; \
	NO_API virtual ~UMinimalClient();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_310_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_319_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_319_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_319_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMinimalClient;

// ********** End Class UMinimalClient *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
