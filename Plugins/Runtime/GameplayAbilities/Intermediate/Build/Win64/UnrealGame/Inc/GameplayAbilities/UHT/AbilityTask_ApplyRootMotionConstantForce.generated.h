// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionConstantForce_generated_h
#error "AbilityTask_ApplyRootMotionConstantForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionConstantForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionConstantForce_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionConstantForce;
class UCurveFloat;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;

// ********** Begin Delegate FApplyRootMotionConstantForceDelegate *********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_16_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionConstantForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionConstantForceDelegate);


// ********** End Delegate FApplyRootMotionConstantForceDelegate ***********************************

// ********** Begin Class UAbilityTask_ApplyRootMotionConstantForce ********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execApplyRootMotionConstantForce);


struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionConstantForce(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ApplyRootMotionConstantForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionConstantForce) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorldDirection=NETFIELD_REP_START, \
		Strength, \
		Duration, \
		bIsAdditive, \
		StrengthOverTime, \
		bEnableGravity, \
		NETFIELD_REP_END=bEnableGravity	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionConstantForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionConstantForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_ApplyRootMotionConstantForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionConstantForce); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotionConstantForce(UAbilityTask_ApplyRootMotionConstantForce&&) = delete; \
	UAbilityTask_ApplyRootMotionConstantForce(const UAbilityTask_ApplyRootMotionConstantForce&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_ApplyRootMotionConstantForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ApplyRootMotionConstantForce;

// ********** End Class UAbilityTask_ApplyRootMotionConstantForce **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
