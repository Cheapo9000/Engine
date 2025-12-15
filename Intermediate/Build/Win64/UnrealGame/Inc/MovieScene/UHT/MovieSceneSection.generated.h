// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSection.h"

#ifdef MOVIESCENE_MovieSceneSection_generated_h
#error "MovieSceneSection.generated.h already included, missing '#pragma once' in MovieSceneSection.h"
#endif
#define MOVIESCENE_MovieSceneSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneBlendType : uint8;
enum class EMovieSceneCompletionMode : uint8;
struct FColor;
struct FOptionalMovieSceneBlendType;

// ********** Begin ScriptStruct FMovieSceneSectionEvalOptions *************************************
struct Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSectionEvalOptions;
// ********** End ScriptStruct FMovieSceneSectionEvalOptions ***************************************

// ********** Begin ScriptStruct FMovieSceneEasingSettings *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEasingSettings;
// ********** End ScriptStruct FMovieSceneEasingSettings *******************************************

// ********** Begin ScriptStruct FMovieSceneTimecodeSource *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTimecodeSource;
// ********** End ScriptStruct FMovieSceneTimecodeSource *******************************************

// ********** Begin Class UMovieSceneSection *******************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetColorTint); \
	DECLARE_FUNCTION(execSetColorTint); \
	DECLARE_FUNCTION(execGetPostRollFrames); \
	DECLARE_FUNCTION(execSetPostRollFrames); \
	DECLARE_FUNCTION(execGetPreRollFrames); \
	DECLARE_FUNCTION(execSetPreRollFrames); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execGetOverlapPriority); \
	DECLARE_FUNCTION(execSetOverlapPriority); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execSetRowIndex); \
	DECLARE_FUNCTION(execSetBlendType); \
	DECLARE_FUNCTION(execGetBlendType); \
	DECLARE_FUNCTION(execSetCompletionMode); \
	DECLARE_FUNCTION(execGetCompletionMode);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSection, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneSection, UMovieSceneDecorationContainerObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneSection(UMovieSceneSection&&) = delete; \
	UMovieSceneSection(const UMovieSceneSection&) = delete; \
	MOVIESCENE_API virtual ~UMovieSceneSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_240_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_244_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneSection;

// ********** End Class UMovieSceneSection *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
