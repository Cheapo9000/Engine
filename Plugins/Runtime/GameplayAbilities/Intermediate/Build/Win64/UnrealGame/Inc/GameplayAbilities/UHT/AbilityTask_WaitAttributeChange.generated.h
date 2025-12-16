// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAttributeChange.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAttributeChange_generated_h
#error "AbilityTask_WaitAttributeChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitAttributeChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAttributeChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitAttributeChange;
class UGameplayAbility;
struct FGameplayAttribute;
struct FGameplayTag;

// ********** Begin Delegate FWaitAttributeChangeDelegate ******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_31_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAttributeChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeDelegate);


// ********** End Delegate FWaitAttributeChangeDelegate ********************************************

// ********** Begin Class UAbilityTask_WaitAttributeChange *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForAttributeChangeWithComparison); \
	DECLARE_FUNCTION(execWaitForAttributeChange);


struct Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChange(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitAttributeChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitAttributeChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChange); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitAttributeChange(UAbilityTask_WaitAttributeChange&&) = delete; \
	UAbilityTask_WaitAttributeChange(const UAbilityTask_WaitAttributeChange&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitAttributeChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitAttributeChange;

// ********** End Class UAbilityTask_WaitAttributeChange *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h

// ********** Begin Enum EWaitAttributeChangeComparison ********************************************
#define FOREACH_ENUM_EWAITATTRIBUTECHANGECOMPARISON(op) \
	op(EWaitAttributeChangeComparison::None) \
	op(EWaitAttributeChangeComparison::GreaterThan) \
	op(EWaitAttributeChangeComparison::LessThan) \
	op(EWaitAttributeChangeComparison::GreaterThanOrEqualTo) \
	op(EWaitAttributeChangeComparison::LessThanOrEqualTo) \
	op(EWaitAttributeChangeComparison::NotEqualTo) \
	op(EWaitAttributeChangeComparison::ExactlyEqualTo) 

namespace EWaitAttributeChangeComparison { enum Type : int; }
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaitAttributeChangeComparison::Type>();
// ********** End Enum EWaitAttributeChangeComparison **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
