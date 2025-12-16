// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_MoveToLocation.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_MoveToLocation_generated_h
#error "AbilityTask_MoveToLocation.generated.h already included, missing '#pragma once' in AbilityTask_MoveToLocation.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_MoveToLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_MoveToLocation;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;

// ********** Begin Delegate FMoveToLocationDelegate ***********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_15_DELEGATE \
GAMEPLAYABILITIES_API void FMoveToLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& MoveToLocationDelegate);


// ********** End Delegate FMoveToLocationDelegate *************************************************

// ********** Begin Class UAbilityTask_MoveToLocation **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMoveToLocation);


struct Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveToLocation(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_MoveToLocation, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_MoveToLocation) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		DurationOfMovement, \
		LerpCurve, \
		LerpCurveVector, \
		NETFIELD_REP_END=LerpCurveVector	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API) \
private: \
	REPLICATED_BASE_CLASS(UAbilityTask_MoveToLocation) \
public:


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_MoveToLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveToLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_MoveToLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveToLocation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_MoveToLocation(UAbilityTask_MoveToLocation&&) = delete; \
	UAbilityTask_MoveToLocation(const UAbilityTask_MoveToLocation&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_MoveToLocation();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_MoveToLocation;

// ********** End Class UAbilityTask_MoveToLocation ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
