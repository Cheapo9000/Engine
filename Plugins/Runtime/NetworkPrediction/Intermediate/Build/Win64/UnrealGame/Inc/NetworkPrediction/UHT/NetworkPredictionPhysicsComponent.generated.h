// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionPhysicsComponent.h"

#ifdef NETWORKPREDICTION_NetworkPredictionPhysicsComponent_generated_h
#error "NetworkPredictionPhysicsComponent.generated.h already included, missing '#pragma once' in NetworkPredictionPhysicsComponent.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionPhysicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetworkPredictionPhysicsComponent ***************************************
struct Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics;
NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionPhysicsComponent(); \
	friend struct ::Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTION_API UClass* ::Z_Construct_UClass_UNetworkPredictionPhysicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPredictionPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), Z_Construct_UClass_UNetworkPredictionPhysicsComponent_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPredictionPhysicsComponent) \
	NETWORKPREDICTION_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy, \
		NETFIELD_REP_END=ReplicationProxy	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NETWORKPREDICTION_API)


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPredictionPhysicsComponent(UNetworkPredictionPhysicsComponent&&) = delete; \
	UNetworkPredictionPhysicsComponent(const UNetworkPredictionPhysicsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKPREDICTION_API, UNetworkPredictionPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionPhysicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPredictionPhysicsComponent) \
	NETWORKPREDICTION_API virtual ~UNetworkPredictionPhysicsComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPredictionPhysicsComponent;

// ********** End Class UNetworkPredictionPhysicsComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
