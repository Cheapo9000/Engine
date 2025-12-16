// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemBlueprintLibrary.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemBlueprintLibrary_generated_h
#error "AbilitySystemBlueprintLibrary.generated.h already included, missing '#pragma once' in AbilitySystemBlueprintLibrary.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IGameplayCueInterface;
class UAbilitySystemComponent;
class UClass;
class UGameplayAbility;
class UGameplayEffect;
class UGameplayEffectUIData;
class UObject;
class UPhysicalMaterial;
class USceneComponent;
enum class EGameplayEffectDurationType : uint8;
enum class EGameplayTagReplicationState : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagChangedEventWrapperSpecHandle;
struct FGameplayTagContainer;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilter;
struct FGameplayTargetDataFilterHandle;
struct FHitResult;
struct FScalableFloat;

// ********** Begin Delegate FOnGameplayTagChangedEventWrapperSignature ****************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_DELEGATE \
GAMEPLAYABILITIES_API void FOnGameplayTagChangedEventWrapperSignature_DelegateWrapper(const FScriptDelegate& OnGameplayTagChangedEventWrapperSignature, FGameplayTag const& Tag, int32 TagCount);


// ********** End Delegate FOnGameplayTagChangedEventWrapperSignature ******************************

// ********** Begin ScriptStruct FGameplayTagChangedEventWrapperSpecHandle *************************
struct Z_Construct_UScriptStruct_FGameplayTagChangedEventWrapperSpecHandle_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagChangedEventWrapperSpecHandle_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayTagChangedEventWrapperSpecHandle;
// ********** End ScriptStruct FGameplayTagChangedEventWrapperSpecHandle ***************************

// ********** Begin Class UAbilitySystemBlueprintLibrary *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_RPC_WRAPPERS \
	DECLARE_FUNCTION(execConv_ScalableFloatToDouble); \
	DECLARE_FUNCTION(execConv_ScalableFloatToFloat); \
	DECLARE_FUNCTION(execNotEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execHasAnyAbilitiesWithAssetTag); \
	DECLARE_FUNCTION(execIsGameplayAbilityActive); \
	DECLARE_FUNCTION(execGetGameplayAbilityFromSpecHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectGrantedTags); \
	DECLARE_FUNCTION(execGetGameplayEffectAssetTags); \
	DECLARE_FUNCTION(execGetGameplayEffectFromActiveEffectHandle); \
	DECLARE_FUNCTION(execNotEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execEqualEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectUIData); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectDebugString); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectRemainingDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectTotalDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectExpectedEndTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStartTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackLimitCount); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackCount); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execIsActiveGameplayEffectHandleActive); \
	DECLARE_FUNCTION(execIsActiveGameplayEffectHandleValid); \
	DECLARE_FUNCTION(execGetModifiedAttributeMagnitude); \
	DECLARE_FUNCTION(execGetDurationPolicyFromGameplayEffectSpecHandle); \
	DECLARE_FUNCTION(execIsDurationGameplayEffectSpecHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectFromSpecHandle); \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTags); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTags); \
	DECLARE_FUNCTION(execGetAllLinkedGameplayEffectSpecHandles); \
	DECLARE_FUNCTION(execGetEffectContext); \
	DECLARE_FUNCTION(execSetStackCountToMax); \
	DECLARE_FUNCTION(execSetStackCount); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffect); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetAssetTags); \
	DECLARE_FUNCTION(execAddAssetTags); \
	DECLARE_FUNCTION(execAddAssetTag); \
	DECLARE_FUNCTION(execGetGrantedTags); \
	DECLARE_FUNCTION(execAddGrantedTags); \
	DECLARE_FUNCTION(execAddGrantedTag); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execAssignTagSetByCallerMagnitude); \
	DECLARE_FUNCTION(execAssignSetByCallerMagnitude); \
	DECLARE_FUNCTION(execBreakGameplayCueParameters); \
	DECLARE_FUNCTION(execMakeGameplayCueParameters); \
	DECLARE_FUNCTION(execDoesGameplayCueMeetTagRequirements); \
	DECLARE_FUNCTION(execGetGameplayCueDirection); \
	DECLARE_FUNCTION(execGetGameplayCueEndLocationAndNormal); \
	DECLARE_FUNCTION(execGetOrigin); \
	DECLARE_FUNCTION(execGetInstigatorTransform); \
	DECLARE_FUNCTION(execGetInstigatorActor); \
	DECLARE_FUNCTION(execForwardGameplayCueToTarget); \
	DECLARE_FUNCTION(execHasHitResult); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetActorByIndex); \
	DECLARE_FUNCTION(execGetActorCount); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlledPlayer); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextGetSourceObject); \
	DECLARE_FUNCTION(execEffectContextGetEffectCauser); \
	DECLARE_FUNCTION(execEffectContextGetOriginalInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextGetInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextSetOrigin); \
	DECLARE_FUNCTION(execEffectContextGetOrigin); \
	DECLARE_FUNCTION(execEffectContextAddHitResult); \
	DECLARE_FUNCTION(execEffectContextHasHitResult); \
	DECLARE_FUNCTION(execEffectContextGetHitResult); \
	DECLARE_FUNCTION(execEffectContextIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextIsValid); \
	DECLARE_FUNCTION(execGetTargetDataEndPointTransform); \
	DECLARE_FUNCTION(execGetTargetDataEndPoint); \
	DECLARE_FUNCTION(execTargetDataHasEndPoint); \
	DECLARE_FUNCTION(execGetTargetDataOrigin); \
	DECLARE_FUNCTION(execTargetDataHasOrigin); \
	DECLARE_FUNCTION(execGetHitResultFromTargetData); \
	DECLARE_FUNCTION(execTargetDataHasHitResult); \
	DECLARE_FUNCTION(execTargetDataHasActor); \
	DECLARE_FUNCTION(execDoesTargetDataContainActor); \
	DECLARE_FUNCTION(execGetAllActorsFromTargetData); \
	DECLARE_FUNCTION(execGetActorsFromTargetData); \
	DECLARE_FUNCTION(execCloneSpecHandle); \
	DECLARE_FUNCTION(execMakeSpecHandleByClass); \
	DECLARE_FUNCTION(execMakeSpecHandle); \
	DECLARE_FUNCTION(execMakeFilterHandle); \
	DECLARE_FUNCTION(execFilterTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActorArray); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActor); \
	DECLARE_FUNCTION(execGetDataCountFromTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromHitResult); \
	DECLARE_FUNCTION(execAbilityTargetDataFromLocations); \
	DECLARE_FUNCTION(execAppendTargetDataHandle); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayAttribute); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTagsAndBase); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTags); \
	DECLARE_FUNCTION(execGetFloatAttributeBaseFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttributeBase); \
	DECLARE_FUNCTION(execGetFloatAttributeFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnbindGameplayTagChangedEventWrapperForHandle); \
	DECLARE_FUNCTION(execUnbindAllGameplayTagChangedEventWrappersForHandle); \
	DECLARE_FUNCTION(execBindEventWrapperToAnyOfGameplayTagContainerChanged); \
	DECLARE_FUNCTION(execBindEventWrapperToAnyOfGameplayTagsChanged); \
	DECLARE_FUNCTION(execBindEventWrapperToGameplayTagChanged); \
	DECLARE_FUNCTION(execSendGameplayEventToActor); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


struct Z_Construct_UClass_UAbilitySystemBlueprintLibrary_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemBlueprintLibrary(UAbilitySystemBlueprintLibrary&&) = delete; \
	UAbilitySystemBlueprintLibrary(const UAbilitySystemBlueprintLibrary&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilitySystemBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemBlueprintLibrary;

// ********** End Class UAbilitySystemBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
