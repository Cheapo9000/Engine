// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconHost.h"

#ifdef LOBBY_LobbyBeaconHost_generated_h
#error "LobbyBeaconHost.generated.h already included, missing '#pragma once' in LobbyBeaconHost.h"
#endif
#define LOBBY_LobbyBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyBeaconHost *********************************************************
struct Z_Construct_UClass_ALobbyBeaconHost_Statics;
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_26_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconHost(); \
	friend struct ::Z_Construct_UClass_ALobbyBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOBBY_API UClass* ::Z_Construct_UClass_ALobbyBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), Z_Construct_UClass_ALobbyBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(ALobbyBeaconHost)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOBBY_API ALobbyBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOBBY_API, ALobbyBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyBeaconHost(ALobbyBeaconHost&&) = delete; \
	ALobbyBeaconHost(const ALobbyBeaconHost&) = delete; \
	LOBBY_API virtual ~ALobbyBeaconHost();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_23_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_26_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyBeaconHost;

// ********** End Class ALobbyBeaconHost ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
