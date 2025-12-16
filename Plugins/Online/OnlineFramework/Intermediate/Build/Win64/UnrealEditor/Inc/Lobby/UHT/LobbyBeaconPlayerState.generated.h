// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconPlayerState.h"

#ifdef LOBBY_LobbyBeaconPlayerState_generated_h
#error "LobbyBeaconPlayerState.generated.h already included, missing '#pragma once' in LobbyBeaconPlayerState.h"
#endif
#define LOBBY_LobbyBeaconPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyBeaconPlayerState **************************************************
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_InLobby); \
	DECLARE_FUNCTION(execOnRep_PartyOwner); \
	DECLARE_FUNCTION(execOnRep_UniqueId);


struct Z_Construct_UClass_ALobbyBeaconPlayerState_Statics;
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconPlayerState(); \
	friend struct ::Z_Construct_UClass_ALobbyBeaconPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOBBY_API UClass* ::Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyBeaconPlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ALobbyBeaconPlayerState) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	LOBBY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DisplayName=NETFIELD_REP_START, \
		UniqueId, \
		PartyOwnerUniqueId, \
		bInLobby, \
		ClientActor, \
		NETFIELD_REP_END=ClientActor	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(LOBBY_API)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOBBY_API ALobbyBeaconPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOBBY_API, ALobbyBeaconPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconPlayerState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyBeaconPlayerState(ALobbyBeaconPlayerState&&) = delete; \
	ALobbyBeaconPlayerState(const ALobbyBeaconPlayerState&) = delete; \
	LOBBY_API virtual ~ALobbyBeaconPlayerState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_18_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyBeaconPlayerState;

// ********** End Class ALobbyBeaconPlayerState ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
