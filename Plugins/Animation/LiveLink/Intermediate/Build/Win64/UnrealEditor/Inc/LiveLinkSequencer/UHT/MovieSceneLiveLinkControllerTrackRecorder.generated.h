// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneLiveLinkControllerTrackRecorder.h"

#ifdef LIVELINKSEQUENCER_MovieSceneLiveLinkControllerTrackRecorder_generated_h
#error "MovieSceneLiveLinkControllerTrackRecorder.generated.h already included, missing '#pragma once' in MovieSceneLiveLinkControllerTrackRecorder.h"
#endif
#define LIVELINKSEQUENCER_MovieSceneLiveLinkControllerTrackRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneLiveLinkControllerTrackRecorder *******************************
struct Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics;
LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLiveLinkControllerTrackRecorder(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKSEQUENCER_API UClass* ::Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLiveLinkControllerTrackRecorder, UMovieSceneTrackRecorder, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLinkSequencer"), Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLiveLinkControllerTrackRecorder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKSEQUENCER_API UMovieSceneLiveLinkControllerTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLiveLinkControllerTrackRecorder(UMovieSceneLiveLinkControllerTrackRecorder&&) = delete; \
	UMovieSceneLiveLinkControllerTrackRecorder(const UMovieSceneLiveLinkControllerTrackRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKSEQUENCER_API, UMovieSceneLiveLinkControllerTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLiveLinkControllerTrackRecorder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLiveLinkControllerTrackRecorder) \
	LIVELINKSEQUENCER_API virtual ~UMovieSceneLiveLinkControllerTrackRecorder();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLiveLinkControllerTrackRecorder;

// ********** End Class UMovieSceneLiveLinkControllerTrackRecorder *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
