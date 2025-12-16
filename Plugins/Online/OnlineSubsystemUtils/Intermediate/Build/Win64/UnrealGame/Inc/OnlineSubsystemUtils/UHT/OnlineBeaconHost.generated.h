// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconHost.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconHost_generated_h
#error "OnlineBeaconHost.generated.h already included, missing '#pragma once' in OnlineBeaconHost.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeaconHost ********************************************************
struct Z_Construct_UClass_AOnlineBeaconHost_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconHost(); \
	friend struct ::Z_Construct_UClass_AOnlineBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeaconHost, AOnlineBeacon, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeaconHost)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API AOnlineBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, AOnlineBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeaconHost(AOnlineBeaconHost&&) = delete; \
	AOnlineBeaconHost(const AOnlineBeaconHost&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~AOnlineBeaconHost();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_27_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_32_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeaconHost;

// ********** End Class AOnlineBeaconHost **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
