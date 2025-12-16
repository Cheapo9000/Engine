// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestBeaconHost.h"

#ifdef ONLINESUBSYSTEMUTILS_TestBeaconHost_generated_h
#error "TestBeaconHost.generated.h already included, missing '#pragma once' in TestBeaconHost.h"
#endif
#define ONLINESUBSYSTEMUTILS_TestBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestBeaconHost **********************************************************
struct Z_Construct_UClass_ATestBeaconHost_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATestBeaconHost(); \
	friend struct ::Z_Construct_UClass_ATestBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ATestBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ATestBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(ATestBeaconHost)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ATestBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ATestBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestBeaconHost(ATestBeaconHost&&) = delete; \
	ATestBeaconHost(const ATestBeaconHost&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ATestBeaconHost();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestBeaconHost;

// ********** End Class ATestBeaconHost ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
