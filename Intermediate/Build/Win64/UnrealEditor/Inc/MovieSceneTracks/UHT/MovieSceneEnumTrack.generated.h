// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneEnumTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneEnumTrack_generated_h
#error "MovieSceneEnumTrack.generated.h already included, missing '#pragma once' in MovieSceneEnumTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEnumTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEnumTrack *****************************************************
struct Z_Construct_UClass_UMovieSceneEnumTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEnumTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEnumTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEnumTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEnumTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEnumTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEnumTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEnumTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEnumTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEnumTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEnumTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEnumTrack(UMovieSceneEnumTrack&&) = delete; \
	UMovieSceneEnumTrack(const UMovieSceneEnumTrack&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEnumTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEnumTrack;

// ********** End Class UMovieSceneEnumTrack *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
