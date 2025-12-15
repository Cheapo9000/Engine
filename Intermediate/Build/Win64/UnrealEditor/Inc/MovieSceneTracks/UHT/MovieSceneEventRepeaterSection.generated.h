// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEventRepeaterSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneEventRepeaterSection_generated_h
#error "MovieSceneEventRepeaterSection.generated.h already included, missing '#pragma once' in MovieSceneEventRepeaterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventRepeaterSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEventRepeaterSection ******************************************
struct Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventRepeaterSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventRepeaterSection, UMovieSceneEventSectionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventRepeaterSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventRepeaterSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEventRepeaterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventRepeaterSection(UMovieSceneEventRepeaterSection&&) = delete; \
	UMovieSceneEventRepeaterSection(const UMovieSceneEventRepeaterSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventRepeaterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventRepeaterSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventRepeaterSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventRepeaterSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventRepeaterSection;

// ********** End Class UMovieSceneEventRepeaterSection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
