// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneTrackRowDecoration.h"

#ifdef MOVIESCENE_MovieSceneTrackRowDecoration_generated_h
#error "MovieSceneTrackRowDecoration.generated.h already included, missing '#pragma once' in MovieSceneTrackRowDecoration.h"
#endif
#define MOVIESCENE_MovieSceneTrackRowDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTrackRowDecoration ********************************************
struct Z_Construct_UClass_UMovieSceneTrackRowDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackRowDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackRowDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackRowDecoration, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackRowDecoration) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneTrackRowDecoration*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackRowDecoration(UMovieSceneTrackRowDecoration&&) = delete; \
	UMovieSceneTrackRowDecoration(const UMovieSceneTrackRowDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackRowDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackRowDecoration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneTrackRowDecoration) \
	MOVIESCENE_API virtual ~UMovieSceneTrackRowDecoration();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_12_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackRowDecoration;

// ********** End Class UMovieSceneTrackRowDecoration **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
