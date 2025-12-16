// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackRecorders/MovieSceneTrackRecorderSettings.h"

#ifdef TAKETRACKRECORDERS_MovieSceneTrackRecorderSettings_generated_h
#error "MovieSceneTrackRecorderSettings.generated.h already included, missing '#pragma once' in MovieSceneTrackRecorderSettings.h"
#endif
#define TAKETRACKRECORDERS_MovieSceneTrackRecorderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTrackRecorderSettings *****************************************
struct Z_Construct_UClass_UMovieSceneTrackRecorderSettings_Statics;
TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorderSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackRecorderSettings(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackRecorderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKETRACKRECORDERS_API UClass* ::Z_Construct_UClass_UMovieSceneTrackRecorderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackRecorderSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeTrackRecorders"), Z_Construct_UClass_UMovieSceneTrackRecorderSettings_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackRecorderSettings)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKETRACKRECORDERS_API UMovieSceneTrackRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackRecorderSettings(UMovieSceneTrackRecorderSettings&&) = delete; \
	UMovieSceneTrackRecorderSettings(const UMovieSceneTrackRecorderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKETRACKRECORDERS_API, UMovieSceneTrackRecorderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackRecorderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackRecorderSettings) \
	TAKETRACKRECORDERS_API virtual ~UMovieSceneTrackRecorderSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackRecorderSettings;

// ********** End Class UMovieSceneTrackRecorderSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
