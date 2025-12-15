// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneSpawnTrack.h"

#ifdef MOVIESCENE_MovieSceneSpawnTrack_generated_h
#error "MovieSceneSpawnTrack.generated.h already included, missing '#pragma once' in MovieSceneSpawnTrack.h"
#endif
#define MOVIESCENE_MovieSceneSpawnTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSpawnTrack ****************************************************
struct Z_Construct_UClass_UMovieSceneSpawnTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSpawnTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSpawnTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSpawnTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSpawnTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSpawnTrack(UMovieSceneSpawnTrack&&) = delete; \
	UMovieSceneSpawnTrack(const UMovieSceneSpawnTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSpawnTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSpawnTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSpawnTrack) \
	MOVIESCENE_API virtual ~UMovieSceneSpawnTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_29_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSpawnTrack;

// ********** End Class UMovieSceneSpawnTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
