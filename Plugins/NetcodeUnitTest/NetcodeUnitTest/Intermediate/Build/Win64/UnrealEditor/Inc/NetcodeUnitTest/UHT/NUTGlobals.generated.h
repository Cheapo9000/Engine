// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NUTGlobals.h"

#ifdef NETCODEUNITTEST_NUTGlobals_generated_h
#error "NUTGlobals.generated.h already included, missing '#pragma once' in NUTGlobals.h"
#endif
#define NETCODEUNITTEST_NUTGlobals_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNUTGlobals **************************************************************
struct Z_Construct_UClass_UNUTGlobals_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UNUTGlobals_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUNUTGlobals(); \
	friend struct ::Z_Construct_UClass_UNUTGlobals_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UNUTGlobals_NoRegister(); \
public: \
	DECLARE_CLASS2(UNUTGlobals, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UNUTGlobals_NoRegister) \
	DECLARE_SERIALIZER(UNUTGlobals)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNUTGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNUTGlobals) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNUTGlobals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNUTGlobals); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNUTGlobals(UNUTGlobals&&) = delete; \
	UNUTGlobals(const UNUTGlobals&) = delete; \
	NO_API virtual ~UNUTGlobals();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_21_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_24_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNUTGlobals;

// ********** End Class UNUTGlobals ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
