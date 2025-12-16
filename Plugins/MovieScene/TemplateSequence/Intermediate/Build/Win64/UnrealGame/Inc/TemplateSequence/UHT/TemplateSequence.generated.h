// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSequence.h"

#ifdef TEMPLATESEQUENCE_TemplateSequence_generated_h
#error "TemplateSequence.generated.h already included, missing '#pragma once' in TemplateSequence.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTemplateSequence ********************************************************
struct Z_Construct_UClass_UTemplateSequence_Statics;
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSequence(); \
	friend struct ::Z_Construct_UClass_UTemplateSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCE_API UClass* ::Z_Construct_UClass_UTemplateSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), Z_Construct_UClass_UTemplateSequence_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSequence)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSequence(UTemplateSequence&&) = delete; \
	UTemplateSequence(const UTemplateSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLATESEQUENCE_API, UTemplateSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequence) \
	TEMPLATESEQUENCE_API virtual ~UTemplateSequence();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSequence;

// ********** End Class UTemplateSequence **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
