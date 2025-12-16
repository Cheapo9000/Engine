// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimMovieSceneSection.h"

#ifdef CONTEXTUALANIMATIONEDITOR_ContextualAnimMovieSceneSection_generated_h
#error "ContextualAnimMovieSceneSection.generated.h already included, missing '#pragma once' in ContextualAnimMovieSceneSection.h"
#endif
#define CONTEXTUALANIMATIONEDITOR_ContextualAnimMovieSceneSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContextualAnimMovieSceneSection *****************************************
struct Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics;
CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneSection_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimMovieSceneSection(); \
	friend struct ::Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATIONEDITOR_API UClass* ::Z_Construct_UClass_UContextualAnimMovieSceneSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimationEditor"), Z_Construct_UClass_UContextualAnimMovieSceneSection_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimMovieSceneSection)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimMovieSceneSection(UContextualAnimMovieSceneSection&&) = delete; \
	UContextualAnimMovieSceneSection(const UContextualAnimMovieSceneSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimMovieSceneSection) \
	NO_API virtual ~UContextualAnimMovieSceneSection();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimMovieSceneSection;

// ********** End Class UContextualAnimMovieSceneSection *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
