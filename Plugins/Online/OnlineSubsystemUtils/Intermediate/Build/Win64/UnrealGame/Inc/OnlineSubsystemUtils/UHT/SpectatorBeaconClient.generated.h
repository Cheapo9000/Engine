// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpectatorBeaconClient.h"

#ifdef ONLINESUBSYSTEMUTILS_SpectatorBeaconClient_generated_h
#error "SpectatorBeaconClient.generated.h already included, missing '#pragma once' in SpectatorBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_SpectatorBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpectatorReservation;
struct FUniqueNetIdRepl;

// ********** Begin Class ASpectatorBeaconClient ***************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_RPC_WRAPPERS \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& Spectator); \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerReservationRequest_Validate(const FString& , FSpectatorReservation const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerReservationRequest_Implementation(const FString& SessionId, FSpectatorReservation const& Reservation); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientSendReservationFull_Implementation(); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASpectatorBeaconClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_INCLASS \
private: \
	static void StaticRegisterNativesASpectatorBeaconClient(); \
	friend struct ::Z_Construct_UClass_ASpectatorBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ASpectatorBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpectatorBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ASpectatorBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(ASpectatorBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ASpectatorBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ASpectatorBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpectatorBeaconClient(ASpectatorBeaconClient&&) = delete; \
	ASpectatorBeaconClient(const ASpectatorBeaconClient&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ASpectatorBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_85_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpectatorBeaconClient;

// ********** End Class ASpectatorBeaconClient *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h

// ********** Begin Enum ESpectatorClientRequestType ***********************************************
#define FOREACH_ENUM_ESPECTATORCLIENTREQUESTTYPE(op) \
	op(ESpectatorClientRequestType::NonePending) \
	op(ESpectatorClientRequestType::ExistingSessionReservation) \
	op(ESpectatorClientRequestType::ReservationUpdate) \
	op(ESpectatorClientRequestType::EmptyServerReservation) \
	op(ESpectatorClientRequestType::Reconnect) \
	op(ESpectatorClientRequestType::Abandon) 

enum class ESpectatorClientRequestType : uint8;
template<> struct TIsUEnumClass<ESpectatorClientRequestType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpectatorClientRequestType>();
// ********** End Enum ESpectatorClientRequestType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
