// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AsyncMessageSystemTests.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncMessageSystemTests_generated_h
#error "AsyncMessageSystemTests.generated.h already included, missing '#pragma once' in AsyncMessageSystemTests.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncMessageSystemTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTest_Payload_A ***************************************************
struct Z_Construct_UScriptStruct_FTest_Payload_A_Statics;
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTest_Payload_A_Statics; \
	ASYNCMESSAGESYSTEM_API static class UScriptStruct* StaticStruct();


struct FTest_Payload_A;
// ********** End ScriptStruct FTest_Payload_A *****************************************************

// ********** Begin ScriptStruct FNested_Payload ***************************************************
struct Z_Construct_UScriptStruct_FNested_Payload_Statics;
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNested_Payload_Statics; \
	ASYNCMESSAGESYSTEM_API static class UScriptStruct* StaticStruct();


struct FNested_Payload;
// ********** End ScriptStruct FNested_Payload *****************************************************

// ********** Begin Class UTestAsyncObject *********************************************************
struct Z_Construct_UClass_UTestAsyncObject_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UTestAsyncObject_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestAsyncObject(); \
	friend struct ::Z_Construct_UClass_UTestAsyncObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UTestAsyncObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestAsyncObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UTestAsyncObject_NoRegister) \
	DECLARE_SERIALIZER(UTestAsyncObject)


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestAsyncObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestAsyncObject(UTestAsyncObject&&) = delete; \
	UTestAsyncObject(const UTestAsyncObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAsyncObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAsyncObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestAsyncObject) \
	NO_API virtual ~UTestAsyncObject();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_53_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestAsyncObject;

// ********** End Class UTestAsyncObject ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_Tests_AsyncMessageSystemTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
