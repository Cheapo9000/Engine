// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemReplicationProxyInterface.h"

#ifdef GAMEPLAYABILITIES_AbilitySystemReplicationProxyInterface_generated_h
#error "AbilitySystemReplicationProxyInterface.generated.h already included, missing '#pragma once' in AbilitySystemReplicationProxyInterface.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemReplicationProxyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAbilitySystemReplicationProxyInterface ******************************
struct Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemReplicationProxyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemReplicationProxyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemReplicationProxyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemReplicationProxyInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitySystemReplicationProxyInterface(UAbilitySystemReplicationProxyInterface&&) = delete; \
	UAbilitySystemReplicationProxyInterface(const UAbilitySystemReplicationProxyInterface&) = delete; \
	virtual ~UAbilitySystemReplicationProxyInterface() = default;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAbilitySystemReplicationProxyInterface(); \
	friend struct ::Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitySystemReplicationProxyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister) \
	DECLARE_SERIALIZER(UAbilitySystemReplicationProxyInterface)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_INCLASS_IINTERFACE \
protected: \
	virtual ~IAbilitySystemReplicationProxyInterface() {} \
public: \
	typedef UAbilitySystemReplicationProxyInterface UClassType; \
	typedef IAbilitySystemReplicationProxyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h_25_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitySystemReplicationProxyInterface;

// ********** End Interface UAbilitySystemReplicationProxyInterface ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemReplicationProxyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
