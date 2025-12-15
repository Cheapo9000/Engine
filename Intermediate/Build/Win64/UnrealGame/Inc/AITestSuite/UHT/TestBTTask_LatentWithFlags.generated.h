// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_LatentWithFlags.h"

#ifdef AITESTSUITE_TestBTTask_LatentWithFlags_generated_h
#error "TestBTTask_LatentWithFlags.generated.h already included, missing '#pragma once' in TestBTTask_LatentWithFlags.h"
#endif
#define AITESTSUITE_TestBTTask_LatentWithFlags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestBTTask_LatentWithFlags **********************************************
struct Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_LatentWithFlags_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestBTTask_LatentWithFlags(); \
	friend struct ::Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UTestBTTask_LatentWithFlags_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestBTTask_LatentWithFlags, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UTestBTTask_LatentWithFlags_NoRegister) \
	DECLARE_SERIALIZER(UTestBTTask_LatentWithFlags)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestBTTask_LatentWithFlags(UTestBTTask_LatentWithFlags&&) = delete; \
	UTestBTTask_LatentWithFlags(const UTestBTTask_LatentWithFlags&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_LatentWithFlags); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_LatentWithFlags); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestBTTask_LatentWithFlags) \
	NO_API virtual ~UTestBTTask_LatentWithFlags();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_24_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestBTTask_LatentWithFlags;

// ********** End Class UTestBTTask_LatentWithFlags ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h

// ********** Begin Enum EBTTestChangeFlagBehavior *************************************************
#define FOREACH_ENUM_EBTTESTCHANGEFLAGBEHAVIOR(op) \
	op(EBTTestChangeFlagBehavior::Set) \
	op(EBTTestChangeFlagBehavior::Toggle) 

enum class EBTTestChangeFlagBehavior : uint8;
template<> struct TIsUEnumClass<EBTTestChangeFlagBehavior> { enum { Value = true }; };
template<> AITESTSUITE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTTestChangeFlagBehavior>();
// ********** End Enum EBTTestChangeFlagBehavior ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
