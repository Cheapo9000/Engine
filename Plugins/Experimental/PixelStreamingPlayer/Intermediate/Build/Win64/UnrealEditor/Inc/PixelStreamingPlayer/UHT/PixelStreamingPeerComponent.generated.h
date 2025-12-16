// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingPeerComponent.h"

#ifdef PIXELSTREAMINGPLAYER_PixelStreamingPeerComponent_generated_h
#error "PixelStreamingPeerComponent.generated.h already included, missing '#pragma once' in PixelStreamingPeerComponent.h"
#endif
#define PIXELSTREAMINGPLAYER_PixelStreamingPeerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPixelStreamingIceCandidateWrapper;
struct FPixelStreamingRTCConfigWrapper;
struct FPixelStreamingSessionDescriptionWrapper;

// ********** Begin SparseDelegate FPixelStreamingOnIceCandidate ***********************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_11_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceCandidate_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceCandidate, FPixelStreamingIceCandidateWrapper Candidate);


// ********** End SparseDelegate FPixelStreamingOnIceCandidate *************************************

// ********** Begin SparseDelegate FPixelStreamingOnIceConnection **********************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_12_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceConnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceConnection, int32 Number);


// ********** End SparseDelegate FPixelStreamingOnIceConnection ************************************

// ********** Begin SparseDelegate FPixelStreamingOnIceDisconnection *******************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_13_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceDisconnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceDisconnection);


// ********** End SparseDelegate FPixelStreamingOnIceDisconnection *********************************

// ********** Begin Class UPixelStreamingPeerComponent *********************************************
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReceiveIceCandidate); \
	DECLARE_FUNCTION(execReceiveAnswer); \
	DECLARE_FUNCTION(execCreateAnswer); \
	DECLARE_FUNCTION(execCreateOffer); \
	DECLARE_FUNCTION(execSetConfig);


struct Z_Construct_UClass_UPixelStreamingPeerComponent_Statics;
PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingPeerComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingPeerComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingPeerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGPLAYER_API UClass* ::Z_Construct_UClass_UPixelStreamingPeerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingPeerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), Z_Construct_UClass_UPixelStreamingPeerComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingPeerComponent)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingPeerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingPeerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingPeerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingPeerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingPeerComponent(UPixelStreamingPeerComponent&&) = delete; \
	UPixelStreamingPeerComponent(const UPixelStreamingPeerComponent&) = delete; \
	NO_API virtual ~UPixelStreamingPeerComponent();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingPeerComponent;

// ********** End Class UPixelStreamingPeerComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
