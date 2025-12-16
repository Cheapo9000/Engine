// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeacon.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineBeacon_generated_h
#error "OnlineBeacon.generated.h already included, missing '#pragma once' in OnlineBeacon.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeacon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineBeacon ************************************************************
struct Z_Construct_UClass_AOnlineBeacon_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeacon(); \
	friend struct ::Z_Construct_UClass_AOnlineBeacon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_AOnlineBeacon_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineBeacon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_AOnlineBeacon_NoRegister) \
	DECLARE_SERIALIZER(AOnlineBeacon)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API AOnlineBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeacon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, AOnlineBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeacon); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineBeacon(AOnlineBeacon&&) = delete; \
	AOnlineBeacon(const AOnlineBeacon&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~AOnlineBeacon();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_32_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_35_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineBeacon;

// ********** End Class AOnlineBeacon **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
