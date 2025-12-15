// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_MoveTo.h"

#ifdef AIMODULE_BTTask_MoveTo_generated_h
#error "BTTask_MoveTo.generated.h already included, missing '#pragma once' in BTTask_MoveTo.h"
#endif
#define AIMODULE_BTTask_MoveTo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_MoveTo ***********************************************************
struct Z_Construct_UClass_UBTTask_MoveTo_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_MoveTo(); \
	friend struct ::Z_Construct_UClass_UBTTask_MoveTo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_MoveTo_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_MoveTo, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_MoveTo_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_MoveTo) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_MoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_MoveTo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_MoveTo(UBTTask_MoveTo&&) = delete; \
	UBTTask_MoveTo(const UBTTask_MoveTo&) = delete; \
	AIMODULE_API virtual ~UBTTask_MoveTo();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_38_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_41_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_MoveTo;

// ********** End Class UBTTask_MoveTo *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
