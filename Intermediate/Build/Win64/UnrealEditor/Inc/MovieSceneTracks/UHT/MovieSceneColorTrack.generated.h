// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneColorTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneColorTrack_generated_h
#error "MovieSceneColorTrack.generated.h already included, missing '#pragma once' in MovieSceneColorTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneColorTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneColorTrack ****************************************************
struct Z_Construct_UClass_UMovieSceneColorTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneColorTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneColorTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneColorTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneColorTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneColorTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneColorTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneColorTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneColorTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneColorTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneColorTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneColorTrack(UMovieSceneColorTrack&&) = delete; \
	UMovieSceneColorTrack(const UMovieSceneColorTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneColorTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_16_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneColorTrack;

// ********** End Class UMovieSceneColorTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
