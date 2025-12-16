// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockAbilitySimulation.h"

#ifdef NETWORKPREDICTIONEXTRAS_MockAbilitySimulation_generated_h
#error "MockAbilitySimulation.generated.h already included, missing '#pragma once' in MockAbilitySimulation.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockAbilitySimulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize100;

// ********** Begin Delegate FMockAbilityNotifyStateChange *****************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_384_DELEGATE \
static void FMockAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityNotifyStateChange, bool bNewStateValue);


// ********** End Delegate FMockAbilityNotifyStateChange *******************************************

// ********** Begin Delegate FMockAbilityBlinkCueEvent *********************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_411_DELEGATE \
static void FMockAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds);


// ********** End Delegate FMockAbilityBlinkCueEvent ***********************************************

// ********** Begin Delegate FMockAbilityBlinkCueRollback ******************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_415_DELEGATE \
static void FMockAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueRollback);


// ********** End Delegate FMockAbilityBlinkCueRollback ********************************************

// ********** Begin Delegate FMockAbilityPhysicsGunFireEvent ***************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_419_DELEGATE \
static void FMockAbilityPhysicsGunFireEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityPhysicsGunFireEvent, FVector Start, FVector End, bool bHasCooldown, TArray<FVector_NetQuantize100> const& HitLocations, float ElapsedTimeSeconds);


// ********** End Delegate FMockAbilityPhysicsGunFireEvent *****************************************

// ********** Begin Class UMockFlyingAbilityComponent **********************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


struct Z_Construct_UClass_UMockFlyingAbilityComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockFlyingAbilityComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockFlyingAbilityComponent(); \
	friend struct ::Z_Construct_UClass_UMockFlyingAbilityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UMockFlyingAbilityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockFlyingAbilityComponent, UFlyingMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UMockFlyingAbilityComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockFlyingAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockFlyingAbilityComponent(UMockFlyingAbilityComponent&&) = delete; \
	UMockFlyingAbilityComponent(const UMockFlyingAbilityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockFlyingAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockFlyingAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockFlyingAbilityComponent) \
	NO_API virtual ~UMockFlyingAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_353_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockFlyingAbilityComponent;

// ********** End Class UMockFlyingAbilityComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
