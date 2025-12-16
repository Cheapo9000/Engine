// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTypes.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h
#error "GameplayAbilityTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityActorInfo *****************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityActorInfo;
// ********** End ScriptStruct FGameplayAbilityActorInfo *******************************************

// ********** Begin ScriptStruct FGameplayAbilityLocalAnimMontage **********************************
struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityLocalAnimMontage;
// ********** End ScriptStruct FGameplayAbilityLocalAnimMontage ************************************

// ********** Begin ScriptStruct FGameplayEventData ************************************************
struct Z_Construct_UScriptStruct_FGameplayEventData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_235_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayEventData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayEventData;
// ********** End ScriptStruct FGameplayEventData **************************************************

// ********** Begin ScriptStruct FAbilityEndedData *************************************************
struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_298_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbilityEndedData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FAbilityEndedData;
// ********** End ScriptStruct FAbilityEndedData ***************************************************

// ********** Begin ScriptStruct FAttributeDefaults ************************************************
struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_412_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAttributeDefaults_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FAttributeDefaults;
// ********** End ScriptStruct FAttributeDefaults **************************************************

// ********** Begin ScriptStruct FAbilityTaskDebugMessage ******************************************
struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_430_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FAbilityTaskDebugMessage;
// ********** End ScriptStruct FAbilityTaskDebugMessage ********************************************

// ********** Begin ScriptStruct FServerAbilityRPCBatch ********************************************
struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_454_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FServerAbilityRPCBatch;
// ********** End ScriptStruct FServerAbilityRPCBatch **********************************************

// ********** Begin ScriptStruct FGameplayAbilitySpecHandleAndPredictionKey ************************
struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_506_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilitySpecHandleAndPredictionKey;
// ********** End ScriptStruct FGameplayAbilitySpecHandleAndPredictionKey **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h

// ********** Begin Enum EGameplayAbilityInstancingPolicy ******************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYINSTANCINGPOLICY(op) \
	op(EGameplayAbilityInstancingPolicy::NonInstanced) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerActor) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerExecution) 

namespace EGameplayAbilityInstancingPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityInstancingPolicy::Type>();
// ********** End Enum EGameplayAbilityInstancingPolicy ********************************************

// ********** Begin Enum EGameplayAbilityNetExecutionPolicy ****************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYNETEXECUTIONPOLICY(op) \
	op(EGameplayAbilityNetExecutionPolicy::LocalPredicted) \
	op(EGameplayAbilityNetExecutionPolicy::LocalOnly) \
	op(EGameplayAbilityNetExecutionPolicy::ServerInitiated) \
	op(EGameplayAbilityNetExecutionPolicy::ServerOnly) 

namespace EGameplayAbilityNetExecutionPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityNetExecutionPolicy::Type>();
// ********** End Enum EGameplayAbilityNetExecutionPolicy ******************************************

// ********** Begin Enum EGameplayAbilityNetSecurityPolicy *****************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYNETSECURITYPOLICY(op) \
	op(EGameplayAbilityNetSecurityPolicy::ClientOrServer) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnly) 

namespace EGameplayAbilityNetSecurityPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityNetSecurityPolicy::Type>();
// ********** End Enum EGameplayAbilityNetSecurityPolicy *******************************************

// ********** Begin Enum EGameplayAbilityReplicationPolicy *****************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYREPLICATIONPOLICY(op) \
	op(EGameplayAbilityReplicationPolicy::ReplicateNo) \
	op(EGameplayAbilityReplicationPolicy::ReplicateYes) 

namespace EGameplayAbilityReplicationPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityReplicationPolicy::Type>();
// ********** End Enum EGameplayAbilityReplicationPolicy *******************************************

// ********** Begin Enum EGameplayAbilityTriggerSource *********************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYTRIGGERSOURCE(op) \
	op(EGameplayAbilityTriggerSource::GameplayEvent) \
	op(EGameplayAbilityTriggerSource::OwnedTagAdded) \
	op(EGameplayAbilityTriggerSource::OwnedTagPresent) 

namespace EGameplayAbilityTriggerSource { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityTriggerSource::Type>();
// ********** End Enum EGameplayAbilityTriggerSource ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
