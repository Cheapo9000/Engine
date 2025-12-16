// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartyBeaconClient.h"

#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h
#error "PartyBeaconClient.generated.h already included, missing '#pragma once' in PartyBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPartyReservation;
struct FUniqueNetIdRepl;

// ********** Begin Class APartyBeaconClient *******************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_RPC_WRAPPERS \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& PartyLeader); \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerRemoveMemberFromReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerAddOrUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerAddOrUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientSendReservationFull_Implementation(); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerRemoveMemberFromReservationRequest); \
	DECLARE_FUNCTION(execServerAddOrUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_CALLBACK_WRAPPERS
struct Z_Construct_UClass_APartyBeaconClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_INCLASS \
private: \
	static void StaticRegisterNativesAPartyBeaconClient(); \
	friend struct ::Z_Construct_UClass_APartyBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_APartyBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(APartyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_APartyBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(APartyBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API APartyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, APartyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APartyBeaconClient(APartyBeaconClient&&) = delete; \
	APartyBeaconClient(const APartyBeaconClient&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~APartyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APartyBeaconClient;

// ********** End Class APartyBeaconClient *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h

// ********** Begin Enum EClientRequestType ********************************************************
#define FOREACH_ENUM_ECLIENTREQUESTTYPE(op) \
	op(EClientRequestType::NonePending) \
	op(EClientRequestType::ExistingSessionReservation) \
	op(EClientRequestType::ReservationUpdate) \
	op(EClientRequestType::EmptyServerReservation) \
	op(EClientRequestType::Reconnect) \
	op(EClientRequestType::Abandon) \
	op(EClientRequestType::ReservationRemoveMembers) \
	op(EClientRequestType::AddOrUpdateReservation) 

enum class EClientRequestType : uint8;
template<> struct TIsUEnumClass<EClientRequestType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EClientRequestType>();
// ********** End Enum EClientRequestType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
