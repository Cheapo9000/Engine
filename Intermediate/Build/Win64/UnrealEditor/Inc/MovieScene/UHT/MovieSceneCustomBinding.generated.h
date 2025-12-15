// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneCustomBinding.h"

#ifdef MOVIESCENE_MovieSceneCustomBinding_generated_h
#error "MovieSceneCustomBinding.generated.h already included, missing '#pragma once' in MovieSceneCustomBinding.h"
#endif
#define MOVIESCENE_MovieSceneCustomBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneBindingResolveResult ***********************************
struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneBindingResolveResult;
// ********** End ScriptStruct FMovieSceneBindingResolveResult *************************************

// ********** Begin ScriptStruct FMovieSceneBindingResolveContext **********************************
struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneBindingResolveContext;
// ********** End ScriptStruct FMovieSceneBindingResolveContext ************************************

// ********** Begin Class UMovieSceneCustomBinding *************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBaseCustomPriority); \
	DECLARE_FUNCTION(execGetBaseEnginePriority);


struct Z_Construct_UClass_UMovieSceneCustomBinding_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCustomBinding(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCustomBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCustomBinding, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCustomBinding)


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneCustomBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCustomBinding(UMovieSceneCustomBinding&&) = delete; \
	UMovieSceneCustomBinding(const UMovieSceneCustomBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCustomBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomBinding); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomBinding) \
	MOVIESCENE_API virtual ~UMovieSceneCustomBinding();


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_59_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_65_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCustomBinding;

// ********** End Class UMovieSceneCustomBinding ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
