// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconState.h"

#ifdef LOBBY_LobbyBeaconState_generated_h
#error "LobbyBeaconState.generated.h already included, missing '#pragma once' in LobbyBeaconState.h"
#endif
#define LOBBY_LobbyBeaconState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLobbyPlayerStateActorInfo ****************************************
struct Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics; \
	LOBBY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FLobbyPlayerStateActorInfo;
// ********** End ScriptStruct FLobbyPlayerStateActorInfo ******************************************

// ********** Begin ScriptStruct FLobbyPlayerStateInfoArray ****************************************
struct Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics; \
	LOBBY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLobbyPlayerStateInfoArray, Players, LOBBY_API );


struct FLobbyPlayerStateInfoArray;
// ********** End ScriptStruct FLobbyPlayerStateInfoArray ******************************************

// ********** Begin Class ALobbyBeaconState ********************************************************
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_WaitForPlayersTimeRemaining); \
	DECLARE_FUNCTION(execOnRep_LobbyStarted);


struct Z_Construct_UClass_ALobbyBeaconState_Statics;
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconState(); \
	friend struct ::Z_Construct_UClass_ALobbyBeaconState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOBBY_API UClass* ::Z_Construct_UClass_ALobbyBeaconState_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyBeaconState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), Z_Construct_UClass_ALobbyBeaconState_NoRegister) \
	DECLARE_SERIALIZER(ALobbyBeaconState) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	LOBBY_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bLobbyStarted=NETFIELD_REP_START, \
		WaitForPlayersTimeRemaining, \
		Players, \
		NETFIELD_REP_END=Players	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(LOBBY_API)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOBBY_API ALobbyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOBBY_API, ALobbyBeaconState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyBeaconState(ALobbyBeaconState&&) = delete; \
	ALobbyBeaconState(const ALobbyBeaconState&) = delete; \
	LOBBY_API virtual ~ALobbyBeaconState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_170_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyBeaconState;

// ********** End Class ALobbyBeaconState **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
