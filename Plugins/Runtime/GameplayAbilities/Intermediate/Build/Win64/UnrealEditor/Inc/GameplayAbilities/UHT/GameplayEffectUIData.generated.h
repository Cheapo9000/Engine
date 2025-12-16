// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectUIData.h"

#ifdef GAMEPLAYABILITIES_GameplayEffectUIData_generated_h
#error "GameplayEffectUIData.generated.h already included, missing '#pragma once' in GameplayEffectUIData.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectUIData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayEffectUIData ****************************************************
struct Z_Construct_UClass_UGameplayEffectUIData_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayEffectUIData(); \
	friend struct ::Z_Construct_UClass_UGameplayEffectUIData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayEffectUIData_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayEffectUIData, UGameplayEffectComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayEffectUIData_NoRegister) \
	DECLARE_SERIALIZER(UGameplayEffectUIData)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayEffectUIData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayEffectUIData(UGameplayEffectUIData&&) = delete; \
	UGameplayEffectUIData(const UGameplayEffectUIData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayEffectUIData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayEffectUIData); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameplayEffectUIData) \
	GAMEPLAYABILITIES_API virtual ~UGameplayEffectUIData();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayEffectUIData;

// ********** End Class UGameplayEffectUIData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
