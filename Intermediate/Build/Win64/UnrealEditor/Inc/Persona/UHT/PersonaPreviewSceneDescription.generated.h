// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaPreviewSceneDescription.h"

#ifdef PERSONA_PersonaPreviewSceneDescription_generated_h
#error "PersonaPreviewSceneDescription.generated.h already included, missing '#pragma once' in PersonaPreviewSceneDescription.h"
#endif
#define PERSONA_PersonaPreviewSceneDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPersonaPreviewSceneDescription ******************************************
struct Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister();

#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaPreviewSceneDescription(); \
	friend struct ::Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaPreviewSceneDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister) \
	DECLARE_SERIALIZER(UPersonaPreviewSceneDescription)


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaPreviewSceneDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaPreviewSceneDescription(UPersonaPreviewSceneDescription&&) = delete; \
	UPersonaPreviewSceneDescription(const UPersonaPreviewSceneDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaPreviewSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaPreviewSceneDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaPreviewSceneDescription) \
	NO_API virtual ~UPersonaPreviewSceneDescription();


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_22_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaPreviewSceneDescription;

// ********** End Class UPersonaPreviewSceneDescription ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
