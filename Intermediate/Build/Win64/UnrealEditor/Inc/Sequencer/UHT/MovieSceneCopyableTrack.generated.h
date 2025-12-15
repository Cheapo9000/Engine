// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCopyableTrack.h"

#ifdef SEQUENCER_MovieSceneCopyableTrack_generated_h
#error "MovieSceneCopyableTrack.generated.h already included, missing '#pragma once' in MovieSceneCopyableTrack.h"
#endif
#define SEQUENCER_MovieSceneCopyableTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneCopyableTrack *************************************************
struct Z_Construct_UClass_UMovieSceneCopyableTrack_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCopyableTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCopyableTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCopyableTrack, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCopyableTrack)


#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCopyableTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCopyableTrack(UMovieSceneCopyableTrack&&) = delete; \
	UMovieSceneCopyableTrack(const UMovieSceneCopyableTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCopyableTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCopyableTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCopyableTrack) \
	NO_API virtual ~UMovieSceneCopyableTrack();


#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_11_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCopyableTrack;

// ********** End Class UMovieSceneCopyableTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
