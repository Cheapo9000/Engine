// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayMontageCallbackProxy.h"

#ifdef ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h
#error "PlayMontageCallbackProxy.generated.h already included, missing '#pragma once' in PlayMontageCallbackProxy.h"
#endif
#define ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UPlayMontageCallbackProxy;
class USkeletalMeshComponent;
struct FBranchingPointNotifyPayload;

// ********** Begin Delegate FOnMontagePlayDelegate ************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_11_DELEGATE \
ANIMGRAPHRUNTIME_API void FOnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontagePlayDelegate, FName NotifyName);


// ********** End Delegate FOnMontagePlayDelegate **************************************************

// ********** Begin Class UPlayMontageCallbackProxy ************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage);


struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMontageCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UPlayMontageCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_UPlayMontageCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UPlayMontageCallbackProxy)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UPlayMontageCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayMontageCallbackProxy(UPlayMontageCallbackProxy&&) = delete; \
	UPlayMontageCallbackProxy(const UPlayMontageCallbackProxy&) = delete; \
	ANIMGRAPHRUNTIME_API virtual ~UPlayMontageCallbackProxy();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_13_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayMontageCallbackProxy;

// ********** End Class UPlayMontageCallbackProxy **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
