// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagQuery_generated_h
#error "AbilityTask_WaitGameplayTagQuery.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTagQuery.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayTagQuery;
class UGameplayAbility;
enum class EWaitGameplayTagQueryTriggerCondition : uint8;
struct FGameplayTag;
struct FGameplayTagQuery;

// ********** Begin Delegate FWaitGameplayTagQueryDelegate *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_10_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagQueryDelegate);


// ********** End Delegate FWaitGameplayTagQueryDelegate *******************************************

// ********** Begin Class UAbilityTask_WaitGameplayTagQuery ****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTargetTags); \
	DECLARE_FUNCTION(execWaitGameplayTagQuery);


struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagQuery(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitGameplayTagQuery, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitGameplayTagQuery(UAbilityTask_WaitGameplayTagQuery&&) = delete; \
	UAbilityTask_WaitGameplayTagQuery(const UAbilityTask_WaitGameplayTagQuery&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagQuery) \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitGameplayTagQuery;

// ********** End Class UAbilityTask_WaitGameplayTagQuery ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h

// ********** Begin Enum EWaitGameplayTagQueryTriggerCondition *************************************
#define FOREACH_ENUM_EWAITGAMEPLAYTAGQUERYTRIGGERCONDITION(op) \
	op(EWaitGameplayTagQueryTriggerCondition::WhenTrue) \
	op(EWaitGameplayTagQueryTriggerCondition::WhenFalse) 

enum class EWaitGameplayTagQueryTriggerCondition : uint8;
template<> struct TIsUEnumClass<EWaitGameplayTagQueryTriggerCondition> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaitGameplayTagQueryTriggerCondition>();
// ********** End Enum EWaitGameplayTagQueryTriggerCondition ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
