// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorations/MovieSceneMuteSoloDecoration.h"

#ifdef MOVIESCENE_MovieSceneMuteSoloDecoration_generated_h
#error "MovieSceneMuteSoloDecoration.generated.h already included, missing '#pragma once' in MovieSceneMuteSoloDecoration.h"
#endif
#define MOVIESCENE_MovieSceneMuteSoloDecoration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneMuteSoloDecoration ********************************************
struct Z_Construct_UClass_UMovieSceneMuteSoloDecoration_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMuteSoloDecoration_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMuteSoloDecoration(); \
	friend struct ::Z_Construct_UClass_UMovieSceneMuteSoloDecoration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneMuteSoloDecoration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneMuteSoloDecoration, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneMuteSoloDecoration_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneMuteSoloDecoration) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMuteSoloDecoration*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneMuteSoloDecoration(UMovieSceneMuteSoloDecoration&&) = delete; \
	UMovieSceneMuteSoloDecoration(const UMovieSceneMuteSoloDecoration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneMuteSoloDecoration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMuteSoloDecoration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneMuteSoloDecoration) \
	MOVIESCENE_API virtual ~UMovieSceneMuteSoloDecoration();


#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_17_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneMuteSoloDecoration;

// ********** End Class UMovieSceneMuteSoloDecoration **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
