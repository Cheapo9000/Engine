// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OnlineBeaconUnitTestNetDriver.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestNetDriver_generated_h
#error "OnlineBeaconUnitTestNetDriver.generated.h already included, missing '#pragma once' in OnlineBeaconUnitTestNetDriver.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconUnitTestNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineBeaconUnitTestNetDriver *******************************************
struct Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineBeaconUnitTestNetDriver(); \
	friend struct ::Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineBeaconUnitTestNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UOnlineBeaconUnitTestNetDriver)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineBeaconUnitTestNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBeaconUnitTestNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineBeaconUnitTestNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBeaconUnitTestNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineBeaconUnitTestNetDriver(UOnlineBeaconUnitTestNetDriver&&) = delete; \
	UOnlineBeaconUnitTestNetDriver(const UOnlineBeaconUnitTestNetDriver&) = delete; \
	NO_API virtual ~UOnlineBeaconUnitTestNetDriver();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineBeaconUnitTestNetDriver;

// ********** End Class UOnlineBeaconUnitTestNetDriver *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
