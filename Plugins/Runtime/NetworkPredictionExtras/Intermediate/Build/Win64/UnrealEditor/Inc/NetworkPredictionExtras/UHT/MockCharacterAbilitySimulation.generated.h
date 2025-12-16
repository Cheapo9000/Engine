// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockCharacterAbilitySimulation.h"

#ifdef NETWORKPREDICTIONEXTRAS_MockCharacterAbilitySimulation_generated_h
#error "MockCharacterAbilitySimulation.generated.h already included, missing '#pragma once' in MockCharacterAbilitySimulation.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockCharacterAbilitySimulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FMockCharacterAbilityNotifyStateChange ********************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_187_DELEGATE \
static void FMockCharacterAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityNotifyStateChange, bool bNewStateValue);


// ********** End Delegate FMockCharacterAbilityNotifyStateChange **********************************

// ********** Begin Delegate FMockCharacterAbilityBlinkCueEvent ************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_222_DELEGATE \
static void FMockCharacterAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds);


// ********** End Delegate FMockCharacterAbilityBlinkCueEvent **************************************

// ********** Begin Delegate FMockCharacterAbilityBlinkCueRollback *********************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_226_DELEGATE \
static void FMockCharacterAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueRollback);


// ********** End Delegate FMockCharacterAbilityBlinkCueRollback ***********************************

// ********** Begin Class UMockCharacterAbilityComponent *******************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsJumping); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


struct Z_Construct_UClass_UMockCharacterAbilityComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockCharacterAbilityComponent(); \
	friend struct ::Z_Construct_UClass_UMockCharacterAbilityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockCharacterAbilityComponent, UCharacterMotionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockCharacterAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockCharacterAbilityComponent(UMockCharacterAbilityComponent&&) = delete; \
	UMockCharacterAbilityComponent(const UMockCharacterAbilityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockCharacterAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockCharacterAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockCharacterAbilityComponent) \
	NO_API virtual ~UMockCharacterAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_154_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockCharacterAbilityComponent;

// ********** End Class UMockCharacterAbilityComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
