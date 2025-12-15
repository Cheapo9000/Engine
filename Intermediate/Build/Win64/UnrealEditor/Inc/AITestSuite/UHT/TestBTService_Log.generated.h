// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTService_Log.h"

#ifdef AITESTSUITE_TestBTService_Log_generated_h
#error "TestBTService_Log.generated.h already included, missing '#pragma once' in TestBTService_Log.h"
#endif
#define AITESTSUITE_TestBTService_Log_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTService_Log *******************************************************
struct Z_Construct_UClass_UTestBTService_Log_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_Log_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTService_Log(); \
	friend struct ::Z_Construct_UClass_UTestBTService_Log_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTService_Log_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTService_Log, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTService_Log_NoRegister) \
	DECLARE_SERIALIZER(UTestBTService_Log)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTService_Log(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTService_Log) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTService_Log); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTService_Log); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTService_Log(UTestBTService_Log&&) = delete; \
	UTestBTService_Log(const UTestBTService_Log&) = delete; \
	NO_API virtual ~UTestBTService_Log();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_9_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_12_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTService_Log;

// ********** End Class UTestBTService_Log *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
