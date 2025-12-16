// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTShared.h"

#ifdef MQTTCORE_MQTTShared_generated_h
#error "MQTTShared.generated.h already included, missing '#pragma once' in MQTTShared.h"
#endif
#define MQTTCORE_MQTTShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMQTTURL **********************************************************
struct Z_Construct_UScriptStruct_FMQTTURL_Statics;
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMQTTURL_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMQTTURL;
// ********** End ScriptStruct FMQTTURL ************************************************************

// ********** Begin ScriptStruct FMQTTTopic ********************************************************
struct Z_Construct_UScriptStruct_FMQTTTopic_Statics;
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMQTTTopic_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMQTTTopic;
// ********** End ScriptStruct FMQTTTopic **********************************************************

// ********** Begin ScriptStruct FMQTTTopicFilter **************************************************
struct Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics;
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMQTTTopic Super;


struct FMQTTTopicFilter;
// ********** End ScriptStruct FMQTTTopicFilter ****************************************************

// ********** Begin ScriptStruct FMQTTTopicTemplate ************************************************
struct Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics;
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMQTTTopic Super;


struct FMQTTTopicTemplate;
// ********** End ScriptStruct FMQTTTopicTemplate **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h

// ********** Begin Enum EMQTTScheme ***************************************************************
#define FOREACH_ENUM_EMQTTSCHEME(op) \
	op(EMQTTScheme::MQTT) \
	op(EMQTTScheme::MQTTS) 

enum class EMQTTScheme : uint8;
template<> struct TIsUEnumClass<EMQTTScheme> { enum { Value = true }; };
template<> MQTTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMQTTScheme>();
// ********** End Enum EMQTTScheme *****************************************************************

// ********** Begin Enum EMQTTQualityOfService *****************************************************
#define FOREACH_ENUM_EMQTTQUALITYOFSERVICE(op) \
	op(EMQTTQualityOfService::Once) \
	op(EMQTTQualityOfService::AtLeastOnce) \
	op(EMQTTQualityOfService::ExactlyOnce) 

enum class EMQTTQualityOfService : uint8;
template<> struct TIsUEnumClass<EMQTTQualityOfService> { enum { Value = true }; };
template<> MQTTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMQTTQualityOfService>();
// ********** End Enum EMQTTQualityOfService *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
