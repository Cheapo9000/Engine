// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportToolbar/AnimViewportContext.h"

#ifdef PERSONA_AnimViewportContext_generated_h
#error "AnimViewportContext.generated.h already included, missing '#pragma once' in AnimViewportContext.h"
#endif
#define PERSONA_AnimViewportContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimViewportContext *****************************************************
struct Z_Construct_UClass_UAnimViewportContext_Statics;
PERSONA_API UClass* Z_Construct_UClass_UAnimViewportContext_NoRegister();

#define FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimViewportContext(); \
	friend struct ::Z_Construct_UClass_UAnimViewportContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UAnimViewportContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimViewportContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UAnimViewportContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimViewportContext)


#define FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimViewportContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimViewportContext(UAnimViewportContext&&) = delete; \
	UAnimViewportContext(const UAnimViewportContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimViewportContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimViewportContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimViewportContext) \
	NO_API virtual ~UAnimViewportContext();


#define FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_8_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimViewportContext;

// ********** End Class UAnimViewportContext *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_ViewportToolbar_AnimViewportContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
