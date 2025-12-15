// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEventSectionBase.h"

#ifdef MOVIESCENETRACKS_MovieSceneEventSectionBase_generated_h
#error "MovieSceneEventSectionBase.generated.h already included, missing '#pragma once' in MovieSceneEventSectionBase.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventSectionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEventSectionBase **********************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventSectionBase, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneEventSectionBase_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventSectionBase(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventSectionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventSectionBase, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventSectionBase) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventSectionBase(UMovieSceneEventSectionBase&&) = delete; \
	UMovieSceneEventSectionBase(const UMovieSceneEventSectionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSectionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventSectionBase) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventSectionBase();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventSectionBase;

// ********** End Class UMovieSceneEventSectionBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
