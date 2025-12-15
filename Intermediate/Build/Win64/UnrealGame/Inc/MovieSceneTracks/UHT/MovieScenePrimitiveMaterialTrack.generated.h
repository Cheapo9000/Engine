// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScenePrimitiveMaterialTrack.h"

#ifdef MOVIESCENETRACKS_MovieScenePrimitiveMaterialTrack_generated_h
#error "MovieScenePrimitiveMaterialTrack.generated.h already included, missing '#pragma once' in MovieScenePrimitiveMaterialTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScenePrimitiveMaterialTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScenePrimitiveMaterialTrack ****************************************
struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePrimitiveMaterialTrack(); \
	friend struct ::Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePrimitiveMaterialTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePrimitiveMaterialTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePrimitiveMaterialTrack(UMovieScenePrimitiveMaterialTrack&&) = delete; \
	UMovieScenePrimitiveMaterialTrack(const UMovieScenePrimitiveMaterialTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePrimitiveMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePrimitiveMaterialTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePrimitiveMaterialTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePrimitiveMaterialTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_10_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePrimitiveMaterialTrack;

// ********** End Class UMovieScenePrimitiveMaterialTrack ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
