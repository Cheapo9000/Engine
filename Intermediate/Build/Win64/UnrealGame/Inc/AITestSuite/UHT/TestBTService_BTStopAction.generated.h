// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTService_BTStopAction.h"

#ifdef AITESTSUITE_TestBTService_BTStopAction_generated_h
#error "TestBTService_BTStopAction.generated.h already included, missing '#pragma once' in TestBTService_BTStopAction.h"
#endif
#define AITESTSUITE_TestBTService_BTStopAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTService_BTStopAction **********************************************
struct Z_Construct_UClass_UTestBTService_BTStopAction_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTService_BTStopAction(); \
	friend struct ::Z_Construct_UClass_UTestBTService_BTStopAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTService_BTStopAction, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister) \
	DECLARE_SERIALIZER(UTestBTService_BTStopAction)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTService_BTStopAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTService_BTStopAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTService_BTStopAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTService_BTStopAction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTService_BTStopAction(UTestBTService_BTStopAction&&) = delete; \
	UTestBTService_BTStopAction(const UTestBTService_BTStopAction&) = delete; \
	NO_API virtual ~UTestBTService_BTStopAction();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_16_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_19_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTService_BTStopAction;

// ********** End Class UTestBTService_BTStopAction ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h

// ********** Begin Enum EBTTestServiceStopTiming **************************************************
#define FOREACH_ENUM_EBTTESTSERVICESTOPTIMING(op) \
	op(EBTTestServiceStopTiming::DuringBecomeRelevant) \
	op(EBTTestServiceStopTiming::DuringTick) \
	op(EBTTestServiceStopTiming::DuringCeaseRelevant) 

enum class EBTTestServiceStopTiming : uint8;
template<> struct TIsUEnumClass<EBTTestServiceStopTiming> { enum { Value = true }; };
template<> AITESTSUITE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTTestServiceStopTiming>();
// ********** End Enum EBTTestServiceStopTiming ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
