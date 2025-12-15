// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneCachedTrack.h"

#ifdef MOVIESCENE_MovieSceneCachedTrack_generated_h
#error "MovieSceneCachedTrack.generated.h already included, missing '#pragma once' in MovieSceneCachedTrack.h"
#endif
#define MOVIESCENE_MovieSceneCachedTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneCachedTrack ***********************************************
struct Z_Construct_UClass_UMovieSceneCachedTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneCachedTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCachedTrack(UMovieSceneCachedTrack&&) = delete; \
	UMovieSceneCachedTrack(const UMovieSceneCachedTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCachedTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCachedTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCachedTrack) \
	virtual ~UMovieSceneCachedTrack() = default;


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneCachedTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCachedTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCachedTrack, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCachedTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneCachedTrack() {} \
public: \
	typedef UMovieSceneCachedTrack UClassType; \
	typedef IMovieSceneCachedTrack ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_9_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCachedTrack;

// ********** End Interface UMovieSceneCachedTrack *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
