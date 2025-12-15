// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCopyableBinding.h"

#ifdef SEQUENCER_MovieSceneCopyableBinding_generated_h
#error "MovieSceneCopyableBinding.generated.h already included, missing '#pragma once' in MovieSceneCopyableBinding.h"
#endif
#define SEQUENCER_MovieSceneCopyableBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneCopyableBinding ***********************************************
struct Z_Construct_UClass_UMovieSceneCopyableBinding_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCopyableBinding(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCopyableBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCopyableBinding, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCopyableBinding)


#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCopyableBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCopyableBinding(UMovieSceneCopyableBinding&&) = delete; \
	UMovieSceneCopyableBinding(const UMovieSceneCopyableBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCopyableBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCopyableBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCopyableBinding) \
	NO_API virtual ~UMovieSceneCopyableBinding();


#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_15_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCopyableBinding;

// ********** End Class UMovieSceneCopyableBinding *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
