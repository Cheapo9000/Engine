// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTestManager.h"

#ifdef NETCODEUNITTEST_UnitTestManager_generated_h
#error "UnitTestManager.generated.h already included, missing '#pragma once' in UnitTestManager.h"
#endif
#define NETCODEUNITTEST_UnitTestManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTestManager *********************************************************
struct Z_Construct_UClass_UUnitTestManager_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestManager_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestManager(); \
	friend struct ::Z_Construct_UClass_UUnitTestManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTestManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTestManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTestManager_NoRegister) \
	DECLARE_SERIALIZER(UUnitTestManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("UnitTest");} \



#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTestManager(UUnitTestManager&&) = delete; \
	UUnitTestManager(const UUnitTestManager&) = delete;


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_25_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_28_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTestManager;

// ********** End Class UUnitTestManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
