// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneTextSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneTextSection_generated_h
#error "MovieSceneTextSection.generated.h already included, missing '#pragma once' in MovieSceneTextSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTextSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTextSection ***************************************************
struct Z_Construct_UClass_UMovieSceneTextSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTextSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTextSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTextSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneTextSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTextSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneTextSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTextSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneTextSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTextSection(UMovieSceneTextSection&&) = delete; \
	UMovieSceneTextSection(const UMovieSceneTextSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTextSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTextSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTextSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTextSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_10_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTextSection;

// ********** End Class UMovieSceneTextSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneTextSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
