// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneStringTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneStringTrack_generated_h
#error "MovieSceneStringTrack.generated.h already included, missing '#pragma once' in MovieSceneStringTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneStringTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneStringTrack ***************************************************
struct Z_Construct_UClass_UMovieSceneStringTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneStringTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneStringTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneStringTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneStringTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneStringTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneStringTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneStringTrack(UMovieSceneStringTrack&&) = delete; \
	UMovieSceneStringTrack(const UMovieSceneStringTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneStringTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneStringTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneStringTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneStringTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneStringTrack;

// ********** End Class UMovieSceneStringTrack *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
