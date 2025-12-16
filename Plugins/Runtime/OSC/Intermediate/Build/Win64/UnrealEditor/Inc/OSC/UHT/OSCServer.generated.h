// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCServer.h"

#ifdef OSC_OSCServer_generated_h
#error "OSCServer.generated.h already included, missing '#pragma once' in OSCServer.h"
#endif
#define OSC_OSCServer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOSCAddress;
struct FOSCBundle;
struct FOSCMessage;

// ********** Begin Delegate FOSCReceivedMessageEvent **********************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_30_DELEGATE \
OSC_API void FOSCReceivedMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedMessageEvent, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


// ********** End Delegate FOSCReceivedMessageEvent ************************************************

// ********** Begin Delegate FOSCDispatchMessageEvent **********************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_32_DELEGATE \
OSC_API void FOSCDispatchMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCDispatchMessageEvent, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


// ********** End Delegate FOSCDispatchMessageEvent ************************************************

// ********** Begin Delegate FOSCReceivedBundleEvent ***********************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_33_DELEGATE \
OSC_API void FOSCReceivedBundleEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedBundleEvent, FOSCBundle const& Bundle, const FString& IPAddress, int32 Port);


// ********** End Delegate FOSCReceivedBundleEvent *************************************************

// ********** Begin Delegate FOSCDispatchMessageEventBP ********************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_35_DELEGATE \
OSC_API void FOSCDispatchMessageEventBP_DelegateWrapper(const FScriptDelegate& OSCDispatchMessageEventBP, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


// ********** End Delegate FOSCDispatchMessageEventBP **********************************************

// ********** Begin Class UOSCServer ***************************************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBoundOSCAddressPatterns); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatching); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execUnbindEventFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execBindEventToOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execGetAllowlistedClients); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execGetIpAddress); \
	DECLARE_FUNCTION(execClearAllowlistedClients); \
	DECLARE_FUNCTION(execRemoveAllowlistedClient); \
	DECLARE_FUNCTION(execAddAllowlistedClient); \
	DECLARE_FUNCTION(execSetAllowlistClientsEnabled); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetMulticastLoopback); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execListen); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetMulticastLoopback);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetTickInEditor);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UOSCServer_Statics;
OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUOSCServer(); \
	friend struct ::Z_Construct_UClass_UOSCServer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OSC_API UClass* ::Z_Construct_UClass_UOSCServer_NoRegister(); \
public: \
	DECLARE_CLASS2(UOSCServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), Z_Construct_UClass_UOSCServer_NoRegister) \
	DECLARE_SERIALIZER(UOSCServer)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCServer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOSCServer(UOSCServer&&) = delete; \
	UOSCServer(const UOSCServer&) = delete; \
	NO_API virtual ~UOSCServer();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_145_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_INCLASS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOSCServer;

// ********** End Class UOSCServer *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
