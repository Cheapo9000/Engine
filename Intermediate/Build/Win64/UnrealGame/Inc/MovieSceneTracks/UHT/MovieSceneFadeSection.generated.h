// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneFadeSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneFadeSection_generated_h
#error "MovieSceneFadeSection.generated.h already included, missing '#pragma once' in MovieSceneFadeSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneFadeSection ***************************************************
struct Z_Construct_UClass_UMovieSceneFadeSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFadeSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneFadeSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneFadeSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneFadeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneFadeSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneFadeSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneFadeSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneFadeSection(UMovieSceneFadeSection&&) = delete; \
	UMovieSceneFadeSection(const UMovieSceneFadeSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFadeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFadeSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneFadeSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFadeSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_22_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneFadeSection;

// ********** End Class UMovieSceneFadeSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
