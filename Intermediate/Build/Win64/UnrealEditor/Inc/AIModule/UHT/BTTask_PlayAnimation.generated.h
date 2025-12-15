// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_PlayAnimation.h"

#ifdef AIMODULE_BTTask_PlayAnimation_generated_h
#error "BTTask_PlayAnimation.generated.h already included, missing '#pragma once' in BTTask_PlayAnimation.h"
#endif
#define AIMODULE_BTTask_PlayAnimation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_PlayAnimation ****************************************************
struct Z_Construct_UClass_UBTTask_PlayAnimation_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_PlayAnimation(); \
	friend struct ::Z_Construct_UClass_UBTTask_PlayAnimation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_PlayAnimation, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_PlayAnimation)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_PlayAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PlayAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_PlayAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PlayAnimation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_PlayAnimation(UBTTask_PlayAnimation&&) = delete; \
	UBTTask_PlayAnimation(const UBTTask_PlayAnimation&) = delete; \
	AIMODULE_API virtual ~UBTTask_PlayAnimation();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_PlayAnimation;

// ********** End Class UBTTask_PlayAnimation ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
