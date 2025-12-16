// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TemplateSequenceFactoryNew.h"

#ifdef TEMPLATESEQUENCEEDITOR_TemplateSequenceFactoryNew_generated_h
#error "TemplateSequenceFactoryNew.generated.h already included, missing '#pragma once' in TemplateSequenceFactoryNew.h"
#endif
#define TEMPLATESEQUENCEEDITOR_TemplateSequenceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTemplateSequenceFactoryNew **********************************************
struct Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics;
TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceFactoryNew_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTemplateSequenceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UTemplateSequenceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSequenceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequenceEditor"), Z_Construct_UClass_UTemplateSequenceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSequenceFactoryNew)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateSequenceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequenceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateSequenceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequenceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSequenceFactoryNew(UTemplateSequenceFactoryNew&&) = delete; \
	UTemplateSequenceFactoryNew(const UTemplateSequenceFactoryNew&) = delete; \
	NO_API virtual ~UTemplateSequenceFactoryNew();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_16_INCLASS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSequenceFactoryNew;

// ********** End Class UTemplateSequenceFactoryNew ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
