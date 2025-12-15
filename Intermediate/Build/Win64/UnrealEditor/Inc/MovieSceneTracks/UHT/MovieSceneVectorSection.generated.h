// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneVectorSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneVectorSection_generated_h
#error "MovieSceneVectorSection.generated.h already included, missing '#pragma once' in MovieSceneVectorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVectorSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneFloatVectorKeyStructBase *******************************
struct Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieSceneFloatVectorKeyStructBase;
// ********** End ScriptStruct FMovieSceneFloatVectorKeyStructBase *********************************

// ********** Begin ScriptStruct FMovieSceneVector2fKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneFloatVectorKeyStructBase Super;


struct FMovieSceneVector2fKeyStruct;
// ********** End ScriptStruct FMovieSceneVector2fKeyStruct ****************************************

// ********** Begin ScriptStruct FMovieSceneVector3fKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneFloatVectorKeyStructBase Super;


struct FMovieSceneVector3fKeyStruct;
// ********** End ScriptStruct FMovieSceneVector3fKeyStruct ****************************************

// ********** Begin ScriptStruct FMovieSceneVector4fKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneFloatVectorKeyStructBase Super;


struct FMovieSceneVector4fKeyStruct;
// ********** End ScriptStruct FMovieSceneVector4fKeyStruct ****************************************

// ********** Begin ScriptStruct FMovieSceneDoubleVectorKeyStructBase ******************************
struct Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


struct FMovieSceneDoubleVectorKeyStructBase;
// ********** End ScriptStruct FMovieSceneDoubleVectorKeyStructBase ********************************

// ********** Begin ScriptStruct FMovieSceneVector2DKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneDoubleVectorKeyStructBase Super;


struct FMovieSceneVector2DKeyStruct;
// ********** End ScriptStruct FMovieSceneVector2DKeyStruct ****************************************

// ********** Begin ScriptStruct FMovieSceneVector3dKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneDoubleVectorKeyStructBase Super;


struct FMovieSceneVector3dKeyStruct;
// ********** End ScriptStruct FMovieSceneVector3dKeyStruct ****************************************

// ********** Begin ScriptStruct FMovieSceneVector4dKeyStruct **************************************
struct Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneDoubleVectorKeyStructBase Super;


struct FMovieSceneVector4dKeyStruct;
// ********** End ScriptStruct FMovieSceneVector4dKeyStruct ****************************************

// ********** Begin Class UMovieSceneFloatVectorSection ********************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFloatVectorSection, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatVectorSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneFloatVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneFloatVectorSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneFloatVectorSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatVectorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatVectorSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatVectorSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneFloatVectorSection(UMovieSceneFloatVectorSection&&) = delete; \
	UMovieSceneFloatVectorSection(const UMovieSceneFloatVectorSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFloatVectorSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_178_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_183_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneFloatVectorSection;

// ********** End Class UMovieSceneFloatVectorSection **********************************************

// ********** Begin Class UMovieSceneDoubleVectorSection *******************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDoubleVectorSection, MOVIESCENETRACKS_API)


struct Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneDoubleVectorSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDoubleVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDoubleVectorSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneDoubleVectorSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneDoubleVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDoubleVectorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDoubleVectorSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDoubleVectorSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDoubleVectorSection(UMovieSceneDoubleVectorSection&&) = delete; \
	UMovieSceneDoubleVectorSection(const UMovieSceneDoubleVectorSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDoubleVectorSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_237_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_242_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDoubleVectorSection;

// ********** End Class UMovieSceneDoubleVectorSection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
