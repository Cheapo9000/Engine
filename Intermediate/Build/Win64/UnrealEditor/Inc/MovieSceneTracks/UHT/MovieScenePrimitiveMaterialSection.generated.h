// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScenePrimitiveMaterialSection.h"

#ifdef MOVIESCENETRACKS_MovieScenePrimitiveMaterialSection_generated_h
#error "MovieScenePrimitiveMaterialSection.generated.h already included, missing '#pragma once' in MovieScenePrimitiveMaterialSection.h"
#endif
#define MOVIESCENETRACKS_MovieScenePrimitiveMaterialSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieScenePrimitiveMaterialSection **************************************
struct Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePrimitiveMaterialSection(); \
	friend struct ::Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePrimitiveMaterialSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePrimitiveMaterialSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScenePrimitiveMaterialSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePrimitiveMaterialSection(UMovieScenePrimitiveMaterialSection&&) = delete; \
	UMovieScenePrimitiveMaterialSection(const UMovieScenePrimitiveMaterialSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePrimitiveMaterialSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePrimitiveMaterialSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePrimitiveMaterialSection) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePrimitiveMaterialSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_10_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePrimitiveMaterialSection;

// ********** End Class UMovieScenePrimitiveMaterialSection ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
