// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneLevelVisibilityTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilityTrack_generated_h
#error "MovieSceneLevelVisibilityTrack.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilityTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilityTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneLevelVisibilityTrack ******************************************
struct Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilityTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLevelVisibilityTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilityTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneLevelVisibilityTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilityTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneLevelVisibilityTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilityTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLevelVisibilityTrack(UMovieSceneLevelVisibilityTrack&&) = delete; \
	UMovieSceneLevelVisibilityTrack(const UMovieSceneLevelVisibilityTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneLevelVisibilityTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_17_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLevelVisibilityTrack;

// ********** End Class UMovieSceneLevelVisibilityTrack ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
