// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScene3DTransformSection.h"

#ifdef MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h
#error "MovieScene3DTransformSection.generated.h already included, missing '#pragma once' in MovieScene3DTransformSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieScene3DLocationKeyStruct ************************************
struct Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieScene3DLocationKeyStruct;
// ********** End ScriptStruct FMovieScene3DLocationKeyStruct **************************************

// ********** Begin ScriptStruct FMovieScene3DRotationKeyStruct ************************************
struct Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieScene3DRotationKeyStruct;
// ********** End ScriptStruct FMovieScene3DRotationKeyStruct **************************************

// ********** Begin ScriptStruct FMovieScene3DScaleKeyStruct ***************************************
struct Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieScene3DScaleKeyStruct;
// ********** End ScriptStruct FMovieScene3DScaleKeyStruct *****************************************

// ********** Begin ScriptStruct FMovieScene3DTransformKeyStruct ***********************************
struct Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieScene3DTransformKeyStruct;
// ********** End ScriptStruct FMovieScene3DTransformKeyStruct *************************************

// ********** Begin ScriptStruct FMovieSceneTransformMask ******************************************
struct Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTransformMask;
// ********** End ScriptStruct FMovieSceneTransformMask ********************************************

// ********** Begin Class UMovieScene3DTransformSectionConstraints *********************************
struct Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSectionConstraints(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DTransformSectionConstraints, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSectionConstraints)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSectionConstraints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DTransformSectionConstraints(UMovieScene3DTransformSectionConstraints&&) = delete; \
	UMovieScene3DTransformSectionConstraints(const UMovieScene3DTransformSectionConstraints&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSectionConstraints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSectionConstraints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSectionConstraints) \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DTransformSectionConstraints();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_194_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DTransformSectionConstraints;

// ********** End Class UMovieScene3DTransformSectionConstraints ***********************************

// ********** Begin Class UMovieScene3DTransformSection ********************************************
struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend struct ::Z_Construct_UClass_UMovieScene3DTransformSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DTransformSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene3DTransformSection(UMovieScene3DTransformSection&&) = delete; \
	UMovieScene3DTransformSection(const UMovieScene3DTransformSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DTransformSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_214_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene3DTransformSection;

// ********** End Class UMovieScene3DTransformSection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h

// ********** Begin Enum EShow3DTrajectory *********************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ESHOW3DTRAJECTORY(op) \
	op(EShow3DTrajectory::EST_OnlyWhenSelected) \
	op(EShow3DTrajectory::EST_Always) \
	op(EShow3DTrajectory::EST_Never) 

enum class EShow3DTrajectory : uint8;
template<> struct TIsUEnumClass<EShow3DTrajectory> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EShow3DTrajectory>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EShow3DTrajectory ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
