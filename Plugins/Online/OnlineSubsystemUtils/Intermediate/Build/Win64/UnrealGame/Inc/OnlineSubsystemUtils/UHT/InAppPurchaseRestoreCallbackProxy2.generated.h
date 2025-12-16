// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseRestoreCallbackProxy2.h"

#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h
#error "InAppPurchaseRestoreCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseRestoreCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseRestoreCallbackProxy2;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseRestoreInfo2;

// ********** Begin ScriptStruct FInAppPurchaseRestoreInfo2 ****************************************
struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FInAppPurchaseRestoreInfo2;
// ********** End ScriptStruct FInAppPurchaseRestoreInfo2 ******************************************

// ********** Begin Delegate FInAppPurchaseRestoreResult2 ******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_33_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FInAppPurchaseRestoreResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseRestoreInfo2> const& InAppPurchaseRestoreInfo);


// ********** End Delegate FInAppPurchaseRestoreResult2 ********************************************

// ********** Begin Class UInAppPurchaseRestoreCallbackProxy2 **************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(); \
	friend struct ::Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister(); \
public: \
	DECLARE_CLASS2(UInAppPurchaseRestoreCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy2); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInAppPurchaseRestoreCallbackProxy2(UInAppPurchaseRestoreCallbackProxy2&&) = delete; \
	UInAppPurchaseRestoreCallbackProxy2(const UInAppPurchaseRestoreCallbackProxy2&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseRestoreCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_35_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInAppPurchaseRestoreCallbackProxy2;

// ********** End Class UInAppPurchaseRestoreCallbackProxy2 ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
