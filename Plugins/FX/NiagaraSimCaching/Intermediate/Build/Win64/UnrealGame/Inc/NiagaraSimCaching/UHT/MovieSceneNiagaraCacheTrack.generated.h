// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h"

#ifdef NIAGARASIMCACHING_MovieSceneNiagaraCacheTrack_generated_h
#error "MovieSceneNiagaraCacheTrack.generated.h already included, missing '#pragma once' in MovieSceneNiagaraCacheTrack.h"
#endif
#define NIAGARASIMCACHING_MovieSceneNiagaraCacheTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNiagaraCacheTrack *********************************************
struct Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics;
NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister();

#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraCacheTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARASIMCACHING_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraCacheTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSimCaching"), Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraCacheTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneNiagaraCacheTrack*>(this); }


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARASIMCACHING_API UMovieSceneNiagaraCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARASIMCACHING_API, UMovieSceneNiagaraCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraCacheTrack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraCacheTrack(UMovieSceneNiagaraCacheTrack&&) = delete; \
	UMovieSceneNiagaraCacheTrack(const UMovieSceneNiagaraCacheTrack&) = delete; \
	NIAGARASIMCACHING_API virtual ~UMovieSceneNiagaraCacheTrack();


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_13_PROLOG
#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_19_INCLASS \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraCacheTrack;

// ********** End Class UMovieSceneNiagaraCacheTrack ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
