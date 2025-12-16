// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeaderboardFlushCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_LeaderboardFlushCallbackProxy_generated_h
#error "LeaderboardFlushCallbackProxy.generated.h already included, missing '#pragma once' in LeaderboardFlushCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_LeaderboardFlushCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULeaderboardFlushCallbackProxy;

// ********** Begin Delegate FOnLeaderboardFlushed *************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_7_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnLeaderboardFlushed_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFlushed, FName SessionName);


// ********** End Delegate FOnLeaderboardFlushed ***************************************************

// ********** Begin Class ULeaderboardFlushCallbackProxy *******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForFlush);


struct Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULeaderboardFlushCallbackProxy(); \
	friend struct ::Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(ULeaderboardFlushCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(ULeaderboardFlushCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardFlushCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardFlushCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardFlushCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULeaderboardFlushCallbackProxy(ULeaderboardFlushCallbackProxy&&) = delete; \
	ULeaderboardFlushCallbackProxy(const ULeaderboardFlushCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ULeaderboardFlushCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_9_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULeaderboardFlushCallbackProxy;

// ********** End Class ULeaderboardFlushCallbackProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
