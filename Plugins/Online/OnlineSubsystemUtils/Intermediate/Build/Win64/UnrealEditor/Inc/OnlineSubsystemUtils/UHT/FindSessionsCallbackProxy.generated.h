// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FindSessionsCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h
#error "FindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in FindSessionsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UFindSessionsCallbackProxy;
class UObject;
struct FBlueprintSessionResult;

// ********** Begin ScriptStruct FBlueprintSessionResult *******************************************
struct Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FBlueprintSessionResult;
// ********** End ScriptStruct FBlueprintSessionResult *********************************************

// ********** Begin Delegate FBlueprintFindSessionsResultDelegate **********************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_19_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FBlueprintFindSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindSessionsResultDelegate, TArray<FBlueprintSessionResult> const& Results);


// ********** End Delegate FBlueprintFindSessionsResultDelegate ************************************

// ********** Begin Class UFindSessionsCallbackProxy ***********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMaxPlayers); \
	DECLARE_FUNCTION(execGetCurrentPlayers); \
	DECLARE_FUNCTION(execGetServerName); \
	DECLARE_FUNCTION(execGetPingInMs); \
	DECLARE_FUNCTION(execFindSessions);


struct Z_Construct_UClass_UFindSessionsCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UFindSessionsCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindSessionsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFindSessionsCallbackProxy(UFindSessionsCallbackProxy&&) = delete; \
	UFindSessionsCallbackProxy(const UFindSessionsCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UFindSessionsCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_21_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFindSessionsCallbackProxy;

// ********** End Class UFindSessionsCallbackProxy *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
