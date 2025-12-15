// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/StructSerializerTestTypes.h"

#ifdef SERIALIZATION_StructSerializerTestTypes_generated_h
#error "StructSerializerTestTypes.generated.h already included, missing '#pragma once' in StructSerializerTestTypes.h"
#endif
#define SERIALIZATION_StructSerializerTestTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTest **************************************************************
struct Z_Construct_UClass_UObjectTest_Statics;
SERIALIZATION_API UClass* Z_Construct_UClass_UObjectTest_NoRegister();

#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTest(); \
	friend struct ::Z_Construct_UClass_UObjectTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SERIALIZATION_API UClass* ::Z_Construct_UClass_UObjectTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Serialization"), Z_Construct_UClass_UObjectTest_NoRegister) \
	DECLARE_SERIALIZER(UObjectTest)


#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTest(UObjectTest&&) = delete; \
	UObjectTest(const UObjectTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTest) \
	NO_API virtual ~UObjectTest();


#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_14_PROLOG
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTest;

// ********** End Class UObjectTest ****************************************************************

// ********** Begin ScriptStruct FStructSerializerNumericTestStruct ********************************
struct Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerNumericTestStruct;
// ********** End ScriptStruct FStructSerializerNumericTestStruct **********************************

// ********** Begin ScriptStruct FStructSerializerBooleanTestStruct ********************************
struct Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerBooleanTestStruct;
// ********** End ScriptStruct FStructSerializerBooleanTestStruct **********************************

// ********** Begin ScriptStruct FStructSerializerObjectTestStruct *********************************
struct Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerObjectTestStruct;
// ********** End ScriptStruct FStructSerializerObjectTestStruct ***********************************

// ********** Begin ScriptStruct FStructSerializerBuiltinTestStruct ********************************
struct Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerBuiltinTestStruct;
// ********** End ScriptStruct FStructSerializerBuiltinTestStruct **********************************

// ********** Begin ScriptStruct FStructSerializerLWCTypesTest *************************************
struct Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_264_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerLWCTypesTest;
// ********** End ScriptStruct FStructSerializerLWCTypesTest ***************************************

// ********** Begin ScriptStruct FOrientedBoxFloat *************************************************
struct Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_362_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FOrientedBoxFloat;
// ********** End ScriptStruct FOrientedBoxFloat ***************************************************

// ********** Begin ScriptStruct FStructSerializerNonLWCTypesTest **********************************
struct Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_411_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerNonLWCTypesTest;
// ********** End ScriptStruct FStructSerializerNonLWCTypesTest ************************************

// ********** Begin ScriptStruct FStructSerializerByteArray ****************************************
struct Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_517_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerByteArray;
// ********** End ScriptStruct FStructSerializerByteArray ******************************************

// ********** Begin ScriptStruct FStructSerializerArrayTestStruct **********************************
struct Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_559_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerArrayTestStruct;
// ********** End ScriptStruct FStructSerializerArrayTestStruct ************************************

// ********** Begin ScriptStruct FStructSerializerMapTestStruct ************************************
struct Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_620_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerMapTestStruct;
// ********** End ScriptStruct FStructSerializerMapTestStruct **************************************

// ********** Begin ScriptStruct FStructSerializerSetTestStruct ************************************
struct Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_663_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerSetTestStruct;
// ********** End ScriptStruct FStructSerializerSetTestStruct **************************************

// ********** Begin ScriptStruct FStructSerializerOptionalTestStruct *******************************
struct Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_706_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerOptionalTestStruct;
// ********** End ScriptStruct FStructSerializerOptionalTestStruct *********************************

// ********** Begin ScriptStruct FStructSerializerTestStruct ***************************************
struct Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics;
#define FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h_765_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics; \
	SERIALIZATION_API static class UScriptStruct* StaticStruct();


struct FStructSerializerTestStruct;
// ********** End ScriptStruct FStructSerializerTestStruct *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
