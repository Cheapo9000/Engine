// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTest.h"

#ifdef NETCODEUNITTEST_UnitTest_generated_h
#error "UnitTest.generated.h already included, missing '#pragma once' in UnitTest.h"
#endif
#define NETCODEUNITTEST_UnitTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnitTest ****************************************************************
struct Z_Construct_UClass_UUnitTest_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTest(); \
	friend struct ::Z_Construct_UClass_UUnitTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UUnitTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnitTest, UUnitTestBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UUnitTest_NoRegister) \
	DECLARE_SERIALIZER(UUnitTest) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("UnitTestStats");} \



#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnitTest(UUnitTest&&) = delete; \
	UUnitTest(const UUnitTest&) = delete; \
	NO_API virtual ~UUnitTest();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_106_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_109_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnitTest;

// ********** End Class UUnitTest ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h

// ********** Begin Enum EUnitTestVerification *****************************************************
#define FOREACH_ENUM_EUNITTESTVERIFICATION(op) \
	op(EUnitTestVerification::Unverified) \
	op(EUnitTestVerification::VerifiedNotFixed) \
	op(EUnitTestVerification::VerifiedFixed) \
	op(EUnitTestVerification::VerifiedNeedsUpdate) \
	op(EUnitTestVerification::VerifiedUnreliable) 

enum class EUnitTestVerification : uint8;
template<> struct TIsUEnumClass<EUnitTestVerification> { enum { Value = true }; };
template<> NETCODEUNITTEST_NON_ATTRIBUTED_API UEnum* StaticEnum<EUnitTestVerification>();
// ********** End Enum EUnitTestVerification *******************************************************

// ********** Begin Enum EUnitTestResetStage *******************************************************
#define FOREACH_ENUM_EUNITTESTRESETSTAGE(op) \
	op(EUnitTestResetStage::None) \
	op(EUnitTestResetStage::FullReset) \
	op(EUnitTestResetStage::ResetConnection) \
	op(EUnitTestResetStage::ResetExecute) 

enum class EUnitTestResetStage : uint8;
template<> struct TIsUEnumClass<EUnitTestResetStage> { enum { Value = true }; };
template<> NETCODEUNITTEST_NON_ATTRIBUTED_API UEnum* StaticEnum<EUnitTestResetStage>();
// ********** End Enum EUnitTestResetStage *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
