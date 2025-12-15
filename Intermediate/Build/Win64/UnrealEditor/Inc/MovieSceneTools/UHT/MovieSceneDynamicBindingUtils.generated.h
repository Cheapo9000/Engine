// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneDynamicBindingUtils.h"

#ifdef MOVIESCENETOOLS_MovieSceneDynamicBindingUtils_generated_h
#error "MovieSceneDynamicBindingUtils.generated.h already included, missing '#pragma once' in MovieSceneDynamicBindingUtils.h"
#endif
#define MOVIESCENETOOLS_MovieSceneDynamicBindingUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneDynamicBindingResolveResult;

// ********** Begin Class UMovieSceneDynamicBindingEndpointUtil ************************************
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleResolveBinding);


struct Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDynamicBindingEndpointUtil(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDynamicBindingEndpointUtil, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDynamicBindingEndpointUtil)


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETOOLS_API UMovieSceneDynamicBindingEndpointUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDynamicBindingEndpointUtil(UMovieSceneDynamicBindingEndpointUtil&&) = delete; \
	UMovieSceneDynamicBindingEndpointUtil(const UMovieSceneDynamicBindingEndpointUtil&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETOOLS_API, UMovieSceneDynamicBindingEndpointUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDynamicBindingEndpointUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDynamicBindingEndpointUtil) \
	MOVIESCENETOOLS_API virtual ~UMovieSceneDynamicBindingEndpointUtil();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_63_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDynamicBindingEndpointUtil;

// ********** End Class UMovieSceneDynamicBindingEndpointUtil **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
