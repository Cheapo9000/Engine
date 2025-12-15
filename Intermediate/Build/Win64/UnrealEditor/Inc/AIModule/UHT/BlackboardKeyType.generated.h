// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyType.h"

#ifdef AIMODULE_BlackboardKeyType_generated_h
#error "BlackboardKeyType.generated.h already included, missing '#pragma once' in BlackboardKeyType.h"
#endif
#define AIMODULE_BlackboardKeyType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackboardKeyType *******************************************************
struct Z_Construct_UClass_UBlackboardKeyType_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType(); \
	friend struct ::Z_Construct_UClass_UBlackboardKeyType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBlackboardKeyType_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardKeyType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBlackboardKeyType_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardKeyType)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardKeyType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardKeyType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardKeyType(UBlackboardKeyType&&) = delete; \
	UBlackboardKeyType(const UBlackboardKeyType&) = delete; \
	AIMODULE_API virtual ~UBlackboardKeyType();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_22_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_25_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardKeyType;

// ********** End Class UBlackboardKeyType *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
