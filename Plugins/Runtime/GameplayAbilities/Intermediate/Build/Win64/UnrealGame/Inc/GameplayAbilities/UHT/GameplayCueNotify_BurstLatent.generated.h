// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueNotify_BurstLatent.h"

#ifdef GAMEPLAYABILITIES_GameplayCueNotify_BurstLatent_generated_h
#error "GameplayCueNotify_BurstLatent.generated.h already included, missing '#pragma once' in GameplayCueNotify_BurstLatent.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueNotify_BurstLatent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueNotify_SpawnResult;
struct FGameplayCueParameters;

// ********** Begin Class AGameplayCueNotify_BurstLatent *******************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCueNotify_BurstLatent(); \
	friend struct ::Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCueNotify_BurstLatent, AGameplayCueNotify_Actor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCueNotify_BurstLatent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCueNotify_BurstLatent(AGameplayCueNotify_BurstLatent&&) = delete; \
	AGameplayCueNotify_BurstLatent(const AGameplayCueNotify_BurstLatent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayCueNotify_BurstLatent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCueNotify_BurstLatent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameplayCueNotify_BurstLatent) \
	GAMEPLAYABILITIES_API virtual ~AGameplayCueNotify_BurstLatent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCueNotify_BurstLatent;

// ********** End Class AGameplayCueNotify_BurstLatent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
