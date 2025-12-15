// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScene3DPathSection.h"

#ifdef MOVIESCENETRACKS_MovieScene3DPathSection_generated_h
#error "MovieScene3DPathSection.generated.h already included, missing '#pragma once' in MovieScene3DPathSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DPathSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScene3DPathSection *************************************************
struct Z_Construct_UClass_UMovieScene3DPathSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DPathSection(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DPathSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DPathSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DPathSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DPathSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DPathSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DPathSection(UMovieScene3DPathSection&&) = delete; \
	UMovieScene3DPathSection(const UMovieScene3DPathSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DPathSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DPathSection;

// ********** End Class UMovieScene3DPathSection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h

// ********** Begin Enum MovieScene3DPathSection_Axis **********************************************
#define FOREACH_ENUM_MOVIESCENE3DPATHSECTION_AXIS(op) \
	op(MovieScene3DPathSection_Axis::X) \
	op(MovieScene3DPathSection_Axis::Y) \
	op(MovieScene3DPathSection_Axis::Z) \
	op(MovieScene3DPathSection_Axis::NEG_X) \
	op(MovieScene3DPathSection_Axis::NEG_Y) \
	op(MovieScene3DPathSection_Axis::NEG_Z) 

enum class MovieScene3DPathSection_Axis : uint8;
template<> struct TIsUEnumClass<MovieScene3DPathSection_Axis> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<MovieScene3DPathSection_Axis>();
// ********** End Enum MovieScene3DPathSection_Axis ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
