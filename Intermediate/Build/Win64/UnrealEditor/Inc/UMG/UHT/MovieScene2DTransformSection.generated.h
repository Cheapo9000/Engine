// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MovieScene2DTransformSection.h"

#ifdef UMG_MovieScene2DTransformSection_generated_h
#error "MovieScene2DTransformSection.generated.h already included, missing '#pragma once' in MovieScene2DTransformSection.h"
#endif
#define UMG_MovieScene2DTransformSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieScene2DTransformMask ****************************************
struct Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FMovieScene2DTransformMask;
// ********** End ScriptStruct FMovieScene2DTransformMask ******************************************

// ********** Begin Class UMovieScene2DTransformSection ********************************************
struct Z_Construct_UClass_UMovieScene2DTransformSection_Statics;
UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene2DTransformSection(); \
	friend struct ::Z_Construct_UClass_UMovieScene2DTransformSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene2DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene2DTransformSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene2DTransformSection*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMovieScene2DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene2DTransformSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMovieScene2DTransformSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene2DTransformSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene2DTransformSection(UMovieScene2DTransformSection&&) = delete; \
	UMovieScene2DTransformSection(const UMovieScene2DTransformSection&) = delete; \
	UMG_API virtual ~UMovieScene2DTransformSection();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_98_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_103_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene2DTransformSection;

// ********** End Class UMovieScene2DTransformSection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
