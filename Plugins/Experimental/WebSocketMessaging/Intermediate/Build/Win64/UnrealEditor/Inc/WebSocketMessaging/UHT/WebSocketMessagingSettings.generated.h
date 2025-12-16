// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebSocketMessagingSettings.h"

#ifdef WEBSOCKETMESSAGING_WebSocketMessagingSettings_generated_h
#error "WebSocketMessagingSettings.generated.h already included, missing '#pragma once' in WebSocketMessagingSettings.h"
#endif
#define WEBSOCKETMESSAGING_WebSocketMessagingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSocketMessagingSettings **********************************************
struct Z_Construct_UClass_UWebSocketMessagingSettings_Statics;
WEBSOCKETMESSAGING_API UClass* Z_Construct_UClass_UWebSocketMessagingSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketMessagingSettings(); \
	friend struct ::Z_Construct_UClass_UWebSocketMessagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBSOCKETMESSAGING_API UClass* ::Z_Construct_UClass_UWebSocketMessagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSocketMessagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebSocketMessaging"), Z_Construct_UClass_UWebSocketMessagingSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebSocketMessagingSettings)


#define FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketMessagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSocketMessagingSettings(UWebSocketMessagingSettings&&) = delete; \
	UWebSocketMessagingSettings(const UWebSocketMessagingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketMessagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketMessagingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketMessagingSettings) \
	NO_API virtual ~UWebSocketMessagingSettings();


#define FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSocketMessagingSettings;

// ********** End Class UWebSocketMessagingSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WebSocketMessaging_Source_WebSocketMessaging_Private_WebSocketMessagingSettings_h

// ********** Begin Enum EWebSocketMessagingTransportFormat ****************************************
#define FOREACH_ENUM_EWEBSOCKETMESSAGINGTRANSPORTFORMAT(op) \
	op(EWebSocketMessagingTransportFormat::Json) \
	op(EWebSocketMessagingTransportFormat::Cbor) 

enum class EWebSocketMessagingTransportFormat : uint8;
template<> struct TIsUEnumClass<EWebSocketMessagingTransportFormat> { enum { Value = true }; };
template<> WEBSOCKETMESSAGING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWebSocketMessagingTransportFormat>();
// ********** End Enum EWebSocketMessagingTransportFormat ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
