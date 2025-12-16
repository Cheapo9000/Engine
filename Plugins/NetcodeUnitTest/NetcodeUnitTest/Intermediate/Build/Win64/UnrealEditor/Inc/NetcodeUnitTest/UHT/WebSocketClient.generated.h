// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTests/Engine/WebSocketClient.h"

#ifdef NETCODEUNITTEST_WebSocketClient_generated_h
#error "WebSocketClient.generated.h already included, missing '#pragma once' in WebSocketClient.h"
#endif
#define NETCODEUNITTEST_WebSocketClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSocketClient *********************************************************
struct Z_Construct_UClass_UWebSocketClient_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_UWebSocketClient_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketClient(); \
	friend struct ::Z_Construct_UClass_UWebSocketClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_UWebSocketClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebSocketClient, UIPClient, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_UWebSocketClient_NoRegister) \
	DECLARE_SERIALIZER(UWebSocketClient)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSocketClient(UWebSocketClient&&) = delete; \
	UWebSocketClient(const UWebSocketClient&) = delete; \
	NO_API virtual ~UWebSocketClient();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_12_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_15_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSocketClient;

// ********** End Class UWebSocketClient ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_WebSocketClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
