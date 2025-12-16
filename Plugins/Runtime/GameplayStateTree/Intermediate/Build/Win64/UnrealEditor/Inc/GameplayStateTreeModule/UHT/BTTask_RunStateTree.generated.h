// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_RunStateTree.h"

#ifdef GAMEPLAYSTATETREEMODULE_BTTask_RunStateTree_generated_h
#error "BTTask_RunStateTree.generated.h already included, missing '#pragma once' in BTTask_RunStateTree.h"
#endif
#define GAMEPLAYSTATETREEMODULE_BTTask_RunStateTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_RunStateTree *****************************************************
struct Z_Construct_UClass_UBTTask_RunStateTree_Statics;
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UBTTask_RunStateTree_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_RunStateTree(); \
	friend struct ::Z_Construct_UClass_UBTTask_RunStateTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYSTATETREEMODULE_API UClass* ::Z_Construct_UClass_UBTTask_RunStateTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_RunStateTree, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), Z_Construct_UClass_UBTTask_RunStateTree_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_RunStateTree) \
	virtual UObject* _getUObject() const override { return const_cast<UBTTask_RunStateTree*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_RunStateTree(UBTTask_RunStateTree&&) = delete; \
	UBTTask_RunStateTree(const UBTTask_RunStateTree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYSTATETREEMODULE_API, UBTTask_RunStateTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_RunStateTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_RunStateTree) \
	GAMEPLAYSTATETREEMODULE_API virtual ~UBTTask_RunStateTree();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_RunStateTree;

// ********** End Class UBTTask_RunStateTree *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_BehaviorTree_Tasks_BTTask_RunStateTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
