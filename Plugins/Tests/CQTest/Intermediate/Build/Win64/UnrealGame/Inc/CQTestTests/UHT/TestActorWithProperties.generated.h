// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActorWithProperties.h"

#ifdef CQTESTTESTS_TestActorWithProperties_generated_h
#error "TestActorWithProperties.generated.h already included, missing '#pragma once' in TestActorWithProperties.h"
#endif
#define CQTESTTESTS_TestActorWithProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTestStructWithProperties *****************************************
struct Z_Construct_UScriptStruct_FTestStructWithProperties_Statics;
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestStructWithProperties_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct();


struct FTestStructWithProperties;
// ********** End ScriptStruct FTestStructWithProperties *******************************************

// ********** Begin ScriptStruct FDerivedTestStruct ************************************************
struct Z_Construct_UScriptStruct_FDerivedTestStruct_Statics;
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDerivedTestStruct_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct(); \
	typedef FTestStructWithProperties Super;


struct FDerivedTestStruct;
// ********** End ScriptStruct FDerivedTestStruct **************************************************

// ********** Begin ScriptStruct FOtherTestStruct **************************************************
struct Z_Construct_UScriptStruct_FOtherTestStruct_Statics;
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOtherTestStruct_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct();


struct FOtherTestStruct;
// ********** End ScriptStruct FOtherTestStruct ****************************************************

// ********** Begin Class ATestActorWithProperties *************************************************
struct Z_Construct_UClass_ATestActorWithProperties_Statics;
CQTESTTESTS_API UClass* Z_Construct_UClass_ATestActorWithProperties_NoRegister();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActorWithProperties(); \
	friend struct ::Z_Construct_UClass_ATestActorWithProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CQTESTTESTS_API UClass* ::Z_Construct_UClass_ATestActorWithProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestActorWithProperties, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CQTestTests"), Z_Construct_UClass_ATestActorWithProperties_NoRegister) \
	DECLARE_SERIALIZER(ATestActorWithProperties)


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestActorWithProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestActorWithProperties(ATestActorWithProperties&&) = delete; \
	ATestActorWithProperties(const ATestActorWithProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActorWithProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActorWithProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestActorWithProperties) \
	NO_API virtual ~ATestActorWithProperties();


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_106_PROLOG
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestActorWithProperties;

// ********** End Class ATestActorWithProperties ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h

// ********** Begin Enum ETestUint8 ****************************************************************
#define FOREACH_ENUM_ETESTUINT8(op) \
	op(ETestUint8::enumone) \
	op(ETestUint8::enumtwo) \
	op(ETestUint8::enumthree) 

enum class ETestUint8 : uint8;
template<> struct TIsUEnumClass<ETestUint8> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestUint8>();
// ********** End Enum ETestUint8 ******************************************************************

// ********** Begin Enum ETestInt8 *****************************************************************
#define FOREACH_ENUM_ETESTINT8(op) \
	op(ETestInt8::enumone) \
	op(ETestInt8::enumtwo) \
	op(ETestInt8::enumthree) 

enum class ETestInt8 : int8;
template<> struct TIsUEnumClass<ETestInt8> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInt8>();
// ********** End Enum ETestInt8 *******************************************************************

// ********** Begin Enum ETestInt16 ****************************************************************
#define FOREACH_ENUM_ETESTINT16(op) \
	op(ETestInt16::enumone) \
	op(ETestInt16::enumtwo) \
	op(ETestInt16::enumthree) 

enum class ETestInt16 : int16;
template<> struct TIsUEnumClass<ETestInt16> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInt16>();
// ********** End Enum ETestInt16 ******************************************************************

// ********** Begin Enum ETestUint16 ***************************************************************
#define FOREACH_ENUM_ETESTUINT16(op) \
	op(ETestUint16::enumone) \
	op(ETestUint16::enumtwo) \
	op(ETestUint16::enumthree) 

enum class ETestUint16 : uint16;
template<> struct TIsUEnumClass<ETestUint16> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestUint16>();
// ********** End Enum ETestUint16 *****************************************************************

// ********** Begin Enum ETestInt32 ****************************************************************
#define FOREACH_ENUM_ETESTINT32(op) \
	op(ETestInt32::enumone) \
	op(ETestInt32::enumtwo) \
	op(ETestInt32::enumthree) 

enum class ETestInt32 : int32;
template<> struct TIsUEnumClass<ETestInt32> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInt32>();
// ********** End Enum ETestInt32 ******************************************************************

// ********** Begin Enum ETestUint32 ***************************************************************
#define FOREACH_ENUM_ETESTUINT32(op) \
	op(ETestUint32::enumone) \
	op(ETestUint32::enumtwo) \
	op(ETestUint32::enumthree) 

enum class ETestUint32 : uint32;
template<> struct TIsUEnumClass<ETestUint32> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestUint32>();
// ********** End Enum ETestUint32 *****************************************************************

// ********** Begin Enum ETestInt64 ****************************************************************
#define FOREACH_ENUM_ETESTINT64(op) \
	op(ETestInt64::enumone) \
	op(ETestInt64::enumtwo) \
	op(ETestInt64::enumthree) 

enum class ETestInt64 : int64;
template<> struct TIsUEnumClass<ETestInt64> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInt64>();
// ********** End Enum ETestInt64 ******************************************************************

// ********** Begin Enum ETestUint64 ***************************************************************
#define FOREACH_ENUM_ETESTUINT64(op) \
	op(ETestUint64::enumone) \
	op(ETestUint64::enumtwo) \
	op(ETestUint64::enumthree) 

enum class ETestUint64 : uint64;
template<> struct TIsUEnumClass<ETestUint64> { enum { Value = true }; };
template<> CQTESTTESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestUint64>();
// ********** End Enum ETestUint64 *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
