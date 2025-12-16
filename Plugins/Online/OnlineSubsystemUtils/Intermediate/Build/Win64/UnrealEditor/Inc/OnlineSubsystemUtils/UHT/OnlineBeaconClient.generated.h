// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconClient.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h
#error "OnlineBeaconClient.generated.h already included, missing '#pragma once' in OnlineBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconClient ******************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_RPC_WRAPPERS \
	ONLINESUBSYSTEMUTILS_API virtual void ClientOnConnected_Implementation(); \
	DECLARE_FUNCTION(execClientOnConnected);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AOnlineBeaconClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconClient(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconClient, AOnlineBeacon, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, AOnlineBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconClient(AOnlineBeaconClient&&) = delete; \
	AOnlineBeaconClient(const AOnlineBeaconClient&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~AOnlineBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_42_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconClient;

// ********** End Class AOnlineBeaconClient ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h

// ********** Begin Enum EBeaconConnectionState ****************************************************
#define FOREACH_ENUM_EBEACONCONNECTIONSTATE(op) \
	op(EBeaconConnectionState::Invalid) \
	op(EBeaconConnectionState::Closed) \
	op(EBeaconConnectionState::Pending) \
	op(EBeaconConnectionState::Open) 

enum class EBeaconConnectionState : uint8;
template<> struct TIsUEnumClass<EBeaconConnectionState> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBeaconConnectionState>();
// ********** End Enum EBeaconConnectionState ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
