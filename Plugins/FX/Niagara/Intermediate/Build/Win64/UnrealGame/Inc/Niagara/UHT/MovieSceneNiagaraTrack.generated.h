// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneNiagaraTrack.h"

#ifdef NIAGARA_MovieSceneNiagaraTrack_generated_h
#error "MovieSceneNiagaraTrack.generated.h already included, missing '#pragma once' in MovieSceneNiagaraTrack.h"
#endif
#define NIAGARA_MovieSceneNiagaraTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneNiagaraTrack **************************************************
struct Z_Construct_UClass_UMovieSceneNiagaraTrack_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrack_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UMovieSceneNiagaraTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraTrack)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UMovieSceneNiagaraTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraTrack(UMovieSceneNiagaraTrack&&) = delete; \
	UMovieSceneNiagaraTrack(const UMovieSceneNiagaraTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UMovieSceneNiagaraTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraTrack) \
	NIAGARA_API virtual ~UMovieSceneNiagaraTrack();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraTrack;

// ********** End Class UMovieSceneNiagaraTrack ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
