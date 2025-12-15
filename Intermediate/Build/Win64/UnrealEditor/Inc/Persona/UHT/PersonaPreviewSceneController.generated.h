// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaPreviewSceneController.h"

#ifdef PERSONA_PersonaPreviewSceneController_generated_h
#error "PersonaPreviewSceneController.generated.h already included, missing '#pragma once' in PersonaPreviewSceneController.h"
#endif
#define PERSONA_PersonaPreviewSceneController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPersonaPreviewSceneController *******************************************
struct Z_Construct_UClass_UPersonaPreviewSceneController_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaPreviewSceneController(); \
	friend struct ::Z_Construct_UClass_UPersonaPreviewSceneController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaPreviewSceneController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister) \
	DECLARE_SERIALIZER(UPersonaPreviewSceneController)


#define FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaPreviewSceneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaPreviewSceneController(UPersonaPreviewSceneController&&) = delete; \
	UPersonaPreviewSceneController(const UPersonaPreviewSceneController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaPreviewSceneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaPreviewSceneController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaPreviewSceneController) \
	PERSONA_API virtual ~UPersonaPreviewSceneController();


#define FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_18_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaPreviewSceneController;

// ********** End Class UPersonaPreviewSceneController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
