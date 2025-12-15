// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneTextTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneTextTrack_generated_h
#error "MovieSceneTextTrack.generated.h already included, missing '#pragma once' in MovieSceneTextTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTextTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTextTrack *****************************************************
struct Z_Construct_UClass_UMovieSceneTextTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTextTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTextTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTextTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTextTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTextTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTextTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTextTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTextTrack(UMovieSceneTextTrack&&) = delete; \
	UMovieSceneTextTrack(const UMovieSceneTextTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTextTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTextTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneTextTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTextTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTextTrack;

// ********** End Class UMovieSceneTextTrack *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
