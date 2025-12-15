// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneVisibilityTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneVisibilityTrack_generated_h
#error "MovieSceneVisibilityTrack.generated.h already included, missing '#pragma once' in MovieSceneVisibilityTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVisibilityTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneVisibilityTrack ***********************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneVisibilityTrack, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneVisibilityTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneVisibilityTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneVisibilityTrack) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneVisibilityTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVisibilityTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVisibilityTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVisibilityTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneVisibilityTrack(UMovieSceneVisibilityTrack&&) = delete; \
	UMovieSceneVisibilityTrack(const UMovieSceneVisibilityTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneVisibilityTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneVisibilityTrack;

// ********** End Class UMovieSceneVisibilityTrack *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
