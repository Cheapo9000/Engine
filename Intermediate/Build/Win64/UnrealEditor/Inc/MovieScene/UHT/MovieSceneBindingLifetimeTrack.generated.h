// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneBindingLifetimeTrack.h"

#ifdef MOVIESCENE_MovieSceneBindingLifetimeTrack_generated_h
#error "MovieSceneBindingLifetimeTrack.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeTrack.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBindingLifetimeTrack ******************************************
struct Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBindingLifetimeTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneBindingLifetimeTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeTrack(UMovieSceneBindingLifetimeTrack&&) = delete; \
	UMovieSceneBindingLifetimeTrack(const UMovieSceneBindingLifetimeTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeTrack) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_25_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBindingLifetimeTrack;

// ********** End Class UMovieSceneBindingLifetimeTrack ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
