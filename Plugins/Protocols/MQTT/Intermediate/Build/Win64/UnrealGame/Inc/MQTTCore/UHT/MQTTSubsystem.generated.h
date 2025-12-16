// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTSubsystem.h"

#ifdef MQTTCORE_MQTTSubsystem_generated_h
#error "MQTTSubsystem.generated.h already included, missing '#pragma once' in MQTTSubsystem.h"
#endif
#define MQTTCORE_MQTTSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMQTTClientObject;
class UObject;
struct FJsonObjectWrapper;
struct FMQTTClientMessage;
struct FMQTTURL;

// ********** Begin Class UMQTTSubsystem ***********************************************************
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPayloadJson); \
	DECLARE_FUNCTION(execGetPayloadString); \
	DECLARE_FUNCTION(execGetOrCreateClient); \
	DECLARE_FUNCTION(execGetOrCreateClient_WithProjectURL);


struct Z_Construct_UClass_UMQTTSubsystem_Statics;
MQTTCORE_API UClass* Z_Construct_UClass_UMQTTSubsystem_NoRegister();

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTSubsystem(); \
	friend struct ::Z_Construct_UClass_UMQTTSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MQTTCORE_API UClass* ::Z_Construct_UClass_UMQTTSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMQTTSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), Z_Construct_UClass_UMQTTSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMQTTSubsystem)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMQTTSubsystem(UMQTTSubsystem&&) = delete; \
	UMQTTSubsystem(const UMQTTSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMQTTSubsystem) \
	NO_API virtual ~UMQTTSubsystem();


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMQTTSubsystem;

// ********** End Class UMQTTSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
