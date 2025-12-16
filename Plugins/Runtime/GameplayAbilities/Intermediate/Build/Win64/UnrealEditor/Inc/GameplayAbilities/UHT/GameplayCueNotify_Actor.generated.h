// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueNotify_Actor.h"

#ifdef GAMEPLAYABILITIES_GameplayCueNotify_Actor_generated_h
#error "GameplayCueNotify_Actor.generated.h already included, missing '#pragma once' in GameplayCueNotify_Actor.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueNotify_Actor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;

// ********** Begin Class AGameplayCueNotify_Actor *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_RPC_WRAPPERS \
	GAMEPLAYABILITIES_API virtual bool OnRemove_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	GAMEPLAYABILITIES_API virtual bool WhileActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	GAMEPLAYABILITIES_API virtual bool OnActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	GAMEPLAYABILITIES_API virtual bool OnExecute_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execWhileActive); \
	DECLARE_FUNCTION(execOnActive); \
	DECLARE_FUNCTION(execOnExecute); \
	DECLARE_FUNCTION(execK2_EndGameplayCue); \
	DECLARE_FUNCTION(execOnOwnerDestroyed);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AGameplayCueNotify_Actor, GAMEPLAYABILITIES_API)


struct Z_Construct_UClass_AGameplayCueNotify_Actor_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayCueNotify_Actor(); \
	friend struct ::Z_Construct_UClass_AGameplayCueNotify_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCueNotify_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCueNotify_Actor) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API AGameplayCueNotify_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCueNotify_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayCueNotify_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCueNotify_Actor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCueNotify_Actor(AGameplayCueNotify_Actor&&) = delete; \
	AGameplayCueNotify_Actor(const AGameplayCueNotify_Actor&) = delete; \
	GAMEPLAYABILITIES_API virtual ~AGameplayCueNotify_Actor();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCueNotify_Actor;

// ********** End Class AGameplayCueNotify_Actor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
