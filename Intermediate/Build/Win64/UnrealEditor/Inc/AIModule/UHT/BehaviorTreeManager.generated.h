// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviorTreeManager.h"

#ifdef AIMODULE_BehaviorTreeManager_generated_h
#error "BehaviorTreeManager.generated.h already included, missing '#pragma once' in BehaviorTreeManager.h"
#endif
#define AIMODULE_BehaviorTreeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBehaviorTreeTemplateInfo *****************************************
struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FBehaviorTreeTemplateInfo;
// ********** End ScriptStruct FBehaviorTreeTemplateInfo *******************************************

// ********** Begin Class UBehaviorTreeManager *****************************************************
struct Z_Construct_UClass_UBehaviorTreeManager_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeManager(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBehaviorTreeManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBehaviorTreeManager_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeManager)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBehaviorTreeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBehaviorTreeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeManager(UBehaviorTreeManager&&) = delete; \
	UBehaviorTreeManager(const UBehaviorTreeManager&) = delete; \
	AIMODULE_API virtual ~UBehaviorTreeManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeManager;

// ********** End Class UBehaviorTreeManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
