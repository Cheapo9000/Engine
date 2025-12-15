// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"

#ifdef AIMODULE_BTTask_BlackboardBase_generated_h
#error "BTTask_BlackboardBase.generated.h already included, missing '#pragma once' in BTTask_BlackboardBase.h"
#endif
#define AIMODULE_BTTask_BlackboardBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_BlackboardBase ***************************************************
struct Z_Construct_UClass_UBTTask_BlackboardBase_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_BlackboardBase(); \
	friend struct ::Z_Construct_UClass_UBTTask_BlackboardBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_BlackboardBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_BlackboardBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_BlackboardBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlackboardBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_BlackboardBase(UBTTask_BlackboardBase&&) = delete; \
	UBTTask_BlackboardBase(const UBTTask_BlackboardBase&) = delete; \
	AIMODULE_API virtual ~UBTTask_BlackboardBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_BlackboardBase;

// ********** End Class UBTTask_BlackboardBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
