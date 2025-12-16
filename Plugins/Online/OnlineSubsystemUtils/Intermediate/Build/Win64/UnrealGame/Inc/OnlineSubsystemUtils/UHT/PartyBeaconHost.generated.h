// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartyBeaconHost.h"

#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconHost_generated_h
#error "PartyBeaconHost.generated.h already included, missing '#pragma once' in PartyBeaconHost.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APartyBeaconHost *********************************************************
struct Z_Construct_UClass_APartyBeaconHost_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_56_INCLASS \
private: \
	static void StaticRegisterNativesAPartyBeaconHost(); \
	friend struct ::Z_Construct_UClass_APartyBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_APartyBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(APartyBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_APartyBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(APartyBeaconHost)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API APartyBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, APartyBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APartyBeaconHost(APartyBeaconHost&&) = delete; \
	APartyBeaconHost(const APartyBeaconHost&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~APartyBeaconHost();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_53_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_56_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APartyBeaconHost;

// ********** End Class APartyBeaconHost ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
