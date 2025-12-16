// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeaderboardQueryCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_LeaderboardQueryCallbackProxy_generated_h
#error "LeaderboardQueryCallbackProxy.generated.h already included, missing '#pragma once' in LeaderboardQueryCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_LeaderboardQueryCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULeaderboardQueryCallbackProxy;

// ********** Begin Delegate FLeaderboardQueryResult ***********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_8_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FLeaderboardQueryResult_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardQueryResult, int32 LeaderboardValue);


// ********** End Delegate FLeaderboardQueryResult *************************************************

// ********** Begin Class ULeaderboardQueryCallbackProxy *******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForIntQuery);


struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULeaderboardQueryCallbackProxy(); \
	friend struct ::Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(ULeaderboardQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(ULeaderboardQueryCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardQueryCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardQueryCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardQueryCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULeaderboardQueryCallbackProxy(ULeaderboardQueryCallbackProxy&&) = delete; \
	ULeaderboardQueryCallbackProxy(const ULeaderboardQueryCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ULeaderboardQueryCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_10_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULeaderboardQueryCallbackProxy;

// ********** End Class ULeaderboardQueryCallbackProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
