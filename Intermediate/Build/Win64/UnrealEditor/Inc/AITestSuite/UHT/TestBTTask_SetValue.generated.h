// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_SetValue.h"

#ifdef AITESTSUITE_TestBTTask_SetValue_generated_h
#error "TestBTTask_SetValue.generated.h already included, missing '#pragma once' in TestBTTask_SetValue.h"
#endif
#define AITESTSUITE_TestBTTask_SetValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTTask_SetValue *****************************************************
struct Z_Construct_UClass_UTestBTTask_SetValue_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetValue_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTTask_SetValue(); \
	friend struct ::Z_Construct_UClass_UTestBTTask_SetValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTTask_SetValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTTask_SetValue, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTTask_SetValue_NoRegister) \
	DECLARE_SERIALIZER(UTestBTTask_SetValue)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTTask_SetValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTTask_SetValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_SetValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_SetValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTTask_SetValue(UTestBTTask_SetValue&&) = delete; \
	UTestBTTask_SetValue(const UTestBTTask_SetValue&) = delete; \
	NO_API virtual ~UTestBTTask_SetValue();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_9_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_12_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTTask_SetValue;

// ********** End Class UTestBTTask_SetValue *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
