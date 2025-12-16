// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueSet.h"

#ifdef GAMEPLAYABILITIES_GameplayCueSet_generated_h
#error "GameplayCueSet.generated.h already included, missing '#pragma once' in GameplayCueSet.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayCueNotifyData ********************************************
struct Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueNotifyData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueNotifyData;
// ********** End ScriptStruct FGameplayCueNotifyData **********************************************

// ********** Begin Class UGameplayCueSet **********************************************************
struct Z_Construct_UClass_UGameplayCueSet_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayCueSet(); \
	friend struct ::Z_Construct_UClass_UGameplayCueSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueSet_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueSet)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueSet(UGameplayCueSet&&) = delete; \
	UGameplayCueSet(const UGameplayCueSet&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayCueSet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_55_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueSet;

// ********** End Class UGameplayCueSet ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
