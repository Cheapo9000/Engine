// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneIntegerTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneIntegerTrack_generated_h
#error "MovieSceneIntegerTrack.generated.h already included, missing '#pragma once' in MovieSceneIntegerTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneIntegerTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneIntegerTrack **************************************************
struct Z_Construct_UClass_UMovieSceneIntegerTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneIntegerTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneIntegerTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneIntegerTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneIntegerTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneIntegerTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneIntegerTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneIntegerTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneIntegerTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneIntegerTrack(UMovieSceneIntegerTrack&&) = delete; \
	UMovieSceneIntegerTrack(const UMovieSceneIntegerTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneIntegerTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_17_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneIntegerTrack;

// ********** End Class UMovieSceneIntegerTrack ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
