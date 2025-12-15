// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneFloatTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneFloatTrack_generated_h
#error "MovieSceneFloatTrack.generated.h already included, missing '#pragma once' in MovieSceneFloatTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFloatTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneFloatTrack ****************************************************
struct Z_Construct_UClass_UMovieSceneFloatTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneFloatTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneFloatTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneFloatTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneFloatTrack(UMovieSceneFloatTrack&&) = delete; \
	UMovieSceneFloatTrack(const UMovieSceneFloatTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFloatTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneFloatTrack;

// ********** End Class UMovieSceneFloatTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
