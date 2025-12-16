// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayTag.h"

#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTag_generated_h
#error "AbilityAsync_WaitGameplayTag.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayTag.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayTagAdded;
class UAbilityAsync_WaitGameplayTagRemoved;
struct FGameplayTag;

// ********** Begin Delegate FAsyncWaitGameplayTagDelegate *****************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_20_DELEGATE \
static GAMEPLAYABILITIES_API void FAsyncWaitGameplayTagDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagDelegate);


// ********** End Delegate FAsyncWaitGameplayTagDelegate *******************************************

// ********** Begin Class UAbilityAsync_WaitGameplayTag ********************************************
struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTag(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayTag, UAbilityAsync, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTag)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayTag(UAbilityAsync_WaitGameplayTag&&) = delete; \
	UAbilityAsync_WaitGameplayTag(const UAbilityAsync_WaitGameplayTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTag) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayTag();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayTag;

// ********** End Class UAbilityAsync_WaitGameplayTag **********************************************

// ********** Begin Class UAbilityAsync_WaitGameplayTagAdded ***************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayTagAddToActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagAdded(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayTagAdded, UAbilityAsync_WaitGameplayTag, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagAdded)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayTagAdded(UAbilityAsync_WaitGameplayTagAdded&&) = delete; \
	UAbilityAsync_WaitGameplayTagAdded(const UAbilityAsync_WaitGameplayTagAdded&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayTagAdded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagAdded); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagAdded) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayTagAdded();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayTagAdded;

// ********** End Class UAbilityAsync_WaitGameplayTagAdded *****************************************

// ********** Begin Class UAbilityAsync_WaitGameplayTagRemoved *************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitGameplayTagRemoveFromActor);


struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagRemoved(); \
	friend struct ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityAsync_WaitGameplayTagRemoved, UAbilityAsync_WaitGameplayTag, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagRemoved)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagRemoved(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitGameplayTagRemoved(UAbilityAsync_WaitGameplayTagRemoved&&) = delete; \
	UAbilityAsync_WaitGameplayTagRemoved(const UAbilityAsync_WaitGameplayTagRemoved&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityAsync_WaitGameplayTagRemoved); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagRemoved); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagRemoved) \
	GAMEPLAYABILITIES_API virtual ~UAbilityAsync_WaitGameplayTagRemoved();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_55_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityAsync_WaitGameplayTagRemoved;

// ********** End Class UAbilityAsync_WaitGameplayTagRemoved ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
