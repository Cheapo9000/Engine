// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpectatorBeaconHost.h"

#ifdef ONLINESUBSYSTEMUTILS_SpectatorBeaconHost_generated_h
#error "SpectatorBeaconHost.generated.h already included, missing '#pragma once' in SpectatorBeaconHost.h"
#endif
#define ONLINESUBSYSTEMUTILS_SpectatorBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpectatorBeaconHost *****************************************************
struct Z_Construct_UClass_ASpectatorBeaconHost_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_56_INCLASS \
private: \
	static void StaticRegisterNativesASpectatorBeaconHost(); \
	friend struct ::Z_Construct_UClass_ASpectatorBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ASpectatorBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpectatorBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ASpectatorBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(ASpectatorBeaconHost)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ASpectatorBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ASpectatorBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpectatorBeaconHost(ASpectatorBeaconHost&&) = delete; \
	ASpectatorBeaconHost(const ASpectatorBeaconHost&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ASpectatorBeaconHost();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_53_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_56_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpectatorBeaconHost;

// ********** End Class ASpectatorBeaconHost *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
