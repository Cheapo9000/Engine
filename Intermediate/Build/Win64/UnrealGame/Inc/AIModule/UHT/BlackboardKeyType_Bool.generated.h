// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"

#ifdef AIMODULE_BlackboardKeyType_Bool_generated_h
#error "BlackboardKeyType_Bool.generated.h already included, missing '#pragma once' in BlackboardKeyType_Bool.h"
#endif
#define AIMODULE_BlackboardKeyType_Bool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackboardKeyType_Bool **************************************************
struct Z_Construct_UClass_UBlackboardKeyType_Bool_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Bool_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType_Bool(); \
	friend struct ::Z_Construct_UClass_UBlackboardKeyType_Bool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardKeyType_Bool_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardKeyType_Bool, UBlackboardKeyType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardKeyType_Bool_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardKeyType_Bool)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardKeyType_Bool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType_Bool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardKeyType_Bool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType_Bool); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardKeyType_Bool(UBlackboardKeyType_Bool&&) = delete; \
	UBlackboardKeyType_Bool(const UBlackboardKeyType_Bool&) = delete; \
	AIMODULE_API virtual ~UBlackboardKeyType_Bool();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_14_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardKeyType_Bool;

// ********** End Class UBlackboardKeyType_Bool ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Bool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
