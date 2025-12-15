// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"

#ifdef AIMODULE_BTTask_WaitBlackboardTime_generated_h
#error "BTTask_WaitBlackboardTime.generated.h already included, missing '#pragma once' in BTTask_WaitBlackboardTime.h"
#endif
#define AIMODULE_BTTask_WaitBlackboardTime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_WaitBlackboardTime ***********************************************
struct Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_WaitBlackboardTime(); \
	friend struct ::Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_WaitBlackboardTime, UBTTask_Wait, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_WaitBlackboardTime)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_WaitBlackboardTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_WaitBlackboardTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_WaitBlackboardTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_WaitBlackboardTime); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_WaitBlackboardTime(UBTTask_WaitBlackboardTime&&) = delete; \
	UBTTask_WaitBlackboardTime(const UBTTask_WaitBlackboardTime&) = delete; \
	AIMODULE_API virtual ~UBTTask_WaitBlackboardTime();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_WaitBlackboardTime;

// ********** End Class UBTTask_WaitBlackboardTime *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
