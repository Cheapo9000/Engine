// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemComponent.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemComponent_generated_h
#error "AbilitySystemComponent.generated.h already included, missing '#pragma once' in AbilitySystemComponent.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UAnimSequenceBase;
class UAttributeSet;
class UClass;
class UDataTable;
class UGameplayAbility;
class UGameplayEffect;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityActivationInfo;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectQuery;
struct FGameplayEffectSpecForRPC;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FPredictionKey;
struct FServerAbilityRPCBatch;
struct FVector_NetQuantize100;

// ********** Begin Delegate FAbilityAbilityKey ****************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_113_DELEGATE \
static GAMEPLAYABILITIES_API void FAbilityAbilityKey_DelegateWrapper(const FMulticastScriptDelegate& AbilityAbilityKey, int32 InputID);


// ********** End Delegate FAbilityAbilityKey ******************************************************

// ********** Begin Delegate FAbilityConfirmOrCancel ***********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_116_DELEGATE \
static GAMEPLAYABILITIES_API void FAbilityConfirmOrCancel_DelegateWrapper(const FMulticastScriptDelegate& AbilityConfirmOrCancel);


// ********** End Delegate FAbilityConfirmOrCancel *************************************************

// ********** Begin Class UAbilitySystemComponent **************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_RPC_WRAPPERS \
	GAMEPLAYABILITIES_API virtual bool ServerCurrentMontageSetPlayRate_Validate(UAnimSequenceBase* , float ); \
	GAMEPLAYABILITIES_API virtual void ServerCurrentMontageSetPlayRate_Implementation(UAnimSequenceBase* ClientAnimation, float InPlayRate); \
	GAMEPLAYABILITIES_API virtual bool ServerCurrentMontageJumpToSectionName_Validate(UAnimSequenceBase* , FName ); \
	GAMEPLAYABILITIES_API virtual void ServerCurrentMontageJumpToSectionName_Implementation(UAnimSequenceBase* ClientAnimation, FName SectionName); \
	GAMEPLAYABILITIES_API virtual bool ServerCurrentMontageSetNextSectionName_Validate(UAnimSequenceBase* , float , FName , FName ); \
	GAMEPLAYABILITIES_API virtual void ServerCurrentMontageSetNextSectionName_Implementation(UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName); \
	GAMEPLAYABILITIES_API virtual void ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	GAMEPLAYABILITIES_API virtual void ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); \
	GAMEPLAYABILITIES_API virtual void ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey); \
	GAMEPLAYABILITIES_API virtual void ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	GAMEPLAYABILITIES_API virtual bool ServerCancelAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo ); \
	GAMEPLAYABILITIES_API virtual void ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	GAMEPLAYABILITIES_API virtual void ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); \
	GAMEPLAYABILITIES_API virtual bool ServerEndAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo , FPredictionKey ); \
	GAMEPLAYABILITIES_API virtual void ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); \
	GAMEPLAYABILITIES_API virtual void ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate); \
	GAMEPLAYABILITIES_API virtual bool ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey , FGameplayEventData ); \
	GAMEPLAYABILITIES_API virtual void ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	GAMEPLAYABILITIES_API virtual bool ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey ); \
	GAMEPLAYABILITIES_API virtual void ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); \
	GAMEPLAYABILITIES_API virtual bool ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle ); \
	GAMEPLAYABILITIES_API virtual void ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	GAMEPLAYABILITIES_API virtual bool ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle ); \
	GAMEPLAYABILITIES_API virtual void ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	GAMEPLAYABILITIES_API virtual bool ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	GAMEPLAYABILITIES_API virtual void ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	GAMEPLAYABILITIES_API virtual bool ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FGameplayAbilityTargetDataHandle const& , FGameplayTag , FPredictionKey ); \
	GAMEPLAYABILITIES_API virtual void ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle const& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); \
	GAMEPLAYABILITIES_API virtual void ClientSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); \
	GAMEPLAYABILITIES_API virtual bool ServerSetReplicatedEventWithPayload_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey , FVector_NetQuantize100 ); \
	GAMEPLAYABILITIES_API virtual void ServerSetReplicatedEventWithPayload_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); \
	GAMEPLAYABILITIES_API virtual bool ServerSetReplicatedEvent_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	GAMEPLAYABILITIES_API virtual void ServerSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	GAMEPLAYABILITIES_API virtual bool ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch ); \
	GAMEPLAYABILITIES_API virtual void ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo); \
	GAMEPLAYABILITIES_API virtual void ClientPrintDebug_Response_Implementation(TArray<FString> const& Strings, int32 GameFlags); \
	GAMEPLAYABILITIES_API virtual bool ServerPrintDebug_RequestWithStrings_Validate(TArray<FString> const& ); \
	GAMEPLAYABILITIES_API virtual void ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString> const& Strings); \
	GAMEPLAYABILITIES_API virtual bool ServerPrintDebug_Request_Validate(); \
	GAMEPLAYABILITIES_API virtual void ServerPrintDebug_Request_Implementation(); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(FGameplayEffectSpecForRPC const& Spec, FPredictionKey PredictionKey); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	GAMEPLAYABILITIES_API virtual void NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); \
	DECLARE_FUNCTION(execOnRep_SpawnedAttributes); \
	DECLARE_FUNCTION(execServerCurrentMontageSetPlayRate); \
	DECLARE_FUNCTION(execServerCurrentMontageJumpToSectionName); \
	DECLARE_FUNCTION(execServerCurrentMontageSetNextSectionName); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAnimMontage); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceedWithEventData); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceed); \
	DECLARE_FUNCTION(execClientActivateAbilityFailed); \
	DECLARE_FUNCTION(execClientCancelAbility); \
	DECLARE_FUNCTION(execServerCancelAbility); \
	DECLARE_FUNCTION(execClientEndAbility); \
	DECLARE_FUNCTION(execServerEndAbility); \
	DECLARE_FUNCTION(execClientTryActivateAbility); \
	DECLARE_FUNCTION(execServerTryActivateAbilityWithEventData); \
	DECLARE_FUNCTION(execServerTryActivateAbility); \
	DECLARE_FUNCTION(execOnRep_ActivateAbilities); \
	DECLARE_FUNCTION(execServerSetInputReleased); \
	DECLARE_FUNCTION(execServerSetInputPressed); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetDataCancelled); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetData); \
	DECLARE_FUNCTION(execClientSetReplicatedEvent); \
	DECLARE_FUNCTION(execServerSetReplicatedEventWithPayload); \
	DECLARE_FUNCTION(execServerSetReplicatedEvent); \
	DECLARE_FUNCTION(execOnSpawnedAttributesEndPlayed); \
	DECLARE_FUNCTION(execOnOwnerActorDestroyed); \
	DECLARE_FUNCTION(execOnAvatarActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_OwningActor); \
	DECLARE_FUNCTION(execTargetCancel); \
	DECLARE_FUNCTION(execTargetConfirm); \
	DECLARE_FUNCTION(execInputCancel); \
	DECLARE_FUNCTION(execInputConfirm); \
	DECLARE_FUNCTION(execReleaseInputID); \
	DECLARE_FUNCTION(execPressInputID); \
	DECLARE_FUNCTION(execSetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execGetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execServerAbilityRPCBatch); \
	DECLARE_FUNCTION(execOnRep_ServerDebugString); \
	DECLARE_FUNCTION(execOnRep_ClientDebugString); \
	DECLARE_FUNCTION(execClientPrintDebug_Response); \
	DECLARE_FUNCTION(execServerPrintDebug_RequestWithStrings); \
	DECLARE_FUNCTION(execServerPrintDebug_Request); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execFindAllAbilitiesMatchingQuery); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithTags); \
	DECLARE_FUNCTION(execGetAllAbilities); \
	DECLARE_FUNCTION(execTryActivateAbility); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilitiesByTag); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execClearAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execClearAllAbilities); \
	DECLARE_FUNCTION(execK2_GiveAbilityAndActivateOnce); \
	DECLARE_FUNCTION(execK2_GiveAbility); \
	DECLARE_FUNCTION(execIsGameplayCueActive); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_FromSpec); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithGrantedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithAppliedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithSourceTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTags); \
	DECLARE_FUNCTION(execGetActiveEffectsWithAllTags); \
	DECLARE_FUNCTION(execGetActiveEffects); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execGetGameplayEffectMagnitude); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevelUsingQuery); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevel); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitudes); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitude); \
	DECLARE_FUNCTION(execGetGameplayEffectCount_IfLoaded); \
	DECLARE_FUNCTION(execGetGameplayEffectCount); \
	DECLARE_FUNCTION(execMakeEffectContext); \
	DECLARE_FUNCTION(execMakeOutgoingSpec); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffectBySourceEffect); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffect); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execGetGameplayAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execK2_InitStats);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAbilitySystemComponent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponent(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilitySystemComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ClientDebugStrings=NETFIELD_REP_START, \
		ServerDebugStrings, \
		OwnerActor, \
		AvatarActor, \
		ActivatableAbilities, \
		RepAnimMontageInfo, \
		ActiveGameplayEffects, \
		ActiveGameplayCues, \
		MinimalReplicationGameplayCues, \
		GameplayTagCountContainer, \
		BlockedAbilityBindings, \
		MinimalReplicationTags, \
		SpawnedAttributes, \
		ReplicatedLooseTags, \
		ReplicatedPredictionKeyMap, \
		NETFIELD_REP_END=ReplicatedPredictionKeyMap	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemComponent(UAbilitySystemComponent&&) = delete; \
	UAbilitySystemComponent(const UAbilitySystemComponent&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilitySystemComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_107_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemComponent;

// ********** End Class UAbilitySystemComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h

// ********** Begin Enum EGameplayEffectReplicationMode ********************************************
#define FOREACH_ENUM_EGAMEPLAYEFFECTREPLICATIONMODE(op) \
	op(EGameplayEffectReplicationMode::Minimal) \
	op(EGameplayEffectReplicationMode::Mixed) \
	op(EGameplayEffectReplicationMode::Full) 

enum class EGameplayEffectReplicationMode : uint8;
template<> struct TIsUEnumClass<EGameplayEffectReplicationMode> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayEffectReplicationMode>();
// ********** End Enum EGameplayEffectReplicationMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
