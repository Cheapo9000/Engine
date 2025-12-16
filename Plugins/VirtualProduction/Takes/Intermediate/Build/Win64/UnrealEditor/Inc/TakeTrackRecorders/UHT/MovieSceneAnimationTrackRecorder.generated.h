// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackRecorders/MovieSceneAnimationTrackRecorder.h"

#ifdef TAKETRACKRECORDERS_MovieSceneAnimationTrackRecorder_generated_h
#error "MovieSceneAnimationTrackRecorder.generated.h already included, missing '#pragma once' in MovieSceneAnimationTrackRecorder.h"
#endif
#define TAKETRACKRECORDERS_MovieSceneAnimationTrackRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAnimationTrackRecorder ****************************************
struct Z_Construct_UClass_UMovieSceneAnimationTrackRecorder_Statics;
TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimationTrackRecorder(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimationTrackRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKETRACKRECORDERS_API UClass* ::Z_Construct_UClass_UMovieSceneAnimationTrackRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimationTrackRecorder, UMovieSceneTrackRecorder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TakeTrackRecorders"), Z_Construct_UClass_UMovieSceneAnimationTrackRecorder_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimationTrackRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKETRACKRECORDERS_API UMovieSceneAnimationTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimationTrackRecorder(UMovieSceneAnimationTrackRecorder&&) = delete; \
	UMovieSceneAnimationTrackRecorder(const UMovieSceneAnimationTrackRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKETRACKRECORDERS_API, UMovieSceneAnimationTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimationTrackRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAnimationTrackRecorder) \
	TAKETRACKRECORDERS_API virtual ~UMovieSceneAnimationTrackRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_42_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimationTrackRecorder;

// ********** End Class UMovieSceneAnimationTrackRecorder ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
