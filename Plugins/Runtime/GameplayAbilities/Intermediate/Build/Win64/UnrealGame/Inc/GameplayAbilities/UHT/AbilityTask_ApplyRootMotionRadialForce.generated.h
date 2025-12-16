// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionRadialForce_generated_h
#error "AbilityTask_ApplyRootMotionRadialForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionRadialForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionRadialForce_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_ApplyRootMotionRadialForce;
class UCurveFloat;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;

// ********** Begin Delegate FApplyRootMotionRadialForceDelegate ***********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_17_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionRadialForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionRadialForceDelegate);


// ********** End Delegate FApplyRootMotionRadialForceDelegate *************************************

// ********** Begin Class UAbilityTask_ApplyRootMotionRadialForce **********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execApplyRootMotionRadialForce);


struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionRadialForce(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ApplyRootMotionRadialForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionRadialForce) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Location=NETFIELD_REP_START, \
		LocationActor, \
		Strength, \
		Duration, \
		Radius, \
		bIsPush, \
		bIsAdditive, \
		bNoZForce, \
		StrengthDistanceFalloff, \
		StrengthOverTime, \
		bUseFixedWorldDirection, \
		FixedWorldDirection, \
		NETFIELD_REP_END=FixedWorldDirection	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionRadialForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionRadialForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_ApplyRootMotionRadialForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionRadialForce); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotionRadialForce(UAbilityTask_ApplyRootMotionRadialForce&&) = delete; \
	UAbilityTask_ApplyRootMotionRadialForce(const UAbilityTask_ApplyRootMotionRadialForce&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_ApplyRootMotionRadialForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ApplyRootMotionRadialForce;

// ********** End Class UAbilityTask_ApplyRootMotionRadialForce ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
