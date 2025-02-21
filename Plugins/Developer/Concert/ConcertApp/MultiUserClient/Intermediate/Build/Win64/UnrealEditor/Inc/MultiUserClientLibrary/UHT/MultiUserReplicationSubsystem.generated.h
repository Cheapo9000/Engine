// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/MultiUserReplicationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConcertPropertyChainWrapper;
struct FGuid;
struct FMultiUserObjectReplicationSettings;
struct FSoftObjectPath;
#ifdef MULTIUSERCLIENTLIBRARY_MultiUserReplicationSubsystem_generated_h
#error "MultiUserReplicationSubsystem.generated.h already included, missing '#pragma once' in MultiUserReplicationSubsystem.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserReplicationSubsystem_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_25_DELEGATE \
static void FOnServerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnServerStateChanged, FGuid const& EndpointId);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_26_DELEGATE \
static void FOnOfflineClientsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOfflineClientsChanged);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOfflineClientIds); \
	DECLARE_FUNCTION(execIsOwnedByOfflineClient); \
	DECLARE_FUNCTION(execGetOwningOfflineClients); \
	DECLARE_FUNCTION(execGetReplicatedObjects); \
	DECLARE_FUNCTION(execGetRegisteredObjects); \
	DECLARE_FUNCTION(execGetPropertiesRegisteredToObject); \
	DECLARE_FUNCTION(execGetObjectReplicationFrequency); \
	DECLARE_FUNCTION(execIsReplicatingObject);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserReplicationSubsystem(); \
	friend struct Z_Construct_UClass_UMultiUserReplicationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiUserReplicationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserReplicationSubsystem)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiUserReplicationSubsystem(UMultiUserReplicationSubsystem&&); \
	UMultiUserReplicationSubsystem(const UMultiUserReplicationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiUserReplicationSubsystem) \
	NO_API virtual ~UMultiUserReplicationSubsystem();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserReplicationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_MultiUserReplicationSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
