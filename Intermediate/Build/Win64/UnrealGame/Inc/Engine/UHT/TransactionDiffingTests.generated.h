// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/TransactionDiffingTests.h"

#ifdef ENGINE_TransactionDiffingTests_generated_h
#error "TransactionDiffingTests.generated.h already included, missing '#pragma once' in TransactionDiffingTests.h"
#endif
#define ENGINE_TransactionDiffingTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransactionDiffingTestObject ********************************************
#define FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UTransactionDiffingTestObject, NO_API)


struct Z_Construct_UClass_UTransactionDiffingTestObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransactionDiffingTestObject(); \
	friend struct ::Z_Construct_UClass_UTransactionDiffingTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransactionDiffingTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister) \
	DECLARE_SERIALIZER(UTransactionDiffingTestObject) \
	FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransactionDiffingTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransactionDiffingTestObject(UTransactionDiffingTestObject&&) = delete; \
	UTransactionDiffingTestObject(const UTransactionDiffingTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransactionDiffingTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransactionDiffingTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransactionDiffingTestObject) \
	NO_API virtual ~UTransactionDiffingTestObject();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransactionDiffingTestObject;

// ********** End Class UTransactionDiffingTestObject **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
