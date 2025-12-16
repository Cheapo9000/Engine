// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneCameraFramingZoneSection.h"

#ifdef GAMEPLAYCAMERAS_MovieSceneCameraFramingZoneSection_generated_h
#error "MovieSceneCameraFramingZoneSection.generated.h already included, missing '#pragma once' in MovieSceneCameraFramingZoneSection.h"
#endif
#define GAMEPLAYCAMERAS_MovieSceneCameraFramingZoneSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneCameraFramingZoneSection **************************************
struct Z_Construct_UClass_UMovieSceneCameraFramingZoneSection_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMovieSceneCameraFramingZoneSection_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraFramingZoneSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCameraFramingZoneSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UMovieSceneCameraFramingZoneSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCameraFramingZoneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UMovieSceneCameraFramingZoneSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCameraFramingZoneSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCameraFramingZoneSection*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UMovieSceneCameraFramingZoneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraFramingZoneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UMovieSceneCameraFramingZoneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraFramingZoneSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCameraFramingZoneSection(UMovieSceneCameraFramingZoneSection&&) = delete; \
	UMovieSceneCameraFramingZoneSection(const UMovieSceneCameraFramingZoneSection&) = delete; \
	GAMEPLAYCAMERAS_API virtual ~UMovieSceneCameraFramingZoneSection();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_19_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCameraFramingZoneSection;

// ********** End Class UMovieSceneCameraFramingZoneSection ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MovieScene_MovieSceneCameraFramingZoneSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
