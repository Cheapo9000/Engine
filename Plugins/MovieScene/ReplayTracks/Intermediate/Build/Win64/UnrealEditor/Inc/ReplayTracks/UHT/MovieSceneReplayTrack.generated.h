// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneReplayTrack.h"

#ifdef REPLAYTRACKS_MovieSceneReplayTrack_generated_h
#error "MovieSceneReplayTrack.generated.h already included, missing '#pragma once' in MovieSceneReplayTrack.h"
#endif
#define REPLAYTRACKS_MovieSceneReplayTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneReplayTrack ***************************************************
struct Z_Construct_UClass_UMovieSceneReplayTrack_Statics;
REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplayTrack_NoRegister();

#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplayTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneReplayTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYTRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneReplayTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneReplayTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplayTracks"), Z_Construct_UClass_UMovieSceneReplayTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneReplayTrack)


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneReplayTrack(UMovieSceneReplayTrack&&) = delete; \
	UMovieSceneReplayTrack(const UMovieSceneReplayTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLAYTRACKS_API, UMovieSceneReplayTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplayTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplayTrack) \
	REPLAYTRACKS_API virtual ~UMovieSceneReplayTrack();


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneReplayTrack;

// ********** End Class UMovieSceneReplayTrack *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Tracks_MovieSceneReplayTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
