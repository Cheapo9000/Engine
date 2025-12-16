// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseCallbackProxy2.h"

#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h
#error "InAppPurchaseCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseCallbackProxy2;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseReceiptInfo2;

// ********** Begin ScriptStruct FInAppPurchaseProductInfo2 ****************************************
struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FInAppPurchaseProductInfo2;
// ********** End ScriptStruct FInAppPurchaseProductInfo2 ******************************************

// ********** Begin Delegate FInAppPurchaseResult2 *************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_66_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FInAppPurchaseResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts);


// ********** End Delegate FInAppPurchaseResult2 ***************************************************

// ********** Begin Class UInAppPurchaseCallbackProxy2 *********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwned); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseUnprocessedPurchases); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy2(); \
	friend struct ::Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister(); \
public: \
	DECLARE_CLASS2(UInAppPurchaseCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy2); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2&&) = delete; \
	UInAppPurchaseCallbackProxy2(const UInAppPurchaseCallbackProxy2&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_68_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInAppPurchaseCallbackProxy2;

// ********** End Class UInAppPurchaseCallbackProxy2 ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
