// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AchievementWriteCallbackProxy.h"

#ifdef ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h
#error "AchievementWriteCallbackProxy.generated.h already included, missing '#pragma once' in AchievementWriteCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAchievementWriteCallbackProxy;
class UObject;

// ********** Begin Delegate FAchievementWriteDelegate *********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FAchievementWriteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementWriteDelegate, FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);


// ********** End Delegate FAchievementWriteDelegate ***********************************************

// ********** Begin Delegate FAchievementWriteCompleteDelegate *************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_11_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FAchievementWriteCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementWriteCompleteDelegate, const FString& WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);


// ********** End Delegate FAchievementWriteCompleteDelegate ***************************************

// ********** Begin Class UAchievementWriteCallbackProxy *******************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWriteProgress);


struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementWriteCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UAchievementWriteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UAchievementWriteCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementWriteCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementWriteCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementWriteCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAchievementWriteCallbackProxy(UAchievementWriteCallbackProxy&&) = delete; \
	UAchievementWriteCallbackProxy(const UAchievementWriteCallbackProxy&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UAchievementWriteCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAchievementWriteCallbackProxy;

// ********** End Class UAchievementWriteCallbackProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
