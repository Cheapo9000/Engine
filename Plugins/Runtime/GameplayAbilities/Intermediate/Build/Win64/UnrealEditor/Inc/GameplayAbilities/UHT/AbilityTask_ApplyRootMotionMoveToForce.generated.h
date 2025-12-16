// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToForce_generated_h
#error "AbilityTask_ApplyRootMotionMoveToForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionMoveToForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToForce_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionMoveToForce;
class UCurveVector;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;

// ********** Begin Delegate FApplyRootMotionMoveToForceDelegate ***********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_17_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionMoveToForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionMoveToForceDelegate);


// ********** End Delegate FApplyRootMotionMoveToForceDelegate *************************************

// ********** Begin Class UAbilityTask_ApplyRootMotionMoveToForce **********************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyRootMotionMoveToForce);


struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToForce(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ApplyRootMotionMoveToForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToForce) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		Duration, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		NETFIELD_REP_END=PathOffsetCurve	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionMoveToForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotionMoveToForce(UAbilityTask_ApplyRootMotionMoveToForce&&) = delete; \
	UAbilityTask_ApplyRootMotionMoveToForce(const UAbilityTask_ApplyRootMotionMoveToForce&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_ApplyRootMotionMoveToForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToForce) \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_ApplyRootMotionMoveToForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ApplyRootMotionMoveToForce;

// ********** End Class UAbilityTask_ApplyRootMotionMoveToForce ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
