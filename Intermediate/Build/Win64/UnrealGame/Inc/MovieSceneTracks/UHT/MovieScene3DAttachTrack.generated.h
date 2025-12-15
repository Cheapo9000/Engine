// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScene3DAttachTrack.h"

#ifdef MOVIESCENETRACKS_MovieScene3DAttachTrack_generated_h
#error "MovieScene3DAttachTrack.generated.h already included, missing '#pragma once' in MovieScene3DAttachTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DAttachTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScene3DAttachTrack *************************************************
struct Z_Construct_UClass_UMovieScene3DAttachTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DAttachTrack(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DAttachTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DAttachTrack, UMovieScene3DConstraintTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DAttachTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DAttachTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DAttachTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DAttachTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DAttachTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DAttachTrack(UMovieScene3DAttachTrack&&) = delete; \
	UMovieScene3DAttachTrack(const UMovieScene3DAttachTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DAttachTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_24_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_28_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DAttachTrack;

// ********** End Class UMovieScene3DAttachTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
