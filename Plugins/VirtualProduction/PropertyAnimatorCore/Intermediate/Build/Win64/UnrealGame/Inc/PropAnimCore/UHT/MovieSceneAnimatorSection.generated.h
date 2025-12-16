// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneAnimatorSection.h"

#ifdef PROPERTYANIMATORCORE_MovieSceneAnimatorSection_generated_h
#error "MovieSceneAnimatorSection.generated.h already included, missing '#pragma once' in MovieSceneAnimatorSection.h"
#endif
#define PROPERTYANIMATORCORE_MovieSceneAnimatorSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneAnimatorSection ***********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_ACCESSORS \
static void GetEvalTimeMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetEvalTimeMode_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomStartTime_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomStartTime_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomEndTime_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomEndTime_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMovieSceneAnimatorSection_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UMovieSceneAnimatorSection_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAnimatorSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneAnimatorSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UMovieSceneAnimatorSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneAnimatorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UMovieSceneAnimatorSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneAnimatorSection)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneAnimatorSection(UMovieSceneAnimatorSection&&) = delete; \
	UMovieSceneAnimatorSection(const UMovieSceneAnimatorSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UMovieSceneAnimatorSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAnimatorSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneAnimatorSection) \
	PROPERTYANIMATORCORE_API virtual ~UMovieSceneAnimatorSection();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneAnimatorSection;

// ********** End Class UMovieSceneAnimatorSection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Sequencer_MovieSceneAnimatorSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
