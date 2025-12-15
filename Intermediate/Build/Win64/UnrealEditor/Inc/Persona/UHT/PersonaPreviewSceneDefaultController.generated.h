// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaPreviewSceneDefaultController.h"

#ifdef PERSONA_PersonaPreviewSceneDefaultController_generated_h
#error "PersonaPreviewSceneDefaultController.generated.h already included, missing '#pragma once' in PersonaPreviewSceneDefaultController.h"
#endif
#define PERSONA_PersonaPreviewSceneDefaultController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPersonaPreviewSceneDefaultController ************************************
struct Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister();

#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaPreviewSceneDefaultController(); \
	friend struct ::Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaPreviewSceneDefaultController, UPersonaPreviewSceneController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister) \
	DECLARE_SERIALIZER(UPersonaPreviewSceneDefaultController)


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaPreviewSceneDefaultController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaPreviewSceneDefaultController(UPersonaPreviewSceneDefaultController&&) = delete; \
	UPersonaPreviewSceneDefaultController(const UPersonaPreviewSceneDefaultController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaPreviewSceneDefaultController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaPreviewSceneDefaultController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaPreviewSceneDefaultController) \
	NO_API virtual ~UPersonaPreviewSceneDefaultController();


#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_8_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaPreviewSceneDefaultController;

// ********** End Class UPersonaPreviewSceneDefaultController **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
