// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockPhysicsComponent.h"

#ifdef NETWORKPREDICTIONEXTRAS_MockPhysicsComponent_generated_h
#error "MockPhysicsComponent.generated.h already included, missing '#pragma once' in MockPhysicsComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockPhysicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPhysicsJumpCueEvent **************************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_56_DELEGATE \
static void FPhysicsJumpCueEvent_DelegateWrapper(const FMulticastScriptDelegate& PhysicsJumpCueEvent, FVector Location, float ElapsedTimeSeconds);


// ********** End Delegate FPhysicsJumpCueEvent ****************************************************

// ********** Begin Delegate FPhysicsChargeCueEvent ************************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_62_DELEGATE \
static void FPhysicsChargeCueEvent_DelegateWrapper(const FMulticastScriptDelegate& PhysicsChargeCueEvent, FVector Location, float ElapsedTimeSeconds);


// ********** End Delegate FPhysicsChargeCueEvent **************************************************

// ********** Begin Delegate FMockPhysicsNotifyStateChange *****************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_70_DELEGATE \
static void FMockPhysicsNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockPhysicsNotifyStateChange, bool bNewStateValue);


// ********** End Delegate FMockPhysicsNotifyStateChange *******************************************

// ********** Begin Class UMockPhysicsComponent ****************************************************
struct Z_Construct_UClass_UMockPhysicsComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockPhysicsComponent(); \
	friend struct ::Z_Construct_UClass_UMockPhysicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UMockPhysicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockPhysicsComponent, UBaseMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UMockPhysicsComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockPhysicsComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockPhysicsComponent(UMockPhysicsComponent&&) = delete; \
	UMockPhysicsComponent(const UMockPhysicsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockPhysicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockPhysicsComponent) \
	NO_API virtual ~UMockPhysicsComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockPhysicsComponent;

// ********** End Class UMockPhysicsComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
