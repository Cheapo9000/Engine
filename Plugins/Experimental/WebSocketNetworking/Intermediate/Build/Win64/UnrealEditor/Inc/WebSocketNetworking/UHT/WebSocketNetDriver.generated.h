// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebSocketNetDriver.h"

#ifdef WEBSOCKETNETWORKING_WebSocketNetDriver_generated_h
#error "WebSocketNetDriver.generated.h already included, missing '#pragma once' in WebSocketNetDriver.h"
#endif
#define WEBSOCKETNETWORKING_WebSocketNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSocketNetDriver ******************************************************
struct Z_Construct_UClass_UWebSocketNetDriver_Statics;
WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketNetDriver_NoRegister();

#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketNetDriver(); \
	friend struct ::Z_Construct_UClass_UWebSocketNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBSOCKETNETWORKING_API UClass* ::Z_Construct_UClass_UWebSocketNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSocketNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebSocketNetworking"), Z_Construct_UClass_UWebSocketNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UWebSocketNetDriver)


#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBSOCKETNETWORKING_API UWebSocketNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBSOCKETNETWORKING_API, UWebSocketNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSocketNetDriver(UWebSocketNetDriver&&) = delete; \
	UWebSocketNetDriver(const UWebSocketNetDriver&) = delete; \
	WEBSOCKETNETWORKING_API virtual ~UWebSocketNetDriver();


#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSocketNetDriver;

// ********** End Class UWebSocketNetDriver ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
