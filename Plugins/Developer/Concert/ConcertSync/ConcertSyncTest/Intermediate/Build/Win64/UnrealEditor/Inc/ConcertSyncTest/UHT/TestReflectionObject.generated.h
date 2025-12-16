// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/TestReflectionObject.h"

#ifdef CONCERTSYNCTEST_TestReflectionObject_generated_h
#error "TestReflectionObject.generated.h already included, missing '#pragma once' in TestReflectionObject.h"
#endif
#define CONCERTSYNCTEST_TestReflectionObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNativeStruct *****************************************************
struct Z_Construct_UScriptStruct_FNativeStruct_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNativeStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


struct FNativeStruct;
// ********** End ScriptStruct FNativeStruct *******************************************************

// ********** Begin ScriptStruct FTestReplicationStruct ********************************************
struct Z_Construct_UScriptStruct_FTestReplicationStruct_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestReplicationStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


struct FTestReplicationStruct;
// ********** End ScriptStruct FTestReplicationStruct **********************************************

// ********** Begin ScriptStruct FTestNestedReplicationStruct **************************************
struct Z_Construct_UScriptStruct_FTestNestedReplicationStruct_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestNestedReplicationStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


struct FTestNestedReplicationStruct;
// ********** End ScriptStruct FTestNestedReplicationStruct ****************************************

// ********** Begin Delegate FTestReflectionDelegate ***********************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_81_DELEGATE \
CONCERTSYNCTEST_API void FTestReflectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& TestReflectionDelegate);


// ********** End Delegate FTestReflectionDelegate *************************************************

// ********** Begin Class UTestReflectionObject ****************************************************
struct Z_Construct_UClass_UTestReflectionObject_Statics;
CONCERTSYNCTEST_API UClass* Z_Construct_UClass_UTestReflectionObject_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestReflectionObject(); \
	friend struct ::Z_Construct_UClass_UTestReflectionObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSYNCTEST_API UClass* ::Z_Construct_UClass_UTestReflectionObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestReflectionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConcertSyncTest"), Z_Construct_UClass_UTestReflectionObject_NoRegister) \
	DECLARE_SERIALIZER(UTestReflectionObject)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestReflectionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestReflectionObject(UTestReflectionObject&&) = delete; \
	UTestReflectionObject(const UTestReflectionObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestReflectionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestReflectionObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestReflectionObject) \
	NO_API virtual ~UTestReflectionObject();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_83_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestReflectionObject;

// ********** End Class UTestReflectionObject ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
