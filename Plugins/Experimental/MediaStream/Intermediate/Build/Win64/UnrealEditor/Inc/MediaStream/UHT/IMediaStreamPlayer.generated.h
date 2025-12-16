// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMediaStreamPlayer.h"

#ifdef MEDIASTREAM_IMediaStreamPlayer_generated_h
#error "IMediaStreamPlayer.generated.h already included, missing '#pragma once' in IMediaStreamPlayer.h"
#endif
#define MEDIASTREAM_IMediaStreamPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaStream;
class UMediaTexture;
enum class EMediaStreamPlaybackState : uint8;
struct FMediaStreamPlayerConfig;
struct FMediaStreamTextureConfig;

// ********** Begin Interface UMediaStreamPlayer ***************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execFastForward); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenSource); \
	DECLARE_FUNCTION(execGetSourceStream); \
	DECLARE_FUNCTION(execGetPlaylistNum); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execSetPlaybackState); \
	DECLARE_FUNCTION(execGetPlaybackState); \
	DECLARE_FUNCTION(execSetRequestedSeekFrame); \
	DECLARE_FUNCTION(execGetRequestedSeekFrame); \
	DECLARE_FUNCTION(execSetRequestedSeekTime); \
	DECLARE_FUNCTION(execGetRequestedSeekTime); \
	DECLARE_FUNCTION(execSetPlaylistIndex); \
	DECLARE_FUNCTION(execApplyPlayerConfig); \
	DECLARE_FUNCTION(execSetPlayerConfig); \
	DECLARE_FUNCTION(execGetPlayerConfig); \
	DECLARE_FUNCTION(execHasValidPlayer); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execApplyTextureConfig); \
	DECLARE_FUNCTION(execSetTextureConfig); \
	DECLARE_FUNCTION(execGetTextureConfig); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execOnCreated); \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execGetMediaStream);


struct Z_Construct_UClass_UMediaStreamPlayer_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamPlayer_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIASTREAM_API UMediaStreamPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamPlayer(UMediaStreamPlayer&&) = delete; \
	UMediaStreamPlayer(const UMediaStreamPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStreamPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamPlayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaStreamPlayer) \
	virtual ~UMediaStreamPlayer() = default;


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMediaStreamPlayer(); \
	friend struct ::Z_Construct_UClass_UMediaStreamPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamPlayer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamPlayer_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamPlayer)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMediaStreamPlayer() {} \
public: \
	typedef UMediaStreamPlayer UClassType; \
	typedef IMediaStreamPlayer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamPlayer;

// ********** End Interface UMediaStreamPlayer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_IMediaStreamPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
