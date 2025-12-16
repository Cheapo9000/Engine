// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h"

#ifdef NIAGARASIMCACHING_MovieSceneNiagaraCacheSection_generated_h
#error "MovieSceneNiagaraCacheSection.generated.h already included, missing '#pragma once' in MovieSceneNiagaraCacheSection.h"
#endif
#define NIAGARASIMCACHING_MovieSceneNiagaraCacheSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneNiagaraCacheParams *************************************
struct Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics;
#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics; \
	NIAGARASIMCACHING_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneBaseCacheParams Super;


struct FMovieSceneNiagaraCacheParams;
// ********** End ScriptStruct FMovieSceneNiagaraCacheParams ***************************************

// ********** Begin Class UMovieSceneNiagaraCacheSection *******************************************
struct Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics;
NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister();

#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraCacheSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARASIMCACHING_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraCacheSection, UMovieSceneBaseCacheSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSimCaching"), Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraCacheSection)


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARASIMCACHING_API UMovieSceneNiagaraCacheSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARASIMCACHING_API, UMovieSceneNiagaraCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraCacheSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraCacheSection(UMovieSceneNiagaraCacheSection&&) = delete; \
	UMovieSceneNiagaraCacheSection(const UMovieSceneNiagaraCacheSection&) = delete; \
	NIAGARASIMCACHING_API virtual ~UMovieSceneNiagaraCacheSection();


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_94_PROLOG
#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_97_INCLASS \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraCacheSection;

// ********** End Class UMovieSceneNiagaraCacheSection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h

// ********** Begin Enum ENiagaraSimCacheSectionPlayMode *******************************************
#define FOREACH_ENUM_ENIAGARASIMCACHESECTIONPLAYMODE(op) \
	op(ENiagaraSimCacheSectionPlayMode::SimWithoutCache) \
	op(ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly) 

enum class ENiagaraSimCacheSectionPlayMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheSectionPlayMode> { enum { Value = true }; };
template<> NIAGARASIMCACHING_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSimCacheSectionPlayMode>();
// ********** End Enum ENiagaraSimCacheSectionPlayMode *********************************************

// ********** Begin Enum ENiagaraSimCacheSectionStretchMode ****************************************
#define FOREACH_ENUM_ENIAGARASIMCACHESECTIONSTRETCHMODE(op) \
	op(ENiagaraSimCacheSectionStretchMode::Repeat) \
	op(ENiagaraSimCacheSectionStretchMode::TimeDilate) 

enum class ENiagaraSimCacheSectionStretchMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheSectionStretchMode> { enum { Value = true }; };
template<> NIAGARASIMCACHING_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSimCacheSectionStretchMode>();
// ********** End Enum ENiagaraSimCacheSectionStretchMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
