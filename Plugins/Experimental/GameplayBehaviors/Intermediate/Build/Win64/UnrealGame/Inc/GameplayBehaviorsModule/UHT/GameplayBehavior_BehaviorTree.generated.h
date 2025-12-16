// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/GameplayBehavior_BehaviorTree.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_BehaviorTree_generated_h
#error "GameplayBehavior_BehaviorTree.generated.h already included, missing '#pragma once' in GameplayBehavior_BehaviorTree.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_BehaviorTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;

// ********** Begin Class UGameplayBehavior_BehaviorTree *******************************************
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPossessedPawnChanged);


struct Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_BehaviorTree_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehavior_BehaviorTree(); \
	friend struct ::Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehavior_BehaviorTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehavior_BehaviorTree, UGameplayBehavior, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehavior_BehaviorTree_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehavior_BehaviorTree)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehavior_BehaviorTree(UGameplayBehavior_BehaviorTree&&) = delete; \
	UGameplayBehavior_BehaviorTree(const UGameplayBehavior_BehaviorTree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehavior_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior_BehaviorTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior_BehaviorTree) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehavior_BehaviorTree();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehavior_BehaviorTree;

// ********** End Class UGameplayBehavior_BehaviorTree *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
