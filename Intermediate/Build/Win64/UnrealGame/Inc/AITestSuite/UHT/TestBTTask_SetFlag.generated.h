// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_SetFlag.h"

#ifdef AITESTSUITE_TestBTTask_SetFlag_generated_h
#error "TestBTTask_SetFlag.generated.h already included, missing '#pragma once' in TestBTTask_SetFlag.h"
#endif
#define AITESTSUITE_TestBTTask_SetFlag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTTask_SetFlag ******************************************************
struct Z_Construct_UClass_UTestBTTask_SetFlag_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTTask_SetFlag(); \
	friend struct ::Z_Construct_UClass_UTestBTTask_SetFlag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTTask_SetFlag, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister) \
	DECLARE_SERIALIZER(UTestBTTask_SetFlag)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTTask_SetFlag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTTask_SetFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_SetFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_SetFlag); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTTask_SetFlag(UTestBTTask_SetFlag&&) = delete; \
	UTestBTTask_SetFlag(const UTestBTTask_SetFlag&) = delete; \
	NO_API virtual ~UTestBTTask_SetFlag();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_9_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_12_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTTask_SetFlag;

// ********** End Class UTestBTTask_SetFlag ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
