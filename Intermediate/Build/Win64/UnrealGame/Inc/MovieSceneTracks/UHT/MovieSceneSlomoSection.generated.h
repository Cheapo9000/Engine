// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneSlomoSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneSlomoSection_generated_h
#error "MovieSceneSlomoSection.generated.h already included, missing '#pragma once' in MovieSceneSlomoSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSlomoSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSlomoSection **************************************************
struct Z_Construct_UClass_UMovieSceneSlomoSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSlomoSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSlomoSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSlomoSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSlomoSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSlomoSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSlomoSection(UMovieSceneSlomoSection&&) = delete; \
	UMovieSceneSlomoSection(const UMovieSceneSlomoSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSlomoSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSlomoSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneSlomoSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneSlomoSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_21_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSlomoSection;

// ********** End Class UMovieSceneSlomoSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
