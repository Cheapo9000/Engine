// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemInterface.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemInterface_generated_h
#error "AbilitySystemInterface.generated.h already included, missing '#pragma once' in AbilitySystemInterface.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAbilitySystemInterface **********************************************
struct Z_Construct_UClass_UAbilitySystemInterface_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemInterface(UAbilitySystemInterface&&) = delete; \
	UAbilitySystemInterface(const UAbilitySystemInterface&) = delete; \
	virtual ~UAbilitySystemInterface() = default;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAbilitySystemInterface(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemInterface_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemInterface)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IAbilitySystemInterface() {} \
public: \
	typedef UAbilitySystemInterface UClassType; \
	typedef IAbilitySystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemInterface;

// ********** End Interface UAbilitySystemInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
