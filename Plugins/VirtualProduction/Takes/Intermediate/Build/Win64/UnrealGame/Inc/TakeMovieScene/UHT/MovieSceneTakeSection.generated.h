// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTakeSection.h"

#ifdef TAKEMOVIESCENE_MovieSceneTakeSection_generated_h
#error "MovieSceneTakeSection.generated.h already included, missing '#pragma once' in MovieSceneTakeSection.h"
#endif
#define TAKEMOVIESCENE_MovieSceneTakeSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneTakeSection ***************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTakeSection, TAKEMOVIESCENE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UMovieSceneTakeSection_Statics;
TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTakeSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTakeSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKEMOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTakeSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTakeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeMovieScene"), Z_Construct_UClass_UMovieSceneTakeSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTakeSection) \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKEMOVIESCENE_API UMovieSceneTakeSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTakeSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKEMOVIESCENE_API, UMovieSceneTakeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTakeSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTakeSection(UMovieSceneTakeSection&&) = delete; \
	UMovieSceneTakeSection(const UMovieSceneTakeSection&) = delete; \
	TAKEMOVIESCENE_API virtual ~UMovieSceneTakeSection();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTakeSection;

// ********** End Class UMovieSceneTakeSection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
