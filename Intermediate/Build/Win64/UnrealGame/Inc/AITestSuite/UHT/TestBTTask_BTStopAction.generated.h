// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_BTStopAction.h"

#ifdef AITESTSUITE_TestBTTask_BTStopAction_generated_h
#error "TestBTTask_BTStopAction.generated.h already included, missing '#pragma once' in TestBTTask_BTStopAction.h"
#endif
#define AITESTSUITE_TestBTTask_BTStopAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTTask_BTStopAction *************************************************
struct Z_Construct_UClass_UTestBTTask_BTStopAction_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestBTTask_BTStopAction(); \
	friend struct ::Z_Construct_UClass_UTestBTTask_BTStopAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTTask_BTStopAction, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister) \
	DECLARE_SERIALIZER(UTestBTTask_BTStopAction)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTTask_BTStopAction(UTestBTTask_BTStopAction&&) = delete; \
	UTestBTTask_BTStopAction(const UTestBTTask_BTStopAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_BTStopAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_BTStopAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTTask_BTStopAction) \
	NO_API virtual ~UTestBTTask_BTStopAction();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_17_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTTask_BTStopAction;

// ********** End Class UTestBTTask_BTStopAction ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h

// ********** Begin Enum EBTTestTaskStopTiming *****************************************************
#define FOREACH_ENUM_EBTTESTTASKSTOPTIMING(op) \
	op(EBTTestTaskStopTiming::DuringExecute) \
	op(EBTTestTaskStopTiming::DuringTick) \
	op(EBTTestTaskStopTiming::DuringAbort) \
	op(EBTTestTaskStopTiming::DuringFinish) 

enum class EBTTestTaskStopTiming : uint8;
template<> struct TIsUEnumClass<EBTTestTaskStopTiming> { enum { Value = true }; };
template<> AITESTSUITE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTTestTaskStopTiming>();
// ********** End Enum EBTTestTaskStopTiming *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
