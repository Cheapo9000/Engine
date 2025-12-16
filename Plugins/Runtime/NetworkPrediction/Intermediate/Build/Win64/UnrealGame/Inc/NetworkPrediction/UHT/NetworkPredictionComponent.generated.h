// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionComponent.h"

#ifdef NETWORKPREDICTION_NetworkPredictionComponent_generated_h
#error "NetworkPredictionComponent.generated.h already included, missing '#pragma once' in NetworkPredictionComponent.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerReplicationRPCParameter;

// ********** Begin Class UNetworkPredictionComponent **********************************************
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	NETWORKPREDICTION_API virtual bool ServerReceiveClientInput_Validate(FServerReplicationRPCParameter const& ); \
	NETWORKPREDICTION_API virtual void ServerReceiveClientInput_Implementation(FServerReplicationRPCParameter const& ProxyParameter); \
	DECLARE_FUNCTION(execServerReceiveClientInput);


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNetworkPredictionComponent_Statics;
NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionComponent(); \
	friend struct ::Z_Construct_UClass_UNetworkPredictionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTION_API UClass* ::Z_Construct_UClass_UNetworkPredictionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPredictionComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), Z_Construct_UClass_UNetworkPredictionComponent_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPredictionComponent) \
	NETWORKPREDICTION_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy_Autonomous, \
		ReplicationProxy_Simulated, \
		ReplicationProxy_Replay, \
		NETFIELD_REP_END=ReplicationProxy_Replay	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NETWORKPREDICTION_API)


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPredictionComponent(UNetworkPredictionComponent&&) = delete; \
	UNetworkPredictionComponent(const UNetworkPredictionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKPREDICTION_API, UNetworkPredictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetworkPredictionComponent) \
	NETWORKPREDICTION_API virtual ~UNetworkPredictionComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPredictionComponent;

// ********** End Class UNetworkPredictionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
