// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneByteSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneByteSection_generated_h
#error "MovieSceneByteSection.generated.h already included, missing '#pragma once' in MovieSceneByteSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneByteSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneByteSection ***************************************************
struct Z_Construct_UClass_UMovieSceneByteSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneByteSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneByteSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneByteSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneByteSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneByteSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneByteSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneByteSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneByteSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneByteSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneByteSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneByteSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneByteSection(UMovieSceneByteSection&&) = delete; \
	UMovieSceneByteSection(const UMovieSceneByteSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneByteSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneByteSection;

// ********** End Class UMovieSceneByteSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
