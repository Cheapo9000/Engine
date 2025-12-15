// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneParticleTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneParticleTrack_generated_h
#error "MovieSceneParticleTrack.generated.h already included, missing '#pragma once' in MovieSceneParticleTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneParticleTrack *************************************************
struct Z_Construct_UClass_UMovieSceneParticleTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneParticleTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneParticleTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneParticleTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParticleTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneParticleTrack(UMovieSceneParticleTrack&&) = delete; \
	UMovieSceneParticleTrack(const UMovieSceneParticleTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParticleTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_26_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_31_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneParticleTrack;

// ********** End Class UMovieSceneParticleTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
