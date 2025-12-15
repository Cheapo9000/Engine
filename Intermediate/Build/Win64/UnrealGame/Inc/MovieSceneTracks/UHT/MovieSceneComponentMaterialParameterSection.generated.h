// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneComponentMaterialParameterSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneComponentMaterialParameterSection_generated_h
#error "MovieSceneComponentMaterialParameterSection.generated.h already included, missing '#pragma once' in MovieSceneComponentMaterialParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneComponentMaterialParameterSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneKeyInterpolation : uint8;
struct FFrameNumber;
struct FLinearColor;
struct FMaterialParameterInfo;
struct FParameterChannelNames;

// ********** Begin ScriptStruct FScalarMaterialParameterInfoAndCurve ******************************
struct Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FScalarMaterialParameterInfoAndCurve;
// ********** End ScriptStruct FScalarMaterialParameterInfoAndCurve ********************************

// ********** Begin ScriptStruct FColorMaterialParameterInfoAndCurves ******************************
struct Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FColorMaterialParameterInfoAndCurves;
// ********** End ScriptStruct FColorMaterialParameterInfoAndCurves ********************************

// ********** Begin Class UMovieSceneComponentMaterialParameterSection *****************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


struct Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMaterialParameterSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneComponentMaterialParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneComponentMaterialParameterSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMaterialParameterSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneComponentMaterialParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMaterialParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMaterialParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMaterialParameterSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMaterialParameterSection(UMovieSceneComponentMaterialParameterSection&&) = delete; \
	UMovieSceneComponentMaterialParameterSection(const UMovieSceneComponentMaterialParameterSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMaterialParameterSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_100_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneComponentMaterialParameterSection;

// ********** End Class UMovieSceneComponentMaterialParameterSection *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
