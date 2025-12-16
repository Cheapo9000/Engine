// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCClient.h"

#ifdef OSC_OSCClient_generated_h
#error "OSCClient.generated.h already included, missing '#pragma once' in OSCClient.h"
#endif
#define OSC_OSCClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOSCBundle;
struct FOSCMessage;

// ********** Begin Class UOSCClient ***************************************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSendOSCBundle); \
	DECLARE_FUNCTION(execSendOSCMessage); \
	DECLARE_FUNCTION(execSetSendIPAddress); \
	DECLARE_FUNCTION(execGetSendIPAddress);


struct Z_Construct_UClass_UOSCClient_Statics;
OSC_API UClass* Z_Construct_UClass_UOSCClient_NoRegister();

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUOSCClient(); \
	friend struct ::Z_Construct_UClass_UOSCClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OSC_API UClass* ::Z_Construct_UClass_UOSCClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UOSCClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), Z_Construct_UClass_UOSCClient_NoRegister) \
	DECLARE_SERIALIZER(UOSCClient)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOSCClient(UOSCClient&&) = delete; \
	UOSCClient(const UOSCClient&) = delete; \
	NO_API virtual ~UOSCClient();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_INCLASS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOSCClient;

// ********** End Class UOSCClient *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
