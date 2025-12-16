// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbility.h"

#ifdef GAMEPLAYABILITIES_GameplayAbility_generated_h
#error "GameplayAbility.generated.h already included, missing '#pragma once' in GameplayAbility.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UClass;
class UGameplayEffect;
class UObject;
class USkeletalMeshComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityActorInfo;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin ScriptStruct FAbilityTriggerData ***********************************************
struct Z_Construct_UScriptStruct_FAbilityTriggerData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbilityTriggerData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FAbilityTriggerData;
// ********** End ScriptStruct FAbilityTriggerData *************************************************

// ********** Begin Class UGameplayAbility *********************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent); \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerActor); \
	DECLARE_FUNCTION(execMontageStop); \
	DECLARE_FUNCTION(execMontageSetNextSectionName); \
	DECLARE_FUNCTION(execMontageJumpToSection); \
	DECLARE_FUNCTION(execEndAbilityState); \
	DECLARE_FUNCTION(execCancelTaskByInstanceName); \
	DECLARE_FUNCTION(execEndTaskByInstanceName); \
	DECLARE_FUNCTION(execConfirmTaskByInstanceName); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithHandle); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithGrantedTags); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithAssetTags); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToOwner); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execK2_EndAbilityLocally); \
	DECLARE_FUNCTION(execK2_EndAbility); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execRemoveGrantedByEffect); \
	DECLARE_FUNCTION(execInvalidateClientPredictionKey); \
	DECLARE_FUNCTION(execGetSourceObject_BP); \
	DECLARE_FUNCTION(execGetCurrentSourceObject); \
	DECLARE_FUNCTION(execGetAbilityLevel_BP); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execK2_CheckAbilityCost); \
	DECLARE_FUNCTION(execK2_CheckAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbilityCost); \
	DECLARE_FUNCTION(execK2_CommitAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbility); \
	DECLARE_FUNCTION(execSetCanBeCanceled); \
	DECLARE_FUNCTION(execK2_CancelAbility); \
	DECLARE_FUNCTION(execSetShouldBlockOtherAbilities); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execK2_HasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execMakeOutgoingGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetContextFromOwner); \
	DECLARE_FUNCTION(execGetGrantedByEffectContext); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAvatarActorFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningActorFromActorInfo); \
	DECLARE_FUNCTION(execGetActorInfo);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayAbility_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbility(); \
	friend struct ::Z_Construct_UClass_UGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbility(UGameplayAbility&&) = delete; \
	UGameplayAbility(const UGameplayAbility&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbility();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbility;

// ********** End Class UGameplayAbility ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
