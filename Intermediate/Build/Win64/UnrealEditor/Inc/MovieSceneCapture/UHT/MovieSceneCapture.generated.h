// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCapture.h"

#ifdef MOVIESCENECAPTURE_MovieSceneCapture_generated_h
#error "MovieSceneCapture.generated.h already included, missing '#pragma once' in MovieSceneCapture.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMovieSceneCaptureProtocolBase;

// ********** Begin Class UMovieSceneCapture *******************************************************
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAudioCaptureProtocolType); \
	DECLARE_FUNCTION(execSetImageCaptureProtocolType); \
	DECLARE_FUNCTION(execGetAudioCaptureProtocol); \
	DECLARE_FUNCTION(execGetImageCaptureProtocol);


struct Z_Construct_UClass_UMovieSceneCapture_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCapture(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UMovieSceneCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCapture, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UMovieSceneCapture_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCapture) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCapture*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCapture(UMovieSceneCapture&&) = delete; \
	UMovieSceneCapture(const UMovieSceneCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCapture) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneCapture();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_36_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_42_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCapture;

// ********** End Class UMovieSceneCapture *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
