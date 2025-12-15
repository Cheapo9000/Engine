// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneReplaceableBinding.h"

#ifdef MOVIESCENE_MovieSceneReplaceableBinding_generated_h
#error "MovieSceneReplaceableBinding.generated.h already included, missing '#pragma once' in MovieSceneReplaceableBinding.h"
#endif
#define MOVIESCENE_MovieSceneReplaceableBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneReplaceableBindingBase ****************************************
struct Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplaceableBindingBase(); \
	friend struct ::Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneReplaceableBindingBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneReplaceableBindingBase, UMovieSceneCustomBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneReplaceableBindingBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneReplaceableBindingBase)


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneReplaceableBindingBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneReplaceableBindingBase(UMovieSceneReplaceableBindingBase&&) = delete; \
	UMovieSceneReplaceableBindingBase(const UMovieSceneReplaceableBindingBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneReplaceableBindingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplaceableBindingBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplaceableBindingBase) \
	MOVIESCENE_API virtual ~UMovieSceneReplaceableBindingBase();


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_32_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_38_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneReplaceableBindingBase;

// ********** End Class UMovieSceneReplaceableBindingBase ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
