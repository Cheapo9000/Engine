// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneParameterSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneParameterSection_generated_h
#error "MovieSceneParameterSection.generated.h already included, missing '#pragma once' in MovieSceneParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParameterSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneKeyInterpolation : uint8;
struct FFrameNumber;
struct FLinearColor;

// ********** Begin Interface UMovieSceneParameterSectionExtender **********************************
struct Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSectionExtender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneParameterSectionExtender(UMovieSceneParameterSectionExtender&&) = delete; \
	UMovieSceneParameterSectionExtender(const UMovieSceneParameterSectionExtender&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSectionExtender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSectionExtender); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSectionExtender) \
	virtual ~UMovieSceneParameterSectionExtender() = default;


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSectionExtender(); \
	friend struct ::Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneParameterSectionExtender, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneParameterSectionExtender)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneParameterSectionExtender() {} \
public: \
	typedef UMovieSceneParameterSectionExtender UClassType; \
	typedef IMovieSceneParameterSectionExtender ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneParameterSectionExtender;

// ********** End Interface UMovieSceneParameterSectionExtender ************************************

// ********** Begin ScriptStruct FBaseParameterNameAndValue ****************************************
struct Z_Construct_UScriptStruct_FBaseParameterNameAndValue_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBaseParameterNameAndValue_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FBaseParameterNameAndValue;
// ********** End ScriptStruct FBaseParameterNameAndValue ******************************************

// ********** Begin ScriptStruct FBoolParameterNameAndCurve ****************************************
struct Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FBoolParameterNameAndCurve;
// ********** End ScriptStruct FBoolParameterNameAndCurve ******************************************

// ********** Begin ScriptStruct FScalarParameterNameAndCurve **************************************
struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FScalarParameterNameAndCurve;
// ********** End ScriptStruct FScalarParameterNameAndCurve ****************************************

// ********** Begin ScriptStruct FVector2DParameterNameAndCurves ***********************************
struct Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FVector2DParameterNameAndCurves;
// ********** End ScriptStruct FVector2DParameterNameAndCurves *************************************

// ********** Begin ScriptStruct FVectorParameterNameAndCurves *************************************
struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_251_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FVectorParameterNameAndCurves;
// ********** End ScriptStruct FVectorParameterNameAndCurves ***************************************

// ********** Begin ScriptStruct FColorParameterNameAndCurves **************************************
struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_280_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FColorParameterNameAndCurves;
// ********** End ScriptStruct FColorParameterNameAndCurves ****************************************

// ********** Begin ScriptStruct FTransformParameterNameAndCurves **********************************
struct Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FTransformParameterNameAndCurves;
// ********** End ScriptStruct FTransformParameterNameAndCurves ************************************

// ********** Begin Class UMovieSceneParameterSection **********************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetParameterNames); \
	DECLARE_FUNCTION(execRemoveTransformParameter); \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveVectorParameter); \
	DECLARE_FUNCTION(execRemoveVector2DParameter); \
	DECLARE_FUNCTION(execRemoveBoolParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddTransformParameterKey); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddVectorParameterKey); \
	DECLARE_FUNCTION(execAddVector2DParameterKey); \
	DECLARE_FUNCTION(execAddBoolParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneParameterSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneParameterSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneParameterSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParameterSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneParameterSection(UMovieSceneParameterSection&&) = delete; \
	UMovieSceneParameterSection(const UMovieSceneParameterSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParameterSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_336_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_341_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneParameterSection;

// ********** End Class UMovieSceneParameterSection ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
