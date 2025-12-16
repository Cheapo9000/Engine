// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AchievementQueryCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_AchievementQueryCallbackProxy_generated_h
#error "AchievementQueryCallbackProxy.generated.h already included, missing '#pragma once' in AchievementQueryCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementQueryCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAchievementQueryCallbackProxy;
class UObject;

// ********** Begin Class UAchievementQueryCallbackProxy *******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCacheAchievementDescriptions); \
	DECLARE_FUNCTION(execCacheAchievements);


struct Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementQueryCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UAchievementQueryCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UAchievementQueryCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementQueryCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementQueryCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementQueryCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAchievementQueryCallbackProxy(UAchievementQueryCallbackProxy&&) = delete; \
	UAchievementQueryCallbackProxy(const UAchievementQueryCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UAchievementQueryCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_10_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAchievementQueryCallbackProxy;

// ********** End Class UAchievementQueryCallbackProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
