// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSubtitleSection.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_MovieSceneSubtitleSection_generated_h
#error "MovieSceneSubtitleSection.generated.h already included, missing '#pragma once' in MovieSceneSubtitleSection.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_MovieSceneSubtitleSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSubtitleSection ***********************************************
struct Z_Construct_UClass_UMovieSceneSubtitleSection_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_UMovieSceneSubtitleSection_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSubtitleSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSubtitleSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_UMovieSceneSubtitleSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSubtitleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_UMovieSceneSubtitleSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSubtitleSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSubtitleSection*>(this); }


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBTITLESANDCLOSEDCAPTIONS_API UMovieSceneSubtitleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubtitleSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONS_API, UMovieSceneSubtitleSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubtitleSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSubtitleSection(UMovieSceneSubtitleSection&&) = delete; \
	UMovieSceneSubtitleSection(const UMovieSceneSubtitleSection&) = delete; \
	SUBTITLESANDCLOSEDCAPTIONS_API virtual ~UMovieSceneSubtitleSection();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSubtitleSection;

// ********** End Class UMovieSceneSubtitleSection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_MovieSceneSubtitleSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
