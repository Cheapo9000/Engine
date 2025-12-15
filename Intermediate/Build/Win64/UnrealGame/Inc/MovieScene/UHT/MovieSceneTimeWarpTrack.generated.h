// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneTimeWarpTrack.h"

#ifdef MOVIESCENE_MovieSceneTimeWarpTrack_generated_h
#error "MovieSceneTimeWarpTrack.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpTrack.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTimeWarpTrack *************************************************
struct Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneTimeWarpTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpTrack(UMovieSceneTimeWarpTrack&&) = delete; \
	UMovieSceneTimeWarpTrack(const UMovieSceneTimeWarpTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpTrack) \
	MOVIESCENE_API virtual ~UMovieSceneTimeWarpTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpTrack;

// ********** End Class UMovieSceneTimeWarpTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
