// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OnlineBeaconUnitTestHost.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestHost_generated_h
#error "OnlineBeaconUnitTestHost.generated.h already included, missing '#pragma once' in OnlineBeaconUnitTestHost.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconUnitTestHost ************************************************
struct Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconUnitTestHost(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconUnitTestHost, AOnlineBeaconHost, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconUnitTestHost)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconUnitTestHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconUnitTestHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconUnitTestHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconUnitTestHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconUnitTestHost(AOnlineBeaconUnitTestHost&&) = delete; \
	AOnlineBeaconUnitTestHost(const AOnlineBeaconUnitTestHost&) = delete; \
	NO_API virtual ~AOnlineBeaconUnitTestHost();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconUnitTestHost;

// ********** End Class AOnlineBeaconUnitTestHost **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
