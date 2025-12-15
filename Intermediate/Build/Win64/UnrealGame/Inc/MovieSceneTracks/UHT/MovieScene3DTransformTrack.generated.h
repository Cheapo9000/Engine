// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScene3DTransformTrack.h"

#ifdef MOVIESCENETRACKS_MovieScene3DTransformTrack_generated_h
#error "MovieScene3DTransformTrack.generated.h already included, missing '#pragma once' in MovieScene3DTransformTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DTransformTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScene3DTransformTrack **********************************************
struct Z_Construct_UClass_UMovieScene3DTransformTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformTrack(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DTransformTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DTransformTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DTransformTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DTransformTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DTransformTrack(UMovieScene3DTransformTrack&&) = delete; \
	UMovieScene3DTransformTrack(const UMovieScene3DTransformTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DTransformTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_56_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_61_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DTransformTrack;

// ********** End Class UMovieScene3DTransformTrack ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
