// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CameraAnimationSequenceFactoryNew.h"

#ifdef TEMPLATESEQUENCEEDITOR_CameraAnimationSequenceFactoryNew_generated_h
#error "CameraAnimationSequenceFactoryNew.generated.h already included, missing '#pragma once' in CameraAnimationSequenceFactoryNew.h"
#endif
#define TEMPLATESEQUENCEEDITOR_CameraAnimationSequenceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraAnimationSequenceFactoryNew ***************************************
struct Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics;
TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAnimationSequenceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraAnimationSequenceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequenceEditor"), Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UCameraAnimationSequenceFactoryNew)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimationSequenceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimationSequenceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimationSequenceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimationSequenceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraAnimationSequenceFactoryNew(UCameraAnimationSequenceFactoryNew&&) = delete; \
	UCameraAnimationSequenceFactoryNew(const UCameraAnimationSequenceFactoryNew&) = delete; \
	NO_API virtual ~UCameraAnimationSequenceFactoryNew();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_11_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_14_INCLASS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraAnimationSequenceFactoryNew;

// ********** End Class UCameraAnimationSequenceFactoryNew *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
