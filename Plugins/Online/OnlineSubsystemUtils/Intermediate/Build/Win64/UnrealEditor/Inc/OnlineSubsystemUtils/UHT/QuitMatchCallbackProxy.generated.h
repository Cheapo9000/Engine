// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuitMatchCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_QuitMatchCallbackProxy_generated_h
#error "QuitMatchCallbackProxy.generated.h already included, missing '#pragma once' in QuitMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_QuitMatchCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
class UQuitMatchCallbackProxy;

// ********** Begin Class UQuitMatchCallbackProxy **************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execQuitMatch);


struct Z_Construct_UClass_UQuitMatchCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUQuitMatchCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UQuitMatchCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuitMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UQuitMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UQuitMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuitMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UQuitMatchCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuitMatchCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuitMatchCallbackProxy(UQuitMatchCallbackProxy&&) = delete; \
	UQuitMatchCallbackProxy(const UQuitMatchCallbackProxy&) = delete;


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuitMatchCallbackProxy;

// ********** End Class UQuitMatchCallbackProxy ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
