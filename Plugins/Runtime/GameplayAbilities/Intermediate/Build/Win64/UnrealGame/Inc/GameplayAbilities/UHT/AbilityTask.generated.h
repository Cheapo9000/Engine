// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_generated_h
#error "AbilityTask.generated.h already included, missing '#pragma once' in AbilityTask.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAbilityTask *************************************************************
struct Z_Construct_UClass_UAbilityTask_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask(UAbilityTask&&) = delete; \
	UAbilityTask(const UAbilityTask&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_89_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_92_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask;

// ********** End Class UAbilityTask ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h

// ********** Begin Enum EAbilityTaskWaitState *****************************************************
#define FOREACH_ENUM_EABILITYTASKWAITSTATE(op) \
	op(EAbilityTaskWaitState::WaitingOnGame) \
	op(EAbilityTaskWaitState::WaitingOnUser) \
	op(EAbilityTaskWaitState::WaitingOnAvatar) 

enum class EAbilityTaskWaitState : uint8;
template<> struct TIsUEnumClass<EAbilityTaskWaitState> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTaskWaitState>();
// ********** End Enum EAbilityTaskWaitState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
