// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneLiveLinkTrackRecorder.h"

#ifdef LIVELINKSEQUENCER_MovieSceneLiveLinkTrackRecorder_generated_h
#error "MovieSceneLiveLinkTrackRecorder.generated.h already included, missing '#pragma once' in MovieSceneLiveLinkTrackRecorder.h"
#endif
#define LIVELINKSEQUENCER_MovieSceneLiveLinkTrackRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneLiveLinkTrackRecorder *****************************************
struct Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics;
LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLiveLinkTrackRecorder(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKSEQUENCER_API UClass* ::Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLiveLinkTrackRecorder, UMovieSceneTrackRecorder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLinkSequencer"), Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLiveLinkTrackRecorder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKSEQUENCER_API UMovieSceneLiveLinkTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLiveLinkTrackRecorder(UMovieSceneLiveLinkTrackRecorder&&) = delete; \
	UMovieSceneLiveLinkTrackRecorder(const UMovieSceneLiveLinkTrackRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKSEQUENCER_API, UMovieSceneLiveLinkTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLiveLinkTrackRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLiveLinkTrackRecorder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_26_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLiveLinkTrackRecorder;

// ********** End Class UMovieSceneLiveLinkTrackRecorder *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
