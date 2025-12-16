// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebSocketConnection.h"

#ifdef WEBSOCKETNETWORKING_WebSocketConnection_generated_h
#error "WebSocketConnection.generated.h already included, missing '#pragma once' in WebSocketConnection.h"
#endif
#define WEBSOCKETNETWORKING_WebSocketConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSocketConnection *****************************************************
struct Z_Construct_UClass_UWebSocketConnection_Statics;
WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketConnection_NoRegister();

#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketConnection(); \
	friend struct ::Z_Construct_UClass_UWebSocketConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBSOCKETNETWORKING_API UClass* ::Z_Construct_UClass_UWebSocketConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSocketConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebSocketNetworking"), Z_Construct_UClass_UWebSocketConnection_NoRegister) \
	DECLARE_SERIALIZER(UWebSocketConnection)


#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBSOCKETNETWORKING_API UWebSocketConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBSOCKETNETWORKING_API, UWebSocketConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketConnection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSocketConnection(UWebSocketConnection&&) = delete; \
	UWebSocketConnection(const UWebSocketConnection&) = delete; \
	WEBSOCKETNETWORKING_API virtual ~UWebSocketConnection();


#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSocketConnection;

// ********** End Class UWebSocketConnection *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
