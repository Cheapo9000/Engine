// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"

#ifdef AIMODULE_BTTask_MoveDirectlyToward_generated_h
#error "BTTask_MoveDirectlyToward.generated.h already included, missing '#pragma once' in BTTask_MoveDirectlyToward.h"
#endif
#define AIMODULE_BTTask_MoveDirectlyToward_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_MoveDirectlyToward ***********************************************
struct Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_MoveDirectlyToward(); \
	friend struct ::Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_MoveDirectlyToward, UBTTask_MoveTo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_MoveDirectlyToward)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_MoveDirectlyToward(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_MoveDirectlyToward) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_MoveDirectlyToward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_MoveDirectlyToward); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_MoveDirectlyToward(UBTTask_MoveDirectlyToward&&) = delete; \
	UBTTask_MoveDirectlyToward(const UBTTask_MoveDirectlyToward&) = delete; \
	AIMODULE_API virtual ~UBTTask_MoveDirectlyToward();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_MoveDirectlyToward;

// ********** End Class UBTTask_MoveDirectlyToward *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
