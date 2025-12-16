// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FindTurnBasedMatchCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_FindTurnBasedMatchCallbackProxy_generated_h
#error "FindTurnBasedMatchCallbackProxy.generated.h already included, missing '#pragma once' in FindTurnBasedMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_FindTurnBasedMatchCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ITurnBasedMatchInterface;
class UFindTurnBasedMatchCallbackProxy;
class UObject;

// ********** Begin Delegate FOnlineTurnBasedMatchResult *******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_16_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineTurnBasedMatchResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineTurnBasedMatchResult, const FString& MatchID);


// ********** End Delegate FOnlineTurnBasedMatchResult *********************************************

// ********** Begin Class UFindTurnBasedMatchCallbackProxy *****************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindTurnBasedMatch);


struct Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFindTurnBasedMatchCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UFindTurnBasedMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UFindTurnBasedMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindTurnBasedMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindTurnBasedMatchCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindTurnBasedMatchCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFindTurnBasedMatchCallbackProxy(UFindTurnBasedMatchCallbackProxy&&) = delete; \
	UFindTurnBasedMatchCallbackProxy(const UFindTurnBasedMatchCallbackProxy&) = delete;


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_36_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFindTurnBasedMatchCallbackProxy;

// ********** End Class UFindTurnBasedMatchCallbackProxy *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
