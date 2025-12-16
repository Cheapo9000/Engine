// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonVideoPlayer.h"

#ifdef COMMONUI_CommonVideoPlayer_generated_h
#error "CommonVideoPlayer.generated.h already included, missing '#pragma once' in CommonVideoPlayer.h"
#endif
#define COMMONUI_CommonVideoPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaSource;

// ********** Begin Class UCommonVideoPlayer *******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetPlaybackRate); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execGetVideoDuration); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetShouldMatchSize); \
	DECLARE_FUNCTION(execSetIsMuted); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPlaybackRate); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSetVideo);


struct Z_Construct_UClass_UCommonVideoPlayer_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonVideoPlayer(); \
	friend struct ::Z_Construct_UClass_UCommonVideoPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonVideoPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonVideoPlayer, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonVideoPlayer_NoRegister) \
	DECLARE_SERIALIZER(UCommonVideoPlayer)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonVideoPlayer(UCommonVideoPlayer&&) = delete; \
	UCommonVideoPlayer(const UCommonVideoPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonVideoPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonVideoPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonVideoPlayer) \
	COMMONUI_API virtual ~UCommonVideoPlayer();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonVideoPlayer;

// ********** End Class UCommonVideoPlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
