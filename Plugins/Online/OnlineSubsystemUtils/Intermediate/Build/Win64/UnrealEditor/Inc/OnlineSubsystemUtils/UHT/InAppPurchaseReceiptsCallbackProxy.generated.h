// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseReceiptsCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseReceiptsCallbackProxy_generated_h
#error "InAppPurchaseReceiptsCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseReceiptsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseReceiptsCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseReceiptsCallbackProxy;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseReceiptInfo2;

// ********** Begin Delegate FOnlineProxyInAppReceiptsResult ***************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_9_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineProxyInAppReceiptsResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppReceiptsResult, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts);


// ********** End Delegate FOnlineProxyInAppReceiptsResult *****************************************

// ********** Begin Class UInAppPurchaseReceiptsCallbackProxy **************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestoreOwnedProducts); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwnedProducts); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseGetKnownReceipts);


struct Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UInAppPurchaseReceiptsCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UInAppPurchaseReceiptsCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseReceiptsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseReceiptsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseReceiptsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseReceiptsCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInAppPurchaseReceiptsCallbackProxy(UInAppPurchaseReceiptsCallbackProxy&&) = delete; \
	UInAppPurchaseReceiptsCallbackProxy(const UInAppPurchaseReceiptsCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseReceiptsCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_11_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInAppPurchaseReceiptsCallbackProxy;

// ********** End Class UInAppPurchaseReceiptsCallbackProxy ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
