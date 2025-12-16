// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetConnection.h"

#ifdef SOCKETSUBSYSTEMSTEAMIP_SteamNetConnection_generated_h
#error "SteamNetConnection.generated.h already included, missing '#pragma once' in SteamNetConnection.h"
#endif
#define SOCKETSUBSYSTEMSTEAMIP_SteamNetConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USteamNetConnection ******************************************************
struct Z_Construct_UClass_USteamNetConnection_Statics;
SOCKETSUBSYSTEMSTEAMIP_API UClass* Z_Construct_UClass_USteamNetConnection_NoRegister();

#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSteamNetConnection(); \
	friend struct ::Z_Construct_UClass_USteamNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCKETSUBSYSTEMSTEAMIP_API UClass* ::Z_Construct_UClass_USteamNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamNetConnection, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocketSubsystemSteamIP"), Z_Construct_UClass_USteamNetConnection_NoRegister) \
	DECLARE_SERIALIZER(USteamNetConnection)


#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamNetConnection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamNetConnection(USteamNetConnection&&) = delete; \
	USteamNetConnection(const USteamNetConnection&) = delete; \
	NO_API virtual ~USteamNetConnection();


#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_14_PROLOG
#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_17_INCLASS \
	FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamNetConnection;

// ********** End Class USteamNetConnection ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
