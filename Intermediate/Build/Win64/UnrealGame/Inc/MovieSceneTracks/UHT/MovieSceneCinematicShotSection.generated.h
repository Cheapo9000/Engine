// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneCinematicShotSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneCinematicShotSection_generated_h
#error "MovieSceneCinematicShotSection.generated.h already included, missing '#pragma once' in MovieSceneCinematicShotSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCinematicShotSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneCinematicShotSection ******************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetShotDisplayName); \
	DECLARE_FUNCTION(execGetShotDisplayName);


struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCinematicShotSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCinematicShotSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCinematicShotSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCinematicShotSection(UMovieSceneCinematicShotSection&&) = delete; \
	UMovieSceneCinematicShotSection(const UMovieSceneCinematicShotSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCinematicShotSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCinematicShotSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCinematicShotSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCinematicShotSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_21_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCinematicShotSection;

// ********** End Class UMovieSceneCinematicShotSection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
