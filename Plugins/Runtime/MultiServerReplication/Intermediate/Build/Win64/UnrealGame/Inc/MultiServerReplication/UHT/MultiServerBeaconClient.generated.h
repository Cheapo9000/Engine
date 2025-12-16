// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerBeaconClient.h"

#ifdef MULTISERVERREPLICATION_MultiServerBeaconClient_generated_h
#error "MultiServerBeaconClient.generated.h already included, missing '#pragma once' in MultiServerBeaconClient.h"
#endif
#define MULTISERVERREPLICATION_MultiServerBeaconClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMultiServerBeaconClient;
struct FUpdateLevelVisibilityLevelInfo;

// ********** Begin Class AMultiServerBeaconClient *************************************************
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetRemotePeerId_Implementation(const FString& NewRemotePeerId); \
	virtual void ClientPeerConnected_Implementation(const FString& NewRemotePeerId, AMultiServerBeaconClient* Beacon); \
	 bool ServerUpdateMultipleLevelsVisibility_Validate(TArray<FUpdateLevelVisibilityLevelInfo> const& ); \
	void ServerUpdateMultipleLevelsVisibility_Implementation(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities); \
	virtual bool ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo const& ); \
	virtual void ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo const& LevelVisibility); \
	DECLARE_FUNCTION(execServerSetRemotePeerId); \
	DECLARE_FUNCTION(execClientPeerConnected); \
	DECLARE_FUNCTION(execServerUpdateMultipleLevelsVisibility); \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility);


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AMultiServerBeaconClient_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_AMultiServerBeaconClient_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiServerBeaconClient(); \
	friend struct ::Z_Construct_UClass_AMultiServerBeaconClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_AMultiServerBeaconClient_NoRegister(); \
public: \
	DECLARE_CLASS2(AMultiServerBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_AMultiServerBeaconClient_NoRegister) \
	DECLARE_SERIALIZER(AMultiServerBeaconClient)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMultiServerBeaconClient(AMultiServerBeaconClient&&) = delete; \
	AMultiServerBeaconClient(const AMultiServerBeaconClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiServerBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiServerBeaconClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiServerBeaconClient) \
	NO_API virtual ~AMultiServerBeaconClient();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMultiServerBeaconClient;

// ********** End Class AMultiServerBeaconClient ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerBeaconClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
