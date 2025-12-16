// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackRecorders/MovieSceneTrackRecorder.h"

#ifdef TAKETRACKRECORDERS_MovieSceneTrackRecorder_generated_h
#error "MovieSceneTrackRecorder.generated.h already included, missing '#pragma once' in MovieSceneTrackRecorder.h"
#endif
#define TAKETRACKRECORDERS_MovieSceneTrackRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTrackRecorder *************************************************
struct Z_Construct_UClass_UMovieSceneTrackRecorder_Statics;
TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackRecorder(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKETRACKRECORDERS_API UClass* ::Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackRecorder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TakeTrackRecorders"), Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKETRACKRECORDERS_API UMovieSceneTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackRecorder(UMovieSceneTrackRecorder&&) = delete; \
	UMovieSceneTrackRecorder(const UMovieSceneTrackRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKETRACKRECORDERS_API, UMovieSceneTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackRecorder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackRecorder) \
	TAKETRACKRECORDERS_API virtual ~UMovieSceneTrackRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackRecorder;

// ********** End Class UMovieSceneTrackRecorder ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
