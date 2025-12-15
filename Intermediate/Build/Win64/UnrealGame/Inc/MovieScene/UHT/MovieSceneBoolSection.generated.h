// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBoolSection.h"

#ifdef MOVIESCENE_MovieSceneBoolSection_generated_h
#error "MovieSceneBoolSection.generated.h already included, missing '#pragma once' in MovieSceneBoolSection.h"
#endif
#define MOVIESCENE_MovieSceneBoolSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBoolSection ***************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection, MOVIESCENE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UMovieSceneBoolSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBoolSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBoolSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBoolSection(UMovieSceneBoolSection&&) = delete; \
	UMovieSceneBoolSection(const UMovieSceneBoolSection&) = delete; \
	MOVIESCENE_API virtual ~UMovieSceneBoolSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_22_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBoolSection;

// ********** End Class UMovieSceneBoolSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
