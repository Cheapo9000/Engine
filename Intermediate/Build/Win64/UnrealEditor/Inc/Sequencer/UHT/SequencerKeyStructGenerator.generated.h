// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerKeyStructGenerator.h"

#ifdef SEQUENCER_SequencerKeyStructGenerator_generated_h
#error "SequencerKeyStructGenerator.generated.h already included, missing '#pragma once' in SequencerKeyStructGenerator.h"
#endif
#define SEQUENCER_SequencerKeyStructGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneKeyStructType *************************************************
struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneKeyStructType(); \
	friend struct ::Z_Construct_UClass_UMovieSceneKeyStructType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneKeyStructType, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneKeyStructType)


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneKeyStructType(UMovieSceneKeyStructType&&) = delete; \
	UMovieSceneKeyStructType(const UMovieSceneKeyStructType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, UMovieSceneKeyStructType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneKeyStructType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneKeyStructType) \
	SEQUENCER_API virtual ~UMovieSceneKeyStructType();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_38_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_42_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneKeyStructType;

// ********** End Class UMovieSceneKeyStructType ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
