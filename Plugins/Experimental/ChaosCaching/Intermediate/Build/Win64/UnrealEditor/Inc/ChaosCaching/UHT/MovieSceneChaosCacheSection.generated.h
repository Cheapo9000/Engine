// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/Sequencer/MovieSceneChaosCacheSection.h"

#ifdef CHAOSCACHING_MovieSceneChaosCacheSection_generated_h
#error "MovieSceneChaosCacheSection.generated.h already included, missing '#pragma once' in MovieSceneChaosCacheSection.h"
#endif
#define CHAOSCACHING_MovieSceneChaosCacheSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneChaosCacheParams ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics;
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneBaseCacheParams Super;


struct FMovieSceneChaosCacheParams;
// ********** End ScriptStruct FMovieSceneChaosCacheParams *****************************************

// ********** Begin Class UMovieSceneChaosCacheSection *********************************************
struct Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics;
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheSection_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneChaosCacheSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHING_API UClass* ::Z_Construct_UClass_UMovieSceneChaosCacheSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneChaosCacheSection, UMovieSceneBaseCacheSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCaching"), Z_Construct_UClass_UMovieSceneChaosCacheSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneChaosCacheSection)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCACHING_API UMovieSceneChaosCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChaosCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, UMovieSceneChaosCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChaosCacheSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneChaosCacheSection(UMovieSceneChaosCacheSection&&) = delete; \
	UMovieSceneChaosCacheSection(const UMovieSceneChaosCacheSection&) = delete; \
	CHAOSCACHING_API virtual ~UMovieSceneChaosCacheSection();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneChaosCacheSection;

// ********** End Class UMovieSceneChaosCacheSection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
