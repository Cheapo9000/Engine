// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneSpawnSection.h"

#ifdef MOVIESCENE_MovieSceneSpawnSection_generated_h
#error "MovieSceneSpawnSection.generated.h already included, missing '#pragma once' in MovieSceneSpawnSection.h"
#endif
#define MOVIESCENE_MovieSceneSpawnSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSpawnSection **************************************************
struct Z_Construct_UClass_UMovieSceneSpawnSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSpawnSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSpawnSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSpawnSection, UMovieSceneBoolSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSpawnSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSpawnSection*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSpawnSection(UMovieSceneSpawnSection&&) = delete; \
	UMovieSceneSpawnSection(const UMovieSceneSpawnSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSpawnSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSpawnSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSpawnSection) \
	MOVIESCENE_API virtual ~UMovieSceneSpawnSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_23_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSpawnSection;

// ********** End Class UMovieSceneSpawnSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
