// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneColorSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneColorSection_generated_h
#error "MovieSceneColorSection.generated.h already included, missing '#pragma once' in MovieSceneColorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneColorSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneColorKeyStruct *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieSceneColorKeyStruct;
// ********** End ScriptStruct FMovieSceneColorKeyStruct *******************************************

// ********** Begin Class UMovieSceneColorSection **************************************************
struct Z_Construct_UClass_UMovieSceneColorSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneColorSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneColorSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneColorSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneColorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneColorSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneColorSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneColorSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneColorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneColorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneColorSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneColorSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneColorSection(UMovieSceneColorSection&&) = delete; \
	UMovieSceneColorSection(const UMovieSceneColorSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneColorSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_44_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_49_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneColorSection;

// ********** End Class UMovieSceneColorSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
