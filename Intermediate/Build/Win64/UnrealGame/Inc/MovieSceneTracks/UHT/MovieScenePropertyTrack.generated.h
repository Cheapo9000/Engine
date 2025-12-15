// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScenePropertyTrack.h"

#ifdef MOVIESCENETRACKS_MovieScenePropertyTrack_generated_h
#error "MovieScenePropertyTrack.generated.h already included, missing '#pragma once' in MovieScenePropertyTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScenePropertyTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScenePropertyTrack *************************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScenePropertyTrack, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieScenePropertyTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrack(); \
	friend struct ::Z_Construct_UClass_UMovieScenePropertyTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePropertyTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrack) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScenePropertyTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePropertyTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePropertyTrack(UMovieScenePropertyTrack&&) = delete; \
	UMovieScenePropertyTrack(const UMovieScenePropertyTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScenePropertyTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePropertyTrack;

// ********** End Class UMovieScenePropertyTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
