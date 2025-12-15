// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneDoubleSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneDoubleSection_generated_h
#error "MovieSceneDoubleSection.generated.h already included, missing '#pragma once' in MovieSceneDoubleSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDoubleSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneDoubleSection *************************************************
struct Z_Construct_UClass_UMovieSceneDoubleSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDoubleSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDoubleSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDoubleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDoubleSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneDoubleSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDoubleSection(UMovieSceneDoubleSection&&) = delete; \
	UMovieSceneDoubleSection(const UMovieSceneDoubleSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDoubleSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDoubleSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDoubleSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDoubleSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDoubleSection;

// ********** End Class UMovieSceneDoubleSection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
