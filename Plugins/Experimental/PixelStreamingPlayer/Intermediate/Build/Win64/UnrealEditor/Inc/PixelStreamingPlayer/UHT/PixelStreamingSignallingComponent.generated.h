// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingSignallingComponent.h"

#ifdef PIXELSTREAMINGPLAYER_PixelStreamingSignallingComponent_generated_h
#error "PixelStreamingSignallingComponent.generated.h already included, missing '#pragma once' in PixelStreamingSignallingComponent.h"
#endif
#define PIXELSTREAMINGPLAYER_PixelStreamingSignallingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPixelStreamingIceCandidateWrapper;
struct FPixelStreamingRTCConfigWrapper;
struct FPixelStreamingSessionDescriptionWrapper;

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentConnected *********************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_12_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentConnected_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentConnected);


// ********** End SparseDelegate FPixelStreamingSignallingComponentConnected ***********************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentConnectionError ***************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_13_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentConnectionError_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentConnectionError, const FString& ErrorMsg);


// ********** End SparseDelegate FPixelStreamingSignallingComponentConnectionError *****************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentDisconnected ******************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_14_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentDisconnected_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentDisconnected, int32 StatusCode, const FString& Reason, bool bWasClean);


// ********** End SparseDelegate FPixelStreamingSignallingComponentDisconnected ********************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentConfig ************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_15_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentConfig_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentConfig, FPixelStreamingRTCConfigWrapper Config);


// ********** End SparseDelegate FPixelStreamingSignallingComponentConfig **************************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentOffer *************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_16_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentOffer_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentOffer, const FString& Offer);


// ********** End SparseDelegate FPixelStreamingSignallingComponentOffer ***************************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentAnswer ************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_17_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentAnswer_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentAnswer, const FString& Answer);


// ********** End SparseDelegate FPixelStreamingSignallingComponentAnswer **************************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentIceCandidate ******************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_18_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentIceCandidate_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentIceCandidate, FPixelStreamingIceCandidateWrapper Candidate);


// ********** End SparseDelegate FPixelStreamingSignallingComponentIceCandidate ********************

// ********** Begin SparseDelegate FPixelStreamingSignallingComponentDataChannels ******************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_19_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingSignallingComponentDataChannels_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingSignallingComponentDataChannels, int32 SendStreamId, int32 RecvStreamId);


// ********** End SparseDelegate FPixelStreamingSignallingComponentDataChannels ********************

// ********** Begin Class UPixelStreamingSignallingComponent ***************************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSendIceCandidate); \
	DECLARE_FUNCTION(execSendAnswer); \
	DECLARE_FUNCTION(execSendOffer); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


struct Z_Construct_UClass_UPixelStreamingSignallingComponent_Statics;
PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingSignallingComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingSignallingComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingSignallingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGPLAYER_API UClass* ::Z_Construct_UClass_UPixelStreamingSignallingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingSignallingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), Z_Construct_UClass_UPixelStreamingSignallingComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingSignallingComponent)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingSignallingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingSignallingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingSignallingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingSignallingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingSignallingComponent(UPixelStreamingSignallingComponent&&) = delete; \
	UPixelStreamingSignallingComponent(const UPixelStreamingSignallingComponent&) = delete; \
	NO_API virtual ~UPixelStreamingSignallingComponent();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_INCLASS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingSignallingComponent;

// ********** End Class UPixelStreamingSignallingComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingSignallingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
