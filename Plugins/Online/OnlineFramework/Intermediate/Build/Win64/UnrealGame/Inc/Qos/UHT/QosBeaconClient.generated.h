// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosBeaconClient.h"

#ifdef QOS_QosBeaconClient_generated_h
#error "QosBeaconClient.generated.h already included, missing '#pragma once' in QosBeaconClient.h"
#endif
#define QOS_QosBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQosResponseType : uint8;

// ********** Begin Class AQosBeaconClient *********************************************************
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_RPC_WRAPPERS \
	QOS_API virtual void ClientQosResponse_Implementation(EQosResponseType Response); \
	QOS_API virtual bool ServerQosRequest_Validate(const FString& ); \
	QOS_API virtual void ServerQosRequest_Implementation(const FString& InSessionId); \
	DECLARE_FUNCTION(execClientQosResponse); \
	DECLARE_FUNCTION(execServerQosRequest);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AQosBeaconClient_Statics;
QOS_API UClass* Z_Construct_UClass_AQosBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAQosBeaconClient(); \
	friend struct ::Z_Construct_UClass_AQosBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QOS_API UClass* ::Z_Construct_UClass_AQosBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(AQosBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), Z_Construct_UClass_AQosBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(AQosBeaconClient)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QOS_API AQosBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQosBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QOS_API, AQosBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQosBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQosBeaconClient(AQosBeaconClient&&) = delete; \
	AQosBeaconClient(const AQosBeaconClient&) = delete; \
	QOS_API virtual ~AQosBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_37_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQosBeaconClient;

// ********** End Class AQosBeaconClient ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h

// ********** Begin Enum EQosResponseType **********************************************************
#define FOREACH_ENUM_EQOSRESPONSETYPE(op) \
	op(EQosResponseType::NoResponse) \
	op(EQosResponseType::Success) \
	op(EQosResponseType::Failure) 

enum class EQosResponseType : uint8;
template<> struct TIsUEnumClass<EQosResponseType> { enum { Value = true }; };
template<> QOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EQosResponseType>();
// ********** End Enum EQosResponseType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
