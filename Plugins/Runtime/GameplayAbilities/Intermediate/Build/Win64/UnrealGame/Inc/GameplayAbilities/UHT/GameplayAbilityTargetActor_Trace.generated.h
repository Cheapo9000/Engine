// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetActor_Trace.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetActor_Trace_generated_h
#error "GameplayAbilityTargetActor_Trace.generated.h already included, missing '#pragma once' in GameplayAbilityTargetActor_Trace.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetActor_Trace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameplayAbilityTargetActor_Trace ****************************************
struct Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayAbilityTargetActor_Trace(); \
	friend struct ::Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayAbilityTargetActor_Trace, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister) \
	DECLARE_SERIALIZER(AGameplayAbilityTargetActor_Trace) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityTargetActor_Trace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayAbilityTargetActor_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityTargetActor_Trace); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayAbilityTargetActor_Trace(AGameplayAbilityTargetActor_Trace&&) = delete; \
	AGameplayAbilityTargetActor_Trace(const AGameplayAbilityTargetActor_Trace&) = delete; \
	GAMEPLAYABILITIES_API virtual ~AGameplayAbilityTargetActor_Trace();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayAbilityTargetActor_Trace;

// ********** End Class AGameplayAbilityTargetActor_Trace ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
