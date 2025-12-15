// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MovieSceneWidgetMaterialTrack.h"

#ifdef UMG_MovieSceneWidgetMaterialTrack_generated_h
#error "MovieSceneWidgetMaterialTrack.generated.h already included, missing '#pragma once' in MovieSceneWidgetMaterialTrack.h"
#endif
#define UMG_MovieSceneWidgetMaterialTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneWidgetMaterialTrack *******************************************
struct Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics;
UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneWidgetMaterialTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneWidgetMaterialTrack, UMovieSceneMaterialTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneWidgetMaterialTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneWidgetMaterialTrack*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMovieSceneWidgetMaterialTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneWidgetMaterialTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMovieSceneWidgetMaterialTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneWidgetMaterialTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneWidgetMaterialTrack(UMovieSceneWidgetMaterialTrack&&) = delete; \
	UMovieSceneWidgetMaterialTrack(const UMovieSceneWidgetMaterialTrack&) = delete; \
	UMG_API virtual ~UMovieSceneWidgetMaterialTrack();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_29_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_35_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneWidgetMaterialTrack;

// ********** End Class UMovieSceneWidgetMaterialTrack *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
