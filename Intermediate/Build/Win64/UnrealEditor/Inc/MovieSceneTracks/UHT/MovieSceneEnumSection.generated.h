// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEnumSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneEnumSection_generated_h
#error "MovieSceneEnumSection.generated.h already included, missing '#pragma once' in MovieSceneEnumSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEnumSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEnumSection ***************************************************
struct Z_Construct_UClass_UMovieSceneEnumSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEnumSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEnumSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEnumSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEnumSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEnumSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEnumSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEnumSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEnumSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEnumSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEnumSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEnumSection(UMovieSceneEnumSection&&) = delete; \
	UMovieSceneEnumSection(const UMovieSceneEnumSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEnumSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEnumSection;

// ********** End Class UMovieSceneEnumSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
