// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneTimeWarpSection.h"

#ifdef MOVIESCENE_MovieSceneTimeWarpSection_generated_h
#error "MovieSceneTimeWarpSection.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpSection.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTimeWarpSection ***********************************************
struct Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpSection)


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpSection(UMovieSceneTimeWarpSection&&) = delete; \
	UMovieSceneTimeWarpSection(const UMovieSceneTimeWarpSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpSection) \
	MOVIESCENE_API virtual ~UMovieSceneTimeWarpSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpSection;

// ********** End Class UMovieSceneTimeWarpSection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
