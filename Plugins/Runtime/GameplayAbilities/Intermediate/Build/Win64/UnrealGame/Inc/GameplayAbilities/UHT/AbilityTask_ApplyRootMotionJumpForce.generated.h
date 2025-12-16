// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionJumpForce_generated_h
#error "AbilityTask_ApplyRootMotionJumpForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionJumpForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionJumpForce_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionJumpForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
struct FHitResult;

// ********** Begin Delegate FApplyRootMotionJumpForceDelegate *************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_17_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionJumpForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionJumpForceDelegate);


// ********** End Delegate FApplyRootMotionJumpForceDelegate ***************************************

// ********** Begin Class UAbilityTask_ApplyRootMotionJumpForce ************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execApplyRootMotionJumpForce); \
	DECLARE_FUNCTION(execOnLandedCallback); \
	DECLARE_FUNCTION(execFinish);


struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionJumpForce(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ApplyRootMotionJumpForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionJumpForce) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Rotation=NETFIELD_REP_START, \
		Distance, \
		Height, \
		Duration, \
		MinimumLandedTriggerTime, \
		bFinishOnLanded, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		NETFIELD_REP_END=TimeMappingCurve	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionJumpForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionJumpForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_ApplyRootMotionJumpForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionJumpForce); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotionJumpForce(UAbilityTask_ApplyRootMotionJumpForce&&) = delete; \
	UAbilityTask_ApplyRootMotionJumpForce(const UAbilityTask_ApplyRootMotionJumpForce&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_ApplyRootMotionJumpForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ApplyRootMotionJumpForce;

// ********** End Class UAbilityTask_ApplyRootMotionJumpForce **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
