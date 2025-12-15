// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScene3DConstraintTrack.h"

#ifdef MOVIESCENETRACKS_MovieScene3DConstraintTrack_generated_h
#error "MovieScene3DConstraintTrack.generated.h already included, missing '#pragma once' in MovieScene3DConstraintTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DConstraintTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScene3DConstraintTrack *********************************************
struct Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DConstraintTrack(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DConstraintTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DConstraintTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DConstraintTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DConstraintTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DConstraintTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DConstraintTrack(UMovieScene3DConstraintTrack&&) = delete; \
	UMovieScene3DConstraintTrack(const UMovieScene3DConstraintTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DConstraintTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_26_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_30_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DConstraintTrack;

// ********** End Class UMovieScene3DConstraintTrack ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
