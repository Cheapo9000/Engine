// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndMatchCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h
#error "EndMatchCallbackProxy.generated.h already included, missing '#pragma once' in EndMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ITurnBasedMatchInterface;
class UEndMatchCallbackProxy;
class UObject;

// ********** Begin Class UEndMatchCallbackProxy ***************************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEndMatch);


struct Z_Construct_UClass_UEndMatchCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUEndMatchCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UEndMatchCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UEndMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UEndMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndMatchCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndMatchCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEndMatchCallbackProxy(UEndMatchCallbackProxy&&) = delete; \
	UEndMatchCallbackProxy(const UEndMatchCallbackProxy&) = delete;


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEndMatchCallbackProxy;

// ********** End Class UEndMatchCallbackProxy *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
