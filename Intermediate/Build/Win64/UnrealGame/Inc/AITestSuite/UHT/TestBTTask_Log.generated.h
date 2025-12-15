// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_Log.h"

#ifdef AITESTSUITE_TestBTTask_Log_generated_h
#error "TestBTTask_Log.generated.h already included, missing '#pragma once' in TestBTTask_Log.h"
#endif
#define AITESTSUITE_TestBTTask_Log_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTTask_Log **********************************************************
struct Z_Construct_UClass_UTestBTTask_Log_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_Log_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTTask_Log(); \
	friend struct ::Z_Construct_UClass_UTestBTTask_Log_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTTask_Log_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTTask_Log, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTTask_Log_NoRegister) \
	DECLARE_SERIALIZER(UTestBTTask_Log)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTTask_Log(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTTask_Log) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_Log); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_Log); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTTask_Log(UTestBTTask_Log&&) = delete; \
	UTestBTTask_Log(const UTestBTTask_Log&) = delete; \
	NO_API virtual ~UTestBTTask_Log();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_14_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_17_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTTask_Log;

// ********** End Class UTestBTTask_Log ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
