// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerPlaylistPlayer.h"

#ifdef SEQUENCERPLAYLISTS_SequencerPlaylistPlayer_generated_h
#error "SequencerPlaylistPlayer.generated.h already included, missing '#pragma once' in SequencerPlaylistPlayer.h"
#endif
#define SEQUENCERPLAYLISTS_SequencerPlaylistPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USequencerPlaylist;
class USequencerPlaylistItem;
class USequencerPlaylistPlayer;
enum class ESequencerPlaylistPlaybackDirection : uint8;
struct FSequencerPlaylistPlaybackState;

// ********** Begin Delegate FOnPlayerSequencerPlaylistSet *****************************************
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_23_DELEGATE \
SEQUENCERPLAYLISTS_API void FOnPlayerSequencerPlaylistSet_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSequencerPlaylistSet, USequencerPlaylistPlayer* Player, USequencerPlaylist* Playlist);


// ********** End Delegate FOnPlayerSequencerPlaylistSet *******************************************

// ********** Begin Class USequencerPlaylistPlayer *************************************************
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAll); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execPauseAll); \
	DECLARE_FUNCTION(execPlayAll); \
	DECLARE_FUNCTION(execGetPlaybackState); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execResetItem); \
	DECLARE_FUNCTION(execStopItem); \
	DECLARE_FUNCTION(execPauseItem); \
	DECLARE_FUNCTION(execPlayItem); \
	DECLARE_FUNCTION(execGetDefaultPlayer); \
	DECLARE_FUNCTION(execGetPlaylist); \
	DECLARE_FUNCTION(execSetPlaylist);


struct Z_Construct_UClass_USequencerPlaylistPlayer_Statics;
SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerPlaylistPlayer(); \
	friend struct ::Z_Construct_UClass_USequencerPlaylistPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERPLAYLISTS_API UClass* ::Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerPlaylistPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerPlaylists"), Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister) \
	DECLARE_SERIALIZER(USequencerPlaylistPlayer)


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerPlaylistPlayer(USequencerPlaylistPlayer&&) = delete; \
	USequencerPlaylistPlayer(const USequencerPlaylistPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerPlaylistPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerPlaylistPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerPlaylistPlayer) \
	NO_API virtual ~USequencerPlaylistPlayer();


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerPlaylistPlayer;

// ********** End Class USequencerPlaylistPlayer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
