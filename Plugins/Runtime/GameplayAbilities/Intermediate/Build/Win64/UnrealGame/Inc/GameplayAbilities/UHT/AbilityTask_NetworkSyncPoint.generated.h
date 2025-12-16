// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_NetworkSyncPoint.h"

#ifdef GAMEPLAYABILITIES_AbilityTask_NetworkSyncPoint_generated_h
#error "AbilityTask_NetworkSyncPoint.generated.h already included, missing '#pragma once' in AbilityTask_NetworkSyncPoint.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_NetworkSyncPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_NetworkSyncPoint;
class UGameplayAbility;
enum class EAbilityTaskNetSyncType : uint8;

// ********** Begin Delegate FNetworkSyncDelegate **************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& NetworkSyncDelegate);


// ********** End Delegate FNetworkSyncDelegate ****************************************************

// ********** Begin Class UAbilityTask_NetworkSyncPoint ********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitNetSync); \
	DECLARE_FUNCTION(execOnSignalCallback);


struct Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_NetworkSyncPoint(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_NetworkSyncPoint, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_NetworkSyncPoint)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_NetworkSyncPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_NetworkSyncPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_NetworkSyncPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_NetworkSyncPoint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_NetworkSyncPoint(UAbilityTask_NetworkSyncPoint&&) = delete; \
	UAbilityTask_NetworkSyncPoint(const UAbilityTask_NetworkSyncPoint&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAbilityTask_NetworkSyncPoint();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_NetworkSyncPoint;

// ********** End Class UAbilityTask_NetworkSyncPoint **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_NetworkSyncPoint_h

// ********** Begin Enum EAbilityTaskNetSyncType ***************************************************
#define FOREACH_ENUM_EABILITYTASKNETSYNCTYPE(op) \
	op(EAbilityTaskNetSyncType::BothWait) \
	op(EAbilityTaskNetSyncType::OnlyServerWait) \
	op(EAbilityTaskNetSyncType::OnlyClientWait) 

enum class EAbilityTaskNetSyncType : uint8;
template<> struct TIsUEnumClass<EAbilityTaskNetSyncType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTaskNetSyncType>();
// ********** End Enum EAbilityTaskNetSyncType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
