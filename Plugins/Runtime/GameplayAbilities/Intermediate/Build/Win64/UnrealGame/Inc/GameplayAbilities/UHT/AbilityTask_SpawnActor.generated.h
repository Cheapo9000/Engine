// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_SpawnActor.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_SpawnActor_generated_h
#error "AbilityTask_SpawnActor.generated.h already included, missing '#pragma once' in AbilityTask_SpawnActor.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_SpawnActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SpawnActor;
class UClass;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;

// ********** Begin Delegate FSpawnActorDelegate ***************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor);


// ********** End Delegate FSpawnActorDelegate *****************************************************

// ********** Begin Class UAbilityTask_SpawnActor **************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnActor);


struct Z_Construct_UClass_UAbilityTask_SpawnActor_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_SpawnActor(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_SpawnActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_SpawnActor, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_SpawnActor)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_SpawnActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_SpawnActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SpawnActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_SpawnActor(UAbilityTask_SpawnActor&&) = delete; \
	UAbilityTask_SpawnActor(const UAbilityTask_SpawnActor&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_SpawnActor();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_SpawnActor;

// ********** End Class UAbilityTask_SpawnActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
