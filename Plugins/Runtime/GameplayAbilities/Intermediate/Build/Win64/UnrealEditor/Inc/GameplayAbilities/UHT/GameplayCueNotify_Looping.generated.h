// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueNotify_Looping.h"

#ifdef GAMEPLAYABILITIES_GameplayCueNotify_Looping_generated_h
#error "GameplayCueNotify_Looping.generated.h already included, missing '#pragma once' in GameplayCueNotify_Looping.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueNotify_Looping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueNotify_SpawnResult;
struct FGameplayCueParameters;

// ********** Begin Class AGameplayCueNotify_Looping ***********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGameplayCueNotify_Looping_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Looping_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCueNotify_Looping(); \
	friend struct ::Z_Construct_UClass_AGameplayCueNotify_Looping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_AGameplayCueNotify_Looping_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCueNotify_Looping, AGameplayCueNotify_Actor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_AGameplayCueNotify_Looping_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCueNotify_Looping)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCueNotify_Looping(AGameplayCueNotify_Looping&&) = delete; \
	AGameplayCueNotify_Looping(const AGameplayCueNotify_Looping&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, AGameplayCueNotify_Looping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCueNotify_Looping); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameplayCueNotify_Looping) \
	GAMEPLAYABILITIES_API virtual ~AGameplayCueNotify_Looping();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCueNotify_Looping;

// ********** End Class AGameplayCueNotify_Looping *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Looping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
