// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosBeaconHost.h"

#ifdef QOS_QosBeaconHost_generated_h
#error "QosBeaconHost.generated.h already included, missing '#pragma once' in QosBeaconHost.h"
#endif
#define QOS_QosBeaconHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AQosBeaconHost ***********************************************************
struct Z_Construct_UClass_AQosBeaconHost_Statics;
QOS_API UClass* Z_Construct_UClass_AQosBeaconHost_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAQosBeaconHost(); \
	friend struct ::Z_Construct_UClass_AQosBeaconHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QOS_API UClass* ::Z_Construct_UClass_AQosBeaconHost_NoRegister(); \
public: \
	DECLARE_CLASS2(AQosBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), Z_Construct_UClass_AQosBeaconHost_NoRegister) \
	DECLARE_SERIALIZER(AQosBeaconHost)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QOS_API AQosBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQosBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QOS_API, AQosBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQosBeaconHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQosBeaconHost(AQosBeaconHost&&) = delete; \
	AQosBeaconHost(const AQosBeaconHost&) = delete; \
	QOS_API virtual ~AQosBeaconHost();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQosBeaconHost;

// ********** End Class AQosBeaconHost *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
