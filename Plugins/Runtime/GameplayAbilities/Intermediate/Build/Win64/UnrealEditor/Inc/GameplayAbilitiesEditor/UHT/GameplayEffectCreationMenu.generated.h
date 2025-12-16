// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectCreationMenu.h"

#ifdef GAMEPLAYABILITIESEDITOR_GameplayEffectCreationMenu_generated_h
#error "GameplayEffectCreationMenu.generated.h already included, missing '#pragma once' in GameplayEffectCreationMenu.h"
#endif
#define GAMEPLAYABILITIESEDITOR_GameplayEffectCreationMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayEffectCreationData ***************************************
struct Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics; \
	GAMEPLAYABILITIESEDITOR_API static class UScriptStruct* StaticStruct();


struct FGameplayEffectCreationData;
// ********** End ScriptStruct FGameplayEffectCreationData *****************************************

// ********** Begin Class UGameplayEffectCreationMenu **********************************************
struct Z_Construct_UClass_UGameplayEffectCreationMenu_Statics;
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayEffectCreationMenu(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectCreationMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIESEDITOR_API UClass* ::Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectCreationMenu, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilitiesEditor"), Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectCreationMenu) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectCreationMenu(UGameplayEffectCreationMenu&&) = delete; \
	UGameplayEffectCreationMenu(const UGameplayEffectCreationMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIESEDITOR_API, UGameplayEffectCreationMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectCreationMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayEffectCreationMenu) \
	GAMEPLAYABILITIESEDITOR_API virtual ~UGameplayEffectCreationMenu();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectCreationMenu;

// ********** End Class UGameplayEffectCreationMenu ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
