// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BlackboardData.h"

#ifdef AIMODULE_BlackboardData_generated_h
#error "BlackboardData.generated.h already included, missing '#pragma once' in BlackboardData.h"
#endif
#define AIMODULE_BlackboardData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlackboardEntry **************************************************
struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlackboardEntry_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FBlackboardEntry;
// ********** End ScriptStruct FBlackboardEntry ****************************************************

// ********** Begin Class UBlackboardData **********************************************************
struct Z_Construct_UClass_UBlackboardData_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardData(); \
	friend struct ::Z_Construct_UClass_UBlackboardData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardData_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardData_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardData)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardData(UBlackboardData&&) = delete; \
	UBlackboardData(const UBlackboardData&) = delete; \
	AIMODULE_API virtual ~UBlackboardData();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardData;

// ********** End Class UBlackboardData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
