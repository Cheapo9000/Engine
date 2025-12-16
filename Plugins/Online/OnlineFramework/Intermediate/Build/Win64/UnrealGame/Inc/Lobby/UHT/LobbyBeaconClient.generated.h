// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconClient.h"

#ifdef LOBBY_LobbyBeaconClient_generated_h
#error "LobbyBeaconClient.generated.h already included, missing '#pragma once' in LobbyBeaconClient.h"
#endif
#define LOBBY_LobbyBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinabilitySettings;
struct FUniqueNetIdRepl;

// ********** Begin Class ALobbyBeaconClient *******************************************************
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_RPC_WRAPPERS \
	LOBBY_API virtual void ClientPlayerLeft_Implementation(FUniqueNetIdRepl const& InUniqueId); \
	LOBBY_API virtual void ClientPlayerJoined_Implementation(FText const& NewPlayerName, FUniqueNetIdRepl const& InUniqueId); \
	LOBBY_API virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	LOBBY_API virtual void ClientLoginComplete_Implementation(FUniqueNetIdRepl const& InUniqueId, bool bWasSuccessful); \
	LOBBY_API virtual bool ServerSetPartyOwner_Validate(FUniqueNetIdRepl const& , FUniqueNetIdRepl const& ); \
	LOBBY_API virtual void ServerSetPartyOwner_Implementation(FUniqueNetIdRepl const& InUniqueId, FUniqueNetIdRepl const& InPartyOwnerId); \
	LOBBY_API virtual bool ServerKickPlayer_Validate(FUniqueNetIdRepl const& , FText const& ); \
	LOBBY_API virtual void ServerKickPlayer_Implementation(FUniqueNetIdRepl const& PlayerToKick, FText const& Reason); \
	LOBBY_API virtual void ClientAckJoiningServer_Implementation(); \
	LOBBY_API virtual bool ServerNotifyJoiningServer_Validate(); \
	LOBBY_API virtual void ServerNotifyJoiningServer_Implementation(); \
	LOBBY_API virtual bool ServerDisconnectFromLobby_Validate(); \
	LOBBY_API virtual void ServerDisconnectFromLobby_Implementation(); \
	LOBBY_API virtual bool ServerLoginPlayer_Validate(const FString& , FUniqueNetIdRepl const& , const FString& ); \
	LOBBY_API virtual void ServerLoginPlayer_Implementation(const FString& InSessionId, FUniqueNetIdRepl const& InUniqueId, const FString& UrlString); \
	LOBBY_API virtual bool ServerCheat_Validate(const FString& ); \
	LOBBY_API virtual void ServerCheat_Implementation(const FString& Msg); \
	LOBBY_API virtual void ClientSetInviteFlags_Implementation(FJoinabilitySettings const& Settings); \
	LOBBY_API virtual void ClientJoinGame_Implementation(); \
	DECLARE_FUNCTION(execClientPlayerLeft); \
	DECLARE_FUNCTION(execClientPlayerJoined); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientLoginComplete); \
	DECLARE_FUNCTION(execServerSetPartyOwner); \
	DECLARE_FUNCTION(execServerKickPlayer); \
	DECLARE_FUNCTION(execClientAckJoiningServer); \
	DECLARE_FUNCTION(execServerNotifyJoiningServer); \
	DECLARE_FUNCTION(execServerDisconnectFromLobby); \
	DECLARE_FUNCTION(execServerLoginPlayer); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execClientSetInviteFlags); \
	DECLARE_FUNCTION(execClientJoinGame);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALobbyBeaconClient_Statics;
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconClient(); \
	friend struct ::Z_Construct_UClass_ALobbyBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOBBY_API UClass* ::Z_Construct_UClass_ALobbyBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), Z_Construct_UClass_ALobbyBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(ALobbyBeaconClient) \
	LOBBY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyState=NETFIELD_REP_START, \
		PlayerState, \
		NETFIELD_REP_END=PlayerState	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(LOBBY_API)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOBBY_API ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOBBY_API, ALobbyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyBeaconClient(ALobbyBeaconClient&&) = delete; \
	ALobbyBeaconClient(const ALobbyBeaconClient&) = delete; \
	LOBBY_API virtual ~ALobbyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_57_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyBeaconClient;

// ********** End Class ALobbyBeaconClient *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h

// ********** Begin Enum ELobbyBeaconJoinState *****************************************************
#define FOREACH_ENUM_ELOBBYBEACONJOINSTATE(op) \
	op(ELobbyBeaconJoinState::None) \
	op(ELobbyBeaconJoinState::SentJoinRequest) \
	op(ELobbyBeaconJoinState::JoinRequestAcknowledged) 

enum class ELobbyBeaconJoinState : uint8;
template<> struct TIsUEnumClass<ELobbyBeaconJoinState> { enum { Value = true }; };
template<> LOBBY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELobbyBeaconJoinState>();
// ********** End Enum ELobbyBeaconJoinState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
