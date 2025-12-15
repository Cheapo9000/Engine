// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneActorReferenceSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h
#error "MovieSceneActorReferenceSection.generated.h already included, missing '#pragma once' in MovieSceneActorReferenceSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneActorReferenceKey **************************************
struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneActorReferenceKey;
// ********** End ScriptStruct FMovieSceneActorReferenceKey ****************************************

// ********** Begin ScriptStruct FMovieSceneActorReferenceData *************************************
struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


struct FMovieSceneActorReferenceData;
// ********** End ScriptStruct FMovieSceneActorReferenceData ***************************************

// ********** Begin Class UMovieSceneActorReferenceSection *****************************************
struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneActorReferenceSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneActorReferenceSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneActorReferenceSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneActorReferenceSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneActorReferenceSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneActorReferenceSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneActorReferenceSection(UMovieSceneActorReferenceSection&&) = delete; \
	UMovieSceneActorReferenceSection(const UMovieSceneActorReferenceSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneActorReferenceSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_187_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_191_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneActorReferenceSection;

// ********** End Class UMovieSceneActorReferenceSection *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
