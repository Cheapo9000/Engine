// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneEventBlueprintExtension.h"

#ifdef MOVIESCENETOOLS_MovieSceneEventBlueprintExtension_generated_h
#error "MovieSceneEventBlueprintExtension.generated.h already included, missing '#pragma once' in MovieSceneEventBlueprintExtension.h"
#endif
#define MOVIESCENETOOLS_MovieSceneEventBlueprintExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEventBlueprintExtension ***************************************
struct Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneEventBlueprintExtension_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventBlueprintExtension(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UMovieSceneEventBlueprintExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventBlueprintExtension, UBlueprintExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UMovieSceneEventBlueprintExtension_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventBlueprintExtension)


#define FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEventBlueprintExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventBlueprintExtension(UMovieSceneEventBlueprintExtension&&) = delete; \
	UMovieSceneEventBlueprintExtension(const UMovieSceneEventBlueprintExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEventBlueprintExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventBlueprintExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventBlueprintExtension) \
	NO_API virtual ~UMovieSceneEventBlueprintExtension();


#define FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_18_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventBlueprintExtension;

// ********** End Class UMovieSceneEventBlueprintExtension *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
