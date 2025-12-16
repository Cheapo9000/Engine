// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiUserSubsystem.h"

#ifdef MULTIUSERCLIENTLIBRARY_MultiUserSubsystem_generated_h
#error "MultiUserSubsystem.generated.h already included, missing '#pragma once' in MultiUserSubsystem.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStruct;
enum class EMultiUserClientStatus : uint8;
struct FGuid;
struct FMultiUserBlueprintEventData;
struct FMultiUserClientInfo;

// ********** Begin Delegate FOnSessionConnected ***************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_17_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FOnSessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSessionConnected);


// ********** End Delegate FOnSessionConnected *****************************************************

// ********** Begin Delegate FOnSessionDisconnected ************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_18_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FOnSessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSessionDisconnected);


// ********** End Delegate FOnSessionDisconnected **************************************************

// ********** Begin Delegate FOnSessionClientChanged ***********************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_19_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FOnSessionClientChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSessionClientChanged, EMultiUserClientStatus Status, FMultiUserClientInfo const& ClientInfo);


// ********** End Delegate FOnSessionClientChanged *************************************************

// ********** Begin ScriptStruct FMultiUserBlueprintEventData **************************************
struct Z_Construct_UScriptStruct_FMultiUserBlueprintEventData_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserBlueprintEventData_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserBlueprintEventData;
// ********** End ScriptStruct FMultiUserBlueprintEventData ****************************************

// ********** Begin Delegate FCustomEventHandler ***************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_29_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FCustomEventHandler_DelegateWrapper(const FScriptDelegate& CustomEventHandler, FMultiUserBlueprintEventData Data);


// ********** End Delegate FCustomEventHandler *****************************************************

// ********** Begin Class UMultiUserSubsystem ******************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterCustomEventHandler); \
	DECLARE_FUNCTION(execRegisterCustomEventHandler); \
	DECLARE_FUNCTION(execGetRemoteClientIds); \
	DECLARE_FUNCTION(execGetLocalClientId); \
	DECLARE_FUNCTION(execIsConnectedToSession);


struct Z_Construct_UClass_UMultiUserSubsystem_Statics;
	struct Z_Construct_UFunction_UMultiUserSubsystem_K2_SendCustomEvent_Statics; \
	struct Z_Construct_UFunction_UMultiUserSubsystem_K2_ExtractEventData_Statics; \
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserSubsystem_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserSubsystem(); \
	friend struct ::Z_Construct_UClass_UMultiUserSubsystem_Statics; \
	friend struct ::Z_Construct_UFunction_UMultiUserSubsystem_K2_SendCustomEvent_Statics; \
	friend struct ::Z_Construct_UFunction_UMultiUserSubsystem_K2_ExtractEventData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UMultiUserSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UMultiUserSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserSubsystem)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserSubsystem(UMultiUserSubsystem&&) = delete; \
	UMultiUserSubsystem(const UMultiUserSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiUserSubsystem) \
	NO_API virtual ~UMultiUserSubsystem();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_31_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserSubsystem;

// ********** End Class UMultiUserSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
