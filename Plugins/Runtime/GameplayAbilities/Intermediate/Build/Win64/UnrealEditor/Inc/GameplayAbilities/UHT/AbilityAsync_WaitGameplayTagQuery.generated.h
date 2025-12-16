// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagQuery_generated_h
#error "AbilityAsync_WaitGameplayTagQuery.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayTagQuery.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayTagQuery;
enum class EWaitGameplayTagQueryTriggerCondition : uint8;
struct FGameplayTagQuery;

// ********** Begin Delegate FAsyncWaitGameplayTagQueryDelegate ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_13_DELEGATE \
GAMEPLAYABILITIES_API void FAsyncWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagQueryDelegate);


// ********** End Delegate FAsyncWaitGameplayTagQueryDelegate **************************************

// ********** Begin Class UAbilityAsync_WaitGameplayTagQuery ***************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayTagQueryOnActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagQuery(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayTagQuery, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayTagQuery(UAbilityAsync_WaitGameplayTagQuery&&) = delete; \
	UAbilityAsync_WaitGameplayTagQuery(const UAbilityAsync_WaitGameplayTagQuery&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagQuery) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayTagQuery;

// ********** End Class UAbilityAsync_WaitGameplayTagQuery *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
