// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"

#ifdef AIMODULE_BTTask_RunBehaviorDynamic_generated_h
#error "BTTask_RunBehaviorDynamic.generated.h already included, missing '#pragma once' in BTTask_RunBehaviorDynamic.h"
#endif
#define AIMODULE_BTTask_RunBehaviorDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_RunBehaviorDynamic ***********************************************
struct Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_RunBehaviorDynamic(); \
	friend struct ::Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_RunBehaviorDynamic, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_RunBehaviorDynamic)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_RunBehaviorDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_RunBehaviorDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_RunBehaviorDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_RunBehaviorDynamic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_RunBehaviorDynamic(UBTTask_RunBehaviorDynamic&&) = delete; \
	UBTTask_RunBehaviorDynamic(const UBTTask_RunBehaviorDynamic&) = delete; \
	AIMODULE_API virtual ~UBTTask_RunBehaviorDynamic();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_RunBehaviorDynamic;

// ********** End Class UBTTask_RunBehaviorDynamic *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
