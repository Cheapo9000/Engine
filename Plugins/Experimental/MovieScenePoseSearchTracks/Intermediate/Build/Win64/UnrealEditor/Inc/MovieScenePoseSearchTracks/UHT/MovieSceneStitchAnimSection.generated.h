// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneStitchAnimSection.h"

#ifdef MOVIESCENEPOSESEARCHTRACKS_MovieSceneStitchAnimSection_generated_h
#error "MovieSceneStitchAnimSection.generated.h already included, missing '#pragma once' in MovieSceneStitchAnimSection.h"
#endif
#define MOVIESCENEPOSESEARCHTRACKS_MovieSceneStitchAnimSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneStitchAnimComponentData ********************************
struct Z_Construct_UScriptStruct_FMovieSceneStitchAnimComponentData_Statics;
#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneStitchAnimComponentData_Statics; \
	MOVIESCENEPOSESEARCHTRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneStitchAnimComponentData;
// ********** End ScriptStruct FMovieSceneStitchAnimComponentData **********************************

// ********** Begin ScriptStruct FMovieSceneStitchAnimEvaluationTask *******************************
struct Z_Construct_UScriptStruct_FMovieSceneStitchAnimEvaluationTask_Statics;
#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneStitchAnimEvaluationTask_Statics; \
	MOVIESCENEPOSESEARCHTRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextEvaluationTask Super;


struct FMovieSceneStitchAnimEvaluationTask;
// ********** End ScriptStruct FMovieSceneStitchAnimEvaluationTask *********************************

// ********** Begin Class UMovieSceneStitchAnimSection *********************************************
struct Z_Construct_UClass_UMovieSceneStitchAnimSection_Statics;
MOVIESCENEPOSESEARCHTRACKS_API UClass* Z_Construct_UClass_UMovieSceneStitchAnimSection_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneStitchAnimSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneStitchAnimSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEPOSESEARCHTRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneStitchAnimSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneStitchAnimSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScenePoseSearchTracks"), Z_Construct_UClass_UMovieSceneStitchAnimSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneStitchAnimSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneStitchAnimSection*>(this); }


#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_112_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneStitchAnimSection(UMovieSceneStitchAnimSection&&) = delete; \
	UMovieSceneStitchAnimSection(const UMovieSceneStitchAnimSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEPOSESEARCHTRACKS_API, UMovieSceneStitchAnimSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneStitchAnimSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneStitchAnimSection) \
	MOVIESCENEPOSESEARCHTRACKS_API virtual ~UMovieSceneStitchAnimSection();


#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_106_PROLOG
#define FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneStitchAnimSection;

// ********** End Class UMovieSceneStitchAnimSection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieScenePoseSearchTracks_Source_MovieScenePoseSearchTracks_Public_Sections_MovieSceneStitchAnimSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
