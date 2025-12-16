// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTakeTrack.h"

#ifdef TAKEMOVIESCENE_MovieSceneTakeTrack_generated_h
#error "MovieSceneTakeTrack.generated.h already included, missing '#pragma once' in MovieSceneTakeTrack.h"
#endif
#define TAKEMOVIESCENE_MovieSceneTakeTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTakeTrack *****************************************************
struct Z_Construct_UClass_UMovieSceneTakeTrack_Statics;
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTakeTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTakeTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKEMOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTakeTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeMovieScene"), Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTakeTrack)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTakeTrack(UMovieSceneTakeTrack&&) = delete; \
	UMovieSceneTakeTrack(const UMovieSceneTakeTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKEMOVIESCENE_API, UMovieSceneTakeTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTakeTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTakeTrack) \
	TAKEMOVIESCENE_API virtual ~UMovieSceneTakeTrack();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTakeTrack;

// ********** End Class UMovieSceneTakeTrack *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
