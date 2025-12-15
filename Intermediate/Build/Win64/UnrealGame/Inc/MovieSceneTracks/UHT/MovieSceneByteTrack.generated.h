// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneByteTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneByteTrack_generated_h
#error "MovieSceneByteTrack.generated.h already included, missing '#pragma once' in MovieSceneByteTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneByteTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneByteTrack *****************************************************
struct Z_Construct_UClass_UMovieSceneByteTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneByteTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneByteTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneByteTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneByteTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneByteTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneByteTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneByteTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneByteTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneByteTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneByteTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneByteTrack(UMovieSceneByteTrack&&) = delete; \
	UMovieSceneByteTrack(const UMovieSceneByteTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneByteTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneByteTrack;

// ********** End Class UMovieSceneByteTrack *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
