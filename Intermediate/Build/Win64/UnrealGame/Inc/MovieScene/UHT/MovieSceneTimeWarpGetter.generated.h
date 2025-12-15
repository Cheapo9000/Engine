// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variants/MovieSceneTimeWarpGetter.h"

#ifdef MOVIESCENE_MovieSceneTimeWarpGetter_generated_h
#error "MovieSceneTimeWarpGetter.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpGetter.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpGetter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTimeWarpGetter ************************************************
struct Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpGetter(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTimeWarpGetter, UMovieSceneNumericVariantGetter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpGetter) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneTimeWarpGetter*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpGetter(UMovieSceneTimeWarpGetter&&) = delete; \
	UMovieSceneTimeWarpGetter(const UMovieSceneTimeWarpGetter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpGetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpGetter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneTimeWarpGetter) \
	MOVIESCENE_API virtual ~UMovieSceneTimeWarpGetter();


#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_33_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTimeWarpGetter;

// ********** End Class UMovieSceneTimeWarpGetter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
