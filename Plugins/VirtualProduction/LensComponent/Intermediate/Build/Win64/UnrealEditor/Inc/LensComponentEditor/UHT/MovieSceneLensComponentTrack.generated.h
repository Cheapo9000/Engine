// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneLensComponentTrack.h"

#ifdef LENSCOMPONENTEDITOR_MovieSceneLensComponentTrack_generated_h
#error "MovieSceneLensComponentTrack.generated.h already included, missing '#pragma once' in MovieSceneLensComponentTrack.h"
#endif
#define LENSCOMPONENTEDITOR_MovieSceneLensComponentTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneLensComponentTrack ********************************************
struct Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics;
LENSCOMPONENTEDITOR_API UClass* Z_Construct_UClass_UMovieSceneLensComponentTrack_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLensComponentTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LENSCOMPONENTEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneLensComponentTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLensComponentTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensComponentEditor"), Z_Construct_UClass_UMovieSceneLensComponentTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLensComponentTrack)


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LENSCOMPONENTEDITOR_API UMovieSceneLensComponentTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLensComponentTrack(UMovieSceneLensComponentTrack&&) = delete; \
	UMovieSceneLensComponentTrack(const UMovieSceneLensComponentTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSCOMPONENTEDITOR_API, UMovieSceneLensComponentTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLensComponentTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLensComponentTrack) \
	LENSCOMPONENTEDITOR_API virtual ~UMovieSceneLensComponentTrack();


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLensComponentTrack;

// ********** End Class UMovieSceneLensComponentTrack **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
