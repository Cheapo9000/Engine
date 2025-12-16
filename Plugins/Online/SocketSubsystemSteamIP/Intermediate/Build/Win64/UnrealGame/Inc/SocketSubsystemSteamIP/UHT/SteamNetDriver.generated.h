// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetDriver.h"

#ifdef SOCKETSUBSYSTEMSTEAMIP_SteamNetDriver_generated_h
#error "SteamNetDriver.generated.h already included, missing '#pragma once' in SteamNetDriver.h"
#endif
#define SOCKETSUBSYSTEMSTEAMIP_SteamNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USteamNetDriver **********************************************************
struct Z_Construct_UClass_USteamNetDriver_Statics;
SOCKETSUBSYSTEMSTEAMIP_API UClass* Z_Construct_UClass_USteamNetDriver_NoRegister();

#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSteamNetDriver(); \
	friend struct ::Z_Construct_UClass_USteamNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCKETSUBSYSTEMSTEAMIP_API UClass* ::Z_Construct_UClass_USteamNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocketSubsystemSteamIP"), Z_Construct_UClass_USteamNetDriver_NoRegister) \
	DECLARE_SERIALIZER(USteamNetDriver)


#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamNetDriver(USteamNetDriver&&) = delete; \
	USteamNetDriver(const USteamNetDriver&) = delete; \
	NO_API virtual ~USteamNetDriver();


#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_17_PROLOG
#define FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_20_INCLASS \
	FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamNetDriver;

// ********** End Class USteamNetDriver ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_SocketSubsystemSteamIP_Source_SocketSubsystemSteamIP_Public_SteamNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
