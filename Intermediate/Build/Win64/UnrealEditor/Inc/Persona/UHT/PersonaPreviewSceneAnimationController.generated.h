// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaPreviewSceneAnimationController.h"

#ifdef PERSONA_PersonaPreviewSceneAnimationController_generated_h
#error "PersonaPreviewSceneAnimationController.generated.h already included, missing '#pragma once' in PersonaPreviewSceneAnimationController.h"
#endif
#define PERSONA_PersonaPreviewSceneAnimationController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPersonaPreviewSceneAnimationController **********************************
struct Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister();

#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaPreviewSceneAnimationController(); \
	friend struct ::Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaPreviewSceneAnimationController, UPersonaPreviewSceneController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister) \
	DECLARE_SERIALIZER(UPersonaPreviewSceneAnimationController)


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaPreviewSceneAnimationController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaPreviewSceneAnimationController(UPersonaPreviewSceneAnimationController&&) = delete; \
	UPersonaPreviewSceneAnimationController(const UPersonaPreviewSceneAnimationController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaPreviewSceneAnimationController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaPreviewSceneAnimationController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaPreviewSceneAnimationController) \
	NO_API virtual ~UPersonaPreviewSceneAnimationController();


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_12_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaPreviewSceneAnimationController;

// ********** End Class UPersonaPreviewSceneAnimationController ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
