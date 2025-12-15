// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneCameraShakeSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneCameraShakeSection_generated_h
#error "MovieSceneCameraShakeSection.generated.h already included, missing '#pragma once' in MovieSceneCameraShakeSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraShakeSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneCameraShakeSectionData *********************************
struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneCameraShakeSectionData;
// ********** End ScriptStruct FMovieSceneCameraShakeSectionData ***********************************

// ********** Begin Class UMovieSceneCameraShakeSection ********************************************
struct Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraShakeSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCameraShakeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCameraShakeSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCameraShakeSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCameraShakeSection(UMovieSceneCameraShakeSection&&) = delete; \
	UMovieSceneCameraShakeSection(const UMovieSceneCameraShakeSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraShakeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraShakeSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraShakeSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCameraShakeSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_49_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCameraShakeSection;

// ********** End Class UMovieSceneCameraShakeSection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
