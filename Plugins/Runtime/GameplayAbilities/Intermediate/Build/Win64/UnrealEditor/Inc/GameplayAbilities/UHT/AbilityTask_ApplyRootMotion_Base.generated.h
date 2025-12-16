// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotion_Base_generated_h
#error "AbilityTask_ApplyRootMotion_Base.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotion_Base.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotion_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAbilityTask_ApplyRootMotion_Base ****************************************
struct Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotion_Base(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ApplyRootMotion_Base, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotion_Base) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForceName=NETFIELD_REP_START, \
		FinishVelocityMode, \
		FinishSetVelocity, \
		FinishClampVelocity, \
		NETFIELD_REP_END=FinishClampVelocity	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API) \
private: \
	REPLICATED_BASE_CLASS(UAbilityTask_ApplyRootMotion_Base) \
public:


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotion_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotion_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_ApplyRootMotion_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotion_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ApplyRootMotion_Base(UAbilityTask_ApplyRootMotion_Base&&) = delete; \
	UAbilityTask_ApplyRootMotion_Base(const UAbilityTask_ApplyRootMotion_Base&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_ApplyRootMotion_Base();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ApplyRootMotion_Base;

// ********** End Class UAbilityTask_ApplyRootMotion_Base ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
