// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/TestReflectionObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCTEST_TestReflectionObject_generated_h
#error "TestReflectionObject.generated.h already included, missing '#pragma once' in TestReflectionObject.h"
#endif
#define CONCERTSYNCTEST_TestReflectionObject_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNativeStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCTEST_API UScriptStruct* StaticStruct<struct FNativeStruct>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestReplicationStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCTEST_API UScriptStruct* StaticStruct<struct FTestReplicationStruct>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestNestedReplicationStruct_Statics; \
	CONCERTSYNCTEST_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCTEST_API UScriptStruct* StaticStruct<struct FTestNestedReplicationStruct>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_81_DELEGATE \
CONCERTSYNCTEST_API void FTestReflectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& TestReflectionDelegate);


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestReflectionObject(); \
	friend struct Z_Construct_UClass_UTestReflectionObject_Statics; \
public: \
	DECLARE_CLASS(UTestReflectionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConcertSyncTest"), NO_API) \
	DECLARE_SERIALIZER(UTestReflectionObject)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestReflectionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestReflectionObject(UTestReflectionObject&&); \
	UTestReflectionObject(const UTestReflectionObject&); \
public: \
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


template<> CONCERTSYNCTEST_API UClass* StaticClass<class UTestReflectionObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_Replication_TestReflectionObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
