// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneAnimatorTrack.h"

#ifdef PROPERTYANIMATORCORE_MovieSceneAnimatorTrack_generated_h
#error "MovieSceneAnimatorTrack.generated.h already included, missing '#pragma once' in MovieSceneAnimatorTrack.h"
#endif
#define PROPERTYANIMATORCORE_MovieSceneAnimatorTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAnimatorTrack *************************************************
struct Z_Construct_UClass_UMovieSceneAnimatorTrack_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UMovieSceneAnimatorTrack_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimatorTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimatorTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UMovieSceneAnimatorTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimatorTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UMovieSceneAnimatorTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimatorTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAnimatorTrack*>(this); }


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimatorTrack(UMovieSceneAnimatorTrack&&) = delete; \
	UMovieSceneAnimatorTrack(const UMovieSceneAnimatorTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UMovieSceneAnimatorTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimatorTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneAnimatorTrack) \
	PROPERTYANIMATORCORE_API virtual ~UMovieSceneAnimatorTrack();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimatorTrack;

// ********** End Class UMovieSceneAnimatorTrack ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
