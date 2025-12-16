// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueManager.h"

#ifdef GAMEPLAYABILITIES_GameplayCueManager_generated_h
#error "GameplayCueManager.generated.h already included, missing '#pragma once' in GameplayCueManager.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayCueObjectLibrary *****************************************
struct Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueObjectLibrary;
// ********** End ScriptStruct FGameplayCueObjectLibrary *******************************************

// ********** Begin Class UGameplayCueManager ******************************************************
struct Z_Construct_UClass_UGameplayCueManager_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayCueManager(); \
	friend struct ::Z_Construct_UClass_UGameplayCueManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueManager, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueManager_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueManager)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueManager(UGameplayCueManager&&) = delete; \
	UGameplayCueManager(const UGameplayCueManager&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayCueManager();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_129_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_132_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueManager;

// ********** End Class UGameplayCueManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
