// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScene3DAttachSection.h"

#ifdef MOVIESCENETRACKS_MovieScene3DAttachSection_generated_h
#error "MovieScene3DAttachSection.generated.h already included, missing '#pragma once' in MovieScene3DAttachSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DAttachSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScene3DAttachSection ***********************************************
struct Z_Construct_UClass_UMovieScene3DAttachSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DAttachSection(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DAttachSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DAttachSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DAttachSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DAttachSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DAttachSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DAttachSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DAttachSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DAttachSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DAttachSection(UMovieScene3DAttachSection&&) = delete; \
	UMovieScene3DAttachSection(const UMovieScene3DAttachSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DAttachSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_23_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DAttachSection;

// ********** End Class UMovieScene3DAttachSection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
