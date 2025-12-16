// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneCinePrestreamingSection.h"

#ifdef CINEMATICPRESTREAMING_MovieSceneCinePrestreamingSection_generated_h
#error "MovieSceneCinePrestreamingSection.generated.h already included, missing '#pragma once' in MovieSceneCinePrestreamingSection.h"
#endif
#define CINEMATICPRESTREAMING_MovieSceneCinePrestreamingSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCinePrestreamingData;

// ********** Begin Class UMovieSceneCinePrestreamingSection ***************************************
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStartFrameOffset); \
	DECLARE_FUNCTION(execSetQualityLevel); \
	DECLARE_FUNCTION(execGetQualityLevel); \
	DECLARE_FUNCTION(execSetPrestreamingAsset); \
	DECLARE_FUNCTION(execGetPrestreamingAsset);


struct Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics;
CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister();

#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCinePrestreamingSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICPRESTREAMING_API UClass* ::Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCinePrestreamingSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicPrestreaming"), Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCinePrestreamingSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCinePrestreamingSection*>(this); }


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCinePrestreamingSection(UMovieSceneCinePrestreamingSection&&) = delete; \
	UMovieSceneCinePrestreamingSection(const UMovieSceneCinePrestreamingSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICPRESTREAMING_API, UMovieSceneCinePrestreamingSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCinePrestreamingSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCinePrestreamingSection) \
	CINEMATICPRESTREAMING_API virtual ~UMovieSceneCinePrestreamingSection();


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCinePrestreamingSection;

// ********** End Class UMovieSceneCinePrestreamingSection *****************************************

// ********** Begin ScriptStruct FMovieSceneCinePrestreamingComponentData **************************
struct Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics;
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics; \
	CINEMATICPRESTREAMING_API static class UScriptStruct* StaticStruct();


struct FMovieSceneCinePrestreamingComponentData;
// ********** End ScriptStruct FMovieSceneCinePrestreamingComponentData ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
