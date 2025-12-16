// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetActor.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetActor_generated_h
#error "GameplayAbilityTargetActor.generated.h already included, missing '#pragma once' in GameplayAbilityTargetActor.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameplayAbilityTargetActor **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCancelTargeting); \
	DECLARE_FUNCTION(execConfirmTargeting);


struct Z_Construct_UClass_AGameplayAbilityTargetActor_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayAbilityTargetActor(); \
	friend struct ::Z_Construct_UClass_AGameplayAbilityTargetActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayAbilityTargetActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister) \
	DECLARE_SERIALIZER(AGameplayAbilityTargetActor) \
	GAMEPLAYABILITIES_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		bDestroyOnConfirmation, \
		SourceActor, \
		Filter, \
		bDebug, \
		NETFIELD_REP_END=bDebug	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GAMEPLAYABILITIES_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API AGameplayAbilityTargetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityTargetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayAbilityTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityTargetActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayAbilityTargetActor(AGameplayAbilityTargetActor&&) = delete; \
	AGameplayAbilityTargetActor(const AGameplayAbilityTargetActor&) = delete; \
	GAMEPLAYABILITIES_API virtual ~AGameplayAbilityTargetActor();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayAbilityTargetActor;

// ********** End Class AGameplayAbilityTargetActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
