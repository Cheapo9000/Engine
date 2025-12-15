// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationEditorPreviewActor.h"

#ifdef PERSONA_AnimationEditorPreviewActor_generated_h
#error "AnimationEditorPreviewActor.generated.h already included, missing '#pragma once' in AnimationEditorPreviewActor.h"
#endif
#define PERSONA_AnimationEditorPreviewActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAnimationEditorPreviewActor *********************************************
struct Z_Construct_UClass_AAnimationEditorPreviewActor_Statics;
PERSONA_API UClass* Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationEditorPreviewActor(); \
	friend struct ::Z_Construct_UClass_AAnimationEditorPreviewActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAnimationEditorPreviewActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister) \
	DECLARE_SERIALIZER(AAnimationEditorPreviewActor)


#define FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API AAnimationEditorPreviewActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAnimationEditorPreviewActor(AAnimationEditorPreviewActor&&) = delete; \
	AAnimationEditorPreviewActor(const AAnimationEditorPreviewActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, AAnimationEditorPreviewActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationEditorPreviewActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimationEditorPreviewActor) \
	PERSONA_API virtual ~AAnimationEditorPreviewActor();


#define FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_10_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAnimationEditorPreviewActor;

// ********** End Class AAnimationEditorPreviewActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
