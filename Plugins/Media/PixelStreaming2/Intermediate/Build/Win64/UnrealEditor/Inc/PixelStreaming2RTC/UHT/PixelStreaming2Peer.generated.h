// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2Peer.h"

#ifdef PIXELSTREAMING2RTC_PixelStreaming2Peer_generated_h
#error "PixelStreaming2Peer.generated.h already included, missing '#pragma once' in PixelStreaming2Peer.h"
#endif
#define PIXELSTREAMING2RTC_PixelStreaming2Peer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin SparseDelegate FPixelStreamingStreamerList *************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_28_DELEGATE \
PIXELSTREAMING2RTC_API void FPixelStreamingStreamerList_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingStreamerList, TArray<FString> const& StreamerList);


// ********** End SparseDelegate FPixelStreamingStreamerList ***************************************

// ********** Begin Class UPixelStreaming2Peer *****************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


struct Z_Construct_UClass_UPixelStreaming2Peer_Statics;
PIXELSTREAMING2RTC_API UClass* Z_Construct_UClass_UPixelStreaming2Peer_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreaming2Peer(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2Peer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2RTC_API UClass* ::Z_Construct_UClass_UPixelStreaming2Peer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2Peer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2RTC"), Z_Construct_UClass_UPixelStreaming2Peer_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2Peer) \
	virtual UObject* _getUObject() const override { return const_cast<UPixelStreaming2Peer*>(this); }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreaming2Peer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2Peer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2Peer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2Peer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2Peer(UPixelStreaming2Peer&&) = delete; \
	UPixelStreaming2Peer(const UPixelStreaming2Peer&) = delete; \
	NO_API virtual ~UPixelStreaming2Peer();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_40_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2Peer;

// ********** End Class UPixelStreaming2Peer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Blueprints_PixelStreaming2Peer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
