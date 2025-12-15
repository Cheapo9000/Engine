// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaToolMenuContext.h"

#ifdef PERSONA_PersonaToolMenuContext_generated_h
#error "PersonaToolMenuContext.generated.h already included, missing '#pragma once' in PersonaToolMenuContext.h"
#endif
#define PERSONA_PersonaToolMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimBlueprint;
class UDebugSkelMeshComponent;
class USkeletalMesh;
class USkeleton;

// ********** Begin Class UPersonaToolMenuContext **************************************************
#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execGetAnimBlueprint); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetPreviewMeshComponent); \
	DECLARE_FUNCTION(execGetSkeleton);


struct Z_Construct_UClass_UPersonaToolMenuContext_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaToolMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaToolMenuContext(); \
	friend struct ::Z_Construct_UClass_UPersonaToolMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaToolMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaToolMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UPersonaToolMenuContext)


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaToolMenuContext(UPersonaToolMenuContext&&) = delete; \
	UPersonaToolMenuContext(const UPersonaToolMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaToolMenuContext) \
	PERSONA_API virtual ~UPersonaToolMenuContext();


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_24_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaToolMenuContext;

// ********** End Class UPersonaToolMenuContext ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
