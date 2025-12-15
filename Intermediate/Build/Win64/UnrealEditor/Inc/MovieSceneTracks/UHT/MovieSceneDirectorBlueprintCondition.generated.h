// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieSceneDirectorBlueprintCondition.h"

#ifdef MOVIESCENETRACKS_MovieSceneDirectorBlueprintCondition_generated_h
#error "MovieSceneDirectorBlueprintCondition.generated.h already included, missing '#pragma once' in MovieSceneDirectorBlueprintCondition.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDirectorBlueprintCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneDirectorBlueprintConditionPayloadVariable **************
struct Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDirectorBlueprintConditionPayloadVariable;
// ********** End ScriptStruct FMovieSceneDirectorBlueprintConditionPayloadVariable ****************

// ********** Begin ScriptStruct FMovieSceneDirectorBlueprintConditionData *************************
struct Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDirectorBlueprintConditionData;
// ********** End ScriptStruct FMovieSceneDirectorBlueprintConditionData ***************************

// ********** Begin Class UMovieSceneDirectorBlueprintCondition ************************************
struct Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDirectorBlueprintCondition(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDirectorBlueprintCondition, UMovieSceneCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDirectorBlueprintCondition)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneDirectorBlueprintCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDirectorBlueprintCondition(UMovieSceneDirectorBlueprintCondition&&) = delete; \
	UMovieSceneDirectorBlueprintCondition(const UMovieSceneDirectorBlueprintCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDirectorBlueprintCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDirectorBlueprintCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDirectorBlueprintCondition) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDirectorBlueprintCondition();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_92_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDirectorBlueprintCondition;

// ********** End Class UMovieSceneDirectorBlueprintCondition **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
