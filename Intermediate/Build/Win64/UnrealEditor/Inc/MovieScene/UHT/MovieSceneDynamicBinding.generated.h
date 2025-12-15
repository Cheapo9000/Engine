// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneDynamicBinding.h"

#ifdef MOVIESCENE_MovieSceneDynamicBinding_generated_h
#error "MovieSceneDynamicBinding.generated.h already included, missing '#pragma once' in MovieSceneDynamicBinding.h"
#endif
#define MOVIESCENE_MovieSceneDynamicBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMovieSceneDynamicBindingResolveResult;

// ********** Begin ScriptStruct FMovieSceneDynamicBindingPayloadVariable **************************
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDynamicBindingPayloadVariable;
// ********** End ScriptStruct FMovieSceneDynamicBindingPayloadVariable ****************************

// ********** Begin ScriptStruct FMovieSceneDynamicBinding *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDynamicBinding;
// ********** End ScriptStruct FMovieSceneDynamicBinding *******************************************

// ********** Begin ScriptStruct FMovieSceneDynamicBindingResolveParams ****************************
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDynamicBindingResolveParams;
// ********** End ScriptStruct FMovieSceneDynamicBindingResolveParams ******************************

// ********** Begin ScriptStruct FMovieSceneDynamicBindingResolveResult ****************************
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDynamicBindingResolveResult;
// ********** End ScriptStruct FMovieSceneDynamicBindingResolveResult ******************************

// ********** Begin ScriptStruct FMovieSceneDynamicBindingContainer ********************************
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneDynamicBindingContainer;
// ********** End ScriptStruct FMovieSceneDynamicBindingContainer **********************************

// ********** Begin Class UBuiltInDynamicBindingResolverLibrary ************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveToPlayerPawn);


struct Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary(); \
	friend struct ::Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuiltInDynamicBindingResolverLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBuiltInDynamicBindingResolverLibrary)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UBuiltInDynamicBindingResolverLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuiltInDynamicBindingResolverLibrary(UBuiltInDynamicBindingResolverLibrary&&) = delete; \
	UBuiltInDynamicBindingResolverLibrary(const UBuiltInDynamicBindingResolverLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UBuiltInDynamicBindingResolverLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuiltInDynamicBindingResolverLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuiltInDynamicBindingResolverLibrary) \
	MOVIESCENE_API virtual ~UBuiltInDynamicBindingResolverLibrary();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuiltInDynamicBindingResolverLibrary;

// ********** End Class UBuiltInDynamicBindingResolverLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
