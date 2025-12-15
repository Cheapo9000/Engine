// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneAudioTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h
#error "MovieSceneAudioTrack.generated.h already included, missing '#pragma once' in MovieSceneAudioTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAudioTrack ****************************************************
struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAudioTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAudioTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAudioTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneAudioTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneAudioTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAudioTrack(UMovieSceneAudioTrack&&) = delete; \
	UMovieSceneAudioTrack(const UMovieSceneAudioTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneAudioTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_21_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_25_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAudioTrack;

// ********** End Class UMovieSceneAudioTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
