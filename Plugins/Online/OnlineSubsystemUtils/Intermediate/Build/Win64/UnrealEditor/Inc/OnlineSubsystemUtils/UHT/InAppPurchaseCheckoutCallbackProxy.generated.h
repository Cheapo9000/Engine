// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseCheckoutCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCheckoutCallbackProxy_generated_h
#error "InAppPurchaseCheckoutCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseCheckoutCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCheckoutCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseCheckoutCallbackProxy;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseReceiptInfo2;

// ********** Begin Delegate FOnlineProxyInAppCheckoutResult ***************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineProxyInAppCheckoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppCheckoutResult, EInAppPurchaseStatus PurchaseStatus, FInAppPurchaseReceiptInfo2 const& InAppPurchaseReceipt);


// ********** End Delegate FOnlineProxyInAppCheckoutResult *****************************************

// ********** Begin Class UInAppPurchaseCheckoutCallbackProxy **************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseCheckout);


struct Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UInAppPurchaseCheckoutCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UInAppPurchaseCheckoutCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCheckoutCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCheckoutCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCheckoutCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCheckoutCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInAppPurchaseCheckoutCallbackProxy(UInAppPurchaseCheckoutCallbackProxy&&) = delete; \
	UInAppPurchaseCheckoutCallbackProxy(const UInAppPurchaseCheckoutCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseCheckoutCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_12_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInAppPurchaseCheckoutCallbackProxy;

// ********** End Class UInAppPurchaseCheckoutCallbackProxy ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
