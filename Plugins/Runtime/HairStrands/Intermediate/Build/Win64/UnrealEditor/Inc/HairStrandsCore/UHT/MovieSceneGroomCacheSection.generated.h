// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGroomCacheSection.h"

#ifdef HAIRSTRANDSCORE_MovieSceneGroomCacheSection_generated_h
#error "MovieSceneGroomCacheSection.generated.h already included, missing '#pragma once' in MovieSceneGroomCacheSection.h"
#endif
#define HAIRSTRANDSCORE_MovieSceneGroomCacheSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneGroomCacheParams ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneGroomCacheParams;
// ********** End ScriptStruct FMovieSceneGroomCacheParams *****************************************

// ********** Begin Class UMovieSceneGroomCacheSection *********************************************
struct Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGroomCacheSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneGroomCacheSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneGroomCacheSection)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UMovieSceneGroomCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGroomCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UMovieSceneGroomCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGroomCacheSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneGroomCacheSection(UMovieSceneGroomCacheSection&&) = delete; \
	UMovieSceneGroomCacheSection(const UMovieSceneGroomCacheSection&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UMovieSceneGroomCacheSection();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_51_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneGroomCacheSection;

// ********** End Class UMovieSceneGroomCacheSection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
