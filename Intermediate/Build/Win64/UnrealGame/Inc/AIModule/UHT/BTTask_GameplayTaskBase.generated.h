// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"

#ifdef AIMODULE_BTTask_GameplayTaskBase_generated_h
#error "BTTask_GameplayTaskBase.generated.h already included, missing '#pragma once' in BTTask_GameplayTaskBase.h"
#endif
#define AIMODULE_BTTask_GameplayTaskBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_GameplayTaskBase *************************************************
struct Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_GameplayTaskBase(); \
	friend struct ::Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_GameplayTaskBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_GameplayTaskBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_GameplayTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_GameplayTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_GameplayTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_GameplayTaskBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_GameplayTaskBase(UBTTask_GameplayTaskBase&&) = delete; \
	UBTTask_GameplayTaskBase(const UBTTask_GameplayTaskBase&) = delete; \
	AIMODULE_API virtual ~UBTTask_GameplayTaskBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_26_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_29_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_GameplayTaskBase;

// ********** End Class UBTTask_GameplayTaskBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
