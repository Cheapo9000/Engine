// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestBeaconClient.h"

#ifdef ONLINESUBSYSTEMUTILS_TestBeaconClient_generated_h
#error "TestBeaconClient.generated.h already included, missing '#pragma once' in TestBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_TestBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestBeaconClient ********************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_RPC_WRAPPERS \
	ONLINESUBSYSTEMUTILS_API virtual bool ServerPong_Validate(); \
	ONLINESUBSYSTEMUTILS_API virtual void ServerPong_Implementation(); \
	ONLINESUBSYSTEMUTILS_API virtual void ClientPing_Implementation(); \
	DECLARE_FUNCTION(execServerPong); \
	DECLARE_FUNCTION(execClientPing);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ATestBeaconClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATestBeaconClient(); \
	friend struct ::Z_Construct_UClass_ATestBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ATestBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ATestBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(ATestBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ATestBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ATestBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestBeaconClient(ATestBeaconClient&&) = delete; \
	ATestBeaconClient(const ATestBeaconClient&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ATestBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestBeaconClient;

// ********** End Class ATestBeaconClient **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
