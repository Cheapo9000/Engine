// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitOverlap.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h
#error "AbilityTask_WaitOverlap.generated.h already included, missing '#pragma once' in AbilityTask_WaitOverlap.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class UPrimitiveComponent;
struct FGameplayAbilityTargetDataHandle;
struct FHitResult;

// ********** Begin Delegate FWaitOverlapDelegate **************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FWaitOverlapDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitOverlapDelegate, FGameplayAbilityTargetDataHandle const& TargetData);


// ********** End Delegate FWaitOverlapDelegate ****************************************************

// ********** Begin Class UAbilityTask_WaitOverlap *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForOverlap); \
	DECLARE_FUNCTION(execOnHitCallback);


struct Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitOverlap(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_WaitOverlap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_WaitOverlap_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_WaitOverlap)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitOverlap); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitOverlap(UAbilityTask_WaitOverlap&&) = delete; \
	UAbilityTask_WaitOverlap(const UAbilityTask_WaitOverlap&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_WaitOverlap();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_WaitOverlap;

// ********** End Class UAbilityTask_WaitOverlap ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
