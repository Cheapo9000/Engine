// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTestCommandlet.h"

#ifdef NETCODEUNITTEST_UnitTestCommandlet_generated_h
#error "UnitTestCommandlet.generated.h already included, missing '#pragma once' in UnitTestCommandlet.h"
#endif
#define NETCODEUNITTEST_UnitTestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTestCommandlet ******************************************************
struct Z_Construct_UClass_UUnitTestCommandlet_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestCommandlet_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestCommandlet(); \
	friend struct ::Z_Construct_UClass_UUnitTestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UUnitTestCommandlet)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTestCommandlet(UUnitTestCommandlet&&) = delete; \
	UUnitTestCommandlet(const UUnitTestCommandlet&) = delete; \
	NO_API virtual ~UUnitTestCommandlet();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_37_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_40_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTestCommandlet;

// ********** End Class UUnitTestCommandlet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
