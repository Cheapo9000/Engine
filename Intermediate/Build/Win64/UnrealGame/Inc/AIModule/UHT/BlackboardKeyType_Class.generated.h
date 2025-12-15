// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyType_Class.h"

#ifdef AIMODULE_BlackboardKeyType_Class_generated_h
#error "BlackboardKeyType_Class.generated.h already included, missing '#pragma once' in BlackboardKeyType_Class.h"
#endif
#define AIMODULE_BlackboardKeyType_Class_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackboardKeyType_Class *************************************************
struct Z_Construct_UClass_UBlackboardKeyType_Class_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType_Class(); \
	friend struct ::Z_Construct_UClass_UBlackboardKeyType_Class_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardKeyType_Class, UBlackboardKeyType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardKeyType_Class)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardKeyType_Class(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType_Class) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardKeyType_Class); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType_Class); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardKeyType_Class(UBlackboardKeyType_Class&&) = delete; \
	UBlackboardKeyType_Class(const UBlackboardKeyType_Class&) = delete; \
	AIMODULE_API virtual ~UBlackboardKeyType_Class();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_14_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardKeyType_Class;

// ********** End Class UBlackboardKeyType_Class ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Class_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
