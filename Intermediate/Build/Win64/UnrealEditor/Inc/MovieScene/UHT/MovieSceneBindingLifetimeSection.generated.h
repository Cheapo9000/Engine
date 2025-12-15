// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBindingLifetimeSection.h"

#ifdef MOVIESCENE_MovieSceneBindingLifetimeSection_generated_h
#error "MovieSceneBindingLifetimeSection.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeSection.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneBindingLifetimeSection ****************************************
struct Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneBindingLifetimeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneBindingLifetimeSection*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeSection(UMovieSceneBindingLifetimeSection&&) = delete; \
	UMovieSceneBindingLifetimeSection(const UMovieSceneBindingLifetimeSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeSection) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneBindingLifetimeSection;

// ********** End Class UMovieSceneBindingLifetimeSection ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
