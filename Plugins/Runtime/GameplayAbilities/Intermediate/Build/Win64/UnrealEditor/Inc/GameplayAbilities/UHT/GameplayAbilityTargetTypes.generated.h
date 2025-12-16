// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetTypes.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h
#error "GameplayAbilityTargetTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTargetTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityTargetData ****************************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityTargetData;
// ********** End ScriptStruct FGameplayAbilityTargetData ******************************************

// ********** Begin ScriptStruct FGameplayAbilityTargetDataHandle **********************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityTargetDataHandle;
// ********** End ScriptStruct FGameplayAbilityTargetDataHandle ************************************

// ********** Begin ScriptStruct FGameplayAbilityTargetingLocationInfo *****************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityTargetingLocationInfo;
// ********** End ScriptStruct FGameplayAbilityTargetingLocationInfo *******************************

// ********** Begin ScriptStruct FGameplayAbilityTargetData_LocationInfo ***************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_392_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


struct FGameplayAbilityTargetData_LocationInfo;
// ********** End ScriptStruct FGameplayAbilityTargetData_LocationInfo *****************************

// ********** Begin ScriptStruct FGameplayAbilityTargetData_ActorArray *****************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_459_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


struct FGameplayAbilityTargetData_ActorArray;
// ********** End ScriptStruct FGameplayAbilityTargetData_ActorArray *******************************

// ********** Begin ScriptStruct FGameplayAbilityTargetData_SingleTargetHit ************************
struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_562_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


struct FGameplayAbilityTargetData_SingleTargetHit;
// ********** End ScriptStruct FGameplayAbilityTargetData_SingleTargetHit **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h

// ********** Begin Enum EGameplayTargetingConfirmation ********************************************
#define FOREACH_ENUM_EGAMEPLAYTARGETINGCONFIRMATION(op) \
	op(EGameplayTargetingConfirmation::Instant) \
	op(EGameplayTargetingConfirmation::UserConfirmed) \
	op(EGameplayTargetingConfirmation::Custom) \
	op(EGameplayTargetingConfirmation::CustomMulti) 

namespace EGameplayTargetingConfirmation { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTargetingConfirmation::Type>();
// ********** End Enum EGameplayTargetingConfirmation **********************************************

// ********** Begin Enum EGameplayAbilityTargetingLocationType *************************************
#define FOREACH_ENUM_EGAMEPLAYABILITYTARGETINGLOCATIONTYPE(op) \
	op(EGameplayAbilityTargetingLocationType::LiteralTransform) \
	op(EGameplayAbilityTargetingLocationType::ActorTransform) \
	op(EGameplayAbilityTargetingLocationType::SocketTransform) 

namespace EGameplayAbilityTargetingLocationType { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayAbilityTargetingLocationType::Type>();
// ********** End Enum EGameplayAbilityTargetingLocationType ***************************************

// ********** Begin Enum EAbilityGenericReplicatedEvent ********************************************
#define FOREACH_ENUM_EABILITYGENERICREPLICATEDEVENT(op) \
	op(EAbilityGenericReplicatedEvent::GenericConfirm) \
	op(EAbilityGenericReplicatedEvent::GenericCancel) \
	op(EAbilityGenericReplicatedEvent::InputPressed) \
	op(EAbilityGenericReplicatedEvent::InputReleased) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromClient) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromServer) \
	op(EAbilityGenericReplicatedEvent::GameCustom1) \
	op(EAbilityGenericReplicatedEvent::GameCustom2) \
	op(EAbilityGenericReplicatedEvent::GameCustom3) \
	op(EAbilityGenericReplicatedEvent::GameCustom4) \
	op(EAbilityGenericReplicatedEvent::GameCustom5) \
	op(EAbilityGenericReplicatedEvent::GameCustom6) 

namespace EAbilityGenericReplicatedEvent { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityGenericReplicatedEvent::Type>();
// ********** End Enum EAbilityGenericReplicatedEvent **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
