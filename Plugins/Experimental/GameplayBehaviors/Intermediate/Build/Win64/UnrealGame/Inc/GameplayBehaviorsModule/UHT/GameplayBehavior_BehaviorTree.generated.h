// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/GameplayBehavior_BehaviorTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_BehaviorTree_generated_h
#error "GameplayBehavior_BehaviorTree.generated.h already included, missing '#pragma once' in GameplayBehavior_BehaviorTree.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_BehaviorTree_generated_h

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPossessedPawnChanged);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehavior_BehaviorTree(); \
	friend struct Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UGameplayBehavior_BehaviorTree, UGameplayBehavior, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayBehavior_BehaviorTree)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayBehavior_BehaviorTree(UGameplayBehavior_BehaviorTree&&); \
	UGameplayBehavior_BehaviorTree(const UGameplayBehavior_BehaviorTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayBehavior_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior_BehaviorTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior_BehaviorTree) \
	NO_API virtual ~UGameplayBehavior_BehaviorTree();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<class UGameplayBehavior_BehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
