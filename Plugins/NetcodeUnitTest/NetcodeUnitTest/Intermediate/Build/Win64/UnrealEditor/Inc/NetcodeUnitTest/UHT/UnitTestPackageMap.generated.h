// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/UnitTestPackageMap.h"

#ifdef NETCODEUNITTEST_UnitTestPackageMap_generated_h
#error "UnitTestPackageMap.generated.h already included, missing '#pragma once' in UnitTestPackageMap.h"
#endif
#define NETCODEUNITTEST_UnitTestPackageMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTestPackageMap ******************************************************
struct Z_Construct_UClass_UUnitTestPackageMap_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestPackageMap_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestPackageMap(); \
	friend struct ::Z_Construct_UClass_UUnitTestPackageMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTestPackageMap_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTestPackageMap, UPackageMapClient, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTestPackageMap_NoRegister) \
	DECLARE_SERIALIZER(UUnitTestPackageMap)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestPackageMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestPackageMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestPackageMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestPackageMap); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTestPackageMap(UUnitTestPackageMap&&) = delete; \
	UUnitTestPackageMap(const UUnitTestPackageMap&) = delete; \
	NO_API virtual ~UUnitTestPackageMap();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_36_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_39_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTestPackageMap;

// ********** End Class UUnitTestPackageMap ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
