// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCollectionTrack.h"

#ifdef GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionTrack_generated_h
#error "MovieSceneGeometryCollectionTrack.generated.h already included, missing '#pragma once' in MovieSceneGeometryCollectionTrack.h"
#endif
#define GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneGeometryCollectionTrack ***************************************
struct Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics;
GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_NoRegister();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCollectionTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONTRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGeometryCollectionTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionTracks"), Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCollectionTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneGeometryCollectionTrack*>(this); }


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONTRACKS_API UMovieSceneGeometryCollectionTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCollectionTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONTRACKS_API, UMovieSceneGeometryCollectionTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCollectionTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCollectionTrack(UMovieSceneGeometryCollectionTrack&&) = delete; \
	UMovieSceneGeometryCollectionTrack(const UMovieSceneGeometryCollectionTrack&) = delete; \
	GEOMETRYCOLLECTIONTRACKS_API virtual ~UMovieSceneGeometryCollectionTrack();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGeometryCollectionTrack;

// ********** End Class UMovieSceneGeometryCollectionTrack *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
