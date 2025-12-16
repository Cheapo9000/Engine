// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OnlineBeaconUnitTestClient.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestClient_generated_h
#error "OnlineBeaconUnitTestClient.generated.h already included, missing '#pragma once' in OnlineBeaconUnitTestClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconUnitTestClient **********************************************
struct Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconUnitTestClient(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconUnitTestClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconUnitTestClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconUnitTestClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconUnitTestClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconUnitTestClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconUnitTestClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconUnitTestClient(AOnlineBeaconUnitTestClient&&) = delete; \
	AOnlineBeaconUnitTestClient(const AOnlineBeaconUnitTestClient&) = delete; \
	NO_API virtual ~AOnlineBeaconUnitTestClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconUnitTestClient;

// ********** End Class AOnlineBeaconUnitTestClient ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
