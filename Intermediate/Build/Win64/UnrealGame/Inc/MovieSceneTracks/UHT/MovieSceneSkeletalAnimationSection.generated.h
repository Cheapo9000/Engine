// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneSkeletalAnimationSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h
#error "MovieSceneSkeletalAnimationSection.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneSkeletalAnimationParams ********************************
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSkeletalAnimationParams;
// ********** End ScriptStruct FMovieSceneSkeletalAnimationParams **********************************

// ********** Begin Class UMovieSceneSkeletalAnimationSection **************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSkeletalAnimationSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSkeletalAnimationSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSkeletalAnimationSection(UMovieSceneSkeletalAnimationSection&&) = delete; \
	UMovieSceneSkeletalAnimationSection(const UMovieSceneSkeletalAnimationSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneSkeletalAnimationSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_111_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSkeletalAnimationSection;

// ********** End Class UMovieSceneSkeletalAnimationSection ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
