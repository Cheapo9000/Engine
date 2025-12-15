// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCaptureEnvironment.h"

#ifdef MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h
#error "MovieSceneCaptureEnvironment.generated.h already included, missing '#pragma once' in MovieSceneCaptureEnvironment.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;

// ********** Begin Class UMovieSceneCaptureEnvironment ********************************************
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAudioCaptureProtocol); \
	DECLARE_FUNCTION(execFindImageCaptureProtocol); \
	DECLARE_FUNCTION(execIsCaptureInProgress); \
	DECLARE_FUNCTION(execGetCaptureElapsedTime); \
	DECLARE_FUNCTION(execGetCaptureFrameNumber);


struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureEnvironment(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCaptureEnvironment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCaptureEnvironment)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment&&) = delete; \
	UMovieSceneCaptureEnvironment(const UMovieSceneCaptureEnvironment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCaptureEnvironment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureEnvironment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureEnvironment) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneCaptureEnvironment();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCaptureEnvironment;

// ********** End Class UMovieSceneCaptureEnvironment **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
