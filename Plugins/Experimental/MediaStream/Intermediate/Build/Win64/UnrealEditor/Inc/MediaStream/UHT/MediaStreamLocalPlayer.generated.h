// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Players/MediaStreamLocalPlayer.h"

#ifdef MEDIASTREAM_MediaStreamLocalPlayer_generated_h
#error "MediaStreamLocalPlayer.generated.h already included, missing '#pragma once' in MediaStreamLocalPlayer.h"
#endif
#define MEDIASTREAM_MediaStreamLocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMediaStreamPlaybackState : uint8;

// ********** Begin Class UMediaStreamLocalPlayer **************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execBP_SetPlaylistIndex); \
	DECLARE_FUNCTION(execBP_SetPlaybackState); \
	DECLARE_FUNCTION(execBP_SetRequestedSeekFrame); \
	DECLARE_FUNCTION(execBP_SetRequestedSeekTime);


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_ACCESSORS \
static void GetRequestedSeekFrame_WrapperImpl(const void* Object, void* OutValue); \
static void SetRequestedSeekFrame_WrapperImpl(void* Object, const void* InValue); \
static void GetPlaybackState_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaybackState_WrapperImpl(void* Object, const void* InValue); \
static void GetPlaylistIndex_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaylistIndex_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMediaStreamLocalPlayer_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamLocalPlayer_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamLocalPlayer(); \
	friend struct ::Z_Construct_UClass_UMediaStreamLocalPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamLocalPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamLocalPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamLocalPlayer_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamLocalPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaStreamLocalPlayer*>(this); }


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamLocalPlayer(UMediaStreamLocalPlayer&&) = delete; \
	UMediaStreamLocalPlayer(const UMediaStreamLocalPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaStreamLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaStreamLocalPlayer)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamLocalPlayer;

// ********** End Class UMediaStreamLocalPlayer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamLocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
