// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variants/MovieSceneNumericVariantGetter.h"

#ifdef MOVIESCENE_MovieSceneNumericVariantGetter_generated_h
#error "MovieSceneNumericVariantGetter.generated.h already included, missing '#pragma once' in MovieSceneNumericVariantGetter.h"
#endif
#define MOVIESCENE_MovieSceneNumericVariantGetter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNumericVariantGetter ******************************************
struct Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNumericVariantGetter(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNumericVariantGetter, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNumericVariantGetter)


#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNumericVariantGetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNumericVariantGetter(UMovieSceneNumericVariantGetter&&) = delete; \
	UMovieSceneNumericVariantGetter(const UMovieSceneNumericVariantGetter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNumericVariantGetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNumericVariantGetter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNumericVariantGetter) \
	MOVIESCENE_API virtual ~UMovieSceneNumericVariantGetter();


#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNumericVariantGetter;

// ********** End Class UMovieSceneNumericVariantGetter ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
