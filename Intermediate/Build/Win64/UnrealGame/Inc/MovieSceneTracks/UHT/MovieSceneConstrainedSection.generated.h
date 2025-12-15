// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneConstrainedSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneConstrainedSection_generated_h
#error "MovieSceneConstrainedSection.generated.h already included, missing '#pragma once' in MovieSceneConstrainedSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneConstrainedSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneConstrainedSection ****************************************
struct Z_Construct_UClass_UMovieSceneConstrainedSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneConstrainedSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneConstrainedSection(UMovieSceneConstrainedSection&&) = delete; \
	UMovieSceneConstrainedSection(const UMovieSceneConstrainedSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneConstrainedSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneConstrainedSection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneConstrainedSection) \
	virtual ~UMovieSceneConstrainedSection() = default;


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneConstrainedSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneConstrainedSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneConstrainedSection, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneConstrainedSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneConstrainedSection() {} \
public: \
	typedef UMovieSceneConstrainedSection UClassType; \
	typedef IMovieSceneConstrainedSection ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneConstrainedSection;

// ********** End Interface UMovieSceneConstrainedSection ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
