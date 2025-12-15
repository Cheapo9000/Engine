// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h"

#ifdef AIMODULE_BTDecorator_ReachedMoveGoal_generated_h
#error "BTDecorator_ReachedMoveGoal.generated.h already included, missing '#pragma once' in BTDecorator_ReachedMoveGoal.h"
#endif
#define AIMODULE_BTDecorator_ReachedMoveGoal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTDecorator_ReachedMoveGoal *********************************************
struct Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_ReachedMoveGoal(); \
	friend struct ::Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTDecorator_ReachedMoveGoal, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister) \
	DECLARE_SERIALIZER(UBTDecorator_ReachedMoveGoal)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_ReachedMoveGoal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_ReachedMoveGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_ReachedMoveGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_ReachedMoveGoal); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTDecorator_ReachedMoveGoal(UBTDecorator_ReachedMoveGoal&&) = delete; \
	UBTDecorator_ReachedMoveGoal(const UBTDecorator_ReachedMoveGoal&) = delete; \
	AIMODULE_API virtual ~UBTDecorator_ReachedMoveGoal();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTDecorator_ReachedMoveGoal;

// ********** End Class UBTDecorator_ReachedMoveGoal ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
