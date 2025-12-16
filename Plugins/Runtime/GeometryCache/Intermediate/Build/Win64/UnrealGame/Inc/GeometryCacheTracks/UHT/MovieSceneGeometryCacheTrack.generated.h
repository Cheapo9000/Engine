// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCacheTrack.h"

#ifdef GEOMETRYCACHETRACKS_MovieSceneGeometryCacheTrack_generated_h
#error "MovieSceneGeometryCacheTrack.generated.h already included, missing '#pragma once' in MovieSceneGeometryCacheTrack.h"
#endif
#define GEOMETRYCACHETRACKS_MovieSceneGeometryCacheTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneGeometryCacheTrack ********************************************
struct Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics;
GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCacheTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCACHETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGeometryCacheTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCacheTracks"), Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCacheTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneGeometryCacheTrack*>(this); }


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHETRACKS_API UMovieSceneGeometryCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHETRACKS_API, UMovieSceneGeometryCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCacheTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCacheTrack(UMovieSceneGeometryCacheTrack&&) = delete; \
	UMovieSceneGeometryCacheTrack(const UMovieSceneGeometryCacheTrack&) = delete; \
	GEOMETRYCACHETRACKS_API virtual ~UMovieSceneGeometryCacheTrack();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGeometryCacheTrack;

// ********** End Class UMovieSceneGeometryCacheTrack **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
