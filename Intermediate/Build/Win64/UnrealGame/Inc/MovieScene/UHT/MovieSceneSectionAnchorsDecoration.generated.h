// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneSectionAnchorsDecoration.h"

#ifdef MOVIESCENE_MovieSceneSectionAnchorsDecoration_generated_h
#error "MovieSceneSectionAnchorsDecoration.generated.h already included, missing '#pragma once' in MovieSceneSectionAnchorsDecoration.h"
#endif
#define MOVIESCENE_MovieSceneSectionAnchorsDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneSectionAnchorsDecoration **************************************
struct Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSectionAnchorsDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSectionAnchorsDecoration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSectionAnchorsDecoration) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSectionAnchorsDecoration*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSectionAnchorsDecoration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSectionAnchorsDecoration(UMovieSceneSectionAnchorsDecoration&&) = delete; \
	UMovieSceneSectionAnchorsDecoration(const UMovieSceneSectionAnchorsDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSectionAnchorsDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSectionAnchorsDecoration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSectionAnchorsDecoration) \
	MOVIESCENE_API virtual ~UMovieSceneSectionAnchorsDecoration();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSectionAnchorsDecoration;

// ********** End Class UMovieSceneSectionAnchorsDecoration ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
