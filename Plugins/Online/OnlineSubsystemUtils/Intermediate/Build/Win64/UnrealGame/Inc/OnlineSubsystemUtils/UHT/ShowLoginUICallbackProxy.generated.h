// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShowLoginUICallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_ShowLoginUICallbackProxy_generated_h
#error "ShowLoginUICallbackProxy.generated.h already included, missing '#pragma once' in ShowLoginUICallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_ShowLoginUICallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
class UShowLoginUICallbackProxy;

// ********** Begin Delegate FOnlineShowLoginUIResult **********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_12_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineShowLoginUIResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineShowLoginUIResult, APlayerController* PlayerController);


// ********** End Delegate FOnlineShowLoginUIResult ************************************************

// ********** Begin Class UShowLoginUICallbackProxy ************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowExternalLoginUI);


struct Z_Construct_UClass_UShowLoginUICallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowLoginUICallbackProxy(); \
	friend struct ::Z_Construct_UClass_UShowLoginUICallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UShowLoginUICallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UShowLoginUICallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShowLoginUICallbackProxy(UShowLoginUICallbackProxy&&) = delete; \
	UShowLoginUICallbackProxy(const UShowLoginUICallbackProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UShowLoginUICallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowLoginUICallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowLoginUICallbackProxy) \
	ONLINESUBSYSTEMUTILS_API virtual ~UShowLoginUICallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_14_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShowLoginUICallbackProxy;

// ********** End Class UShowLoginUICallbackProxy **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
