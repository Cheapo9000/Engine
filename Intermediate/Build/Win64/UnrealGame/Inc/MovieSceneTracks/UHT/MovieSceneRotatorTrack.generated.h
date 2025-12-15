// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneRotatorTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneRotatorTrack_generated_h
#error "MovieSceneRotatorTrack.generated.h already included, missing '#pragma once' in MovieSceneRotatorTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneRotatorTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneRotatorTrack **************************************************
struct Z_Construct_UClass_UMovieSceneRotatorTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRotatorTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneRotatorTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneRotatorTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneRotatorTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneRotatorTrack(UMovieSceneRotatorTrack&&) = delete; \
	UMovieSceneRotatorTrack(const UMovieSceneRotatorTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneRotatorTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRotatorTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRotatorTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneRotatorTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneRotatorTrack;

// ********** End Class UMovieSceneRotatorTrack ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
