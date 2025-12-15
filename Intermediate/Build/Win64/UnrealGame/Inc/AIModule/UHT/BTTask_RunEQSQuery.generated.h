// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_RunEQSQuery.h"

#ifdef AIMODULE_BTTask_RunEQSQuery_generated_h
#error "BTTask_RunEQSQuery.generated.h already included, missing '#pragma once' in BTTask_RunEQSQuery.h"
#endif
#define AIMODULE_BTTask_RunEQSQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_RunEQSQuery ******************************************************
struct Z_Construct_UClass_UBTTask_RunEQSQuery_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_RunEQSQuery(); \
	friend struct ::Z_Construct_UClass_UBTTask_RunEQSQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_RunEQSQuery, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_RunEQSQuery)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_RunEQSQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_RunEQSQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_RunEQSQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_RunEQSQuery); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_RunEQSQuery(UBTTask_RunEQSQuery&&) = delete; \
	UBTTask_RunEQSQuery(const UBTTask_RunEQSQuery&) = delete; \
	AIMODULE_API virtual ~UBTTask_RunEQSQuery();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_24_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_27_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_RunEQSQuery;

// ********** End Class UBTTask_RunEQSQuery ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
