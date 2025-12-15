// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSequenceBrowserMenuContexts.h"

#ifdef PERSONA_AnimationSequenceBrowserMenuContexts_generated_h
#error "AnimationSequenceBrowserMenuContexts.generated.h already included, missing '#pragma once' in AnimationSequenceBrowserMenuContexts.h"
#endif
#define PERSONA_AnimationSequenceBrowserMenuContexts_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UAnimationSequenceBrowserContextMenuContext ******************************
#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedObjects);


struct Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics;
PERSONA_API UClass* Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSequenceBrowserContextMenuContext(); \
	friend struct ::Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSequenceBrowserContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSequenceBrowserContextMenuContext)


#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UAnimationSequenceBrowserContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSequenceBrowserContextMenuContext(UAnimationSequenceBrowserContextMenuContext&&) = delete; \
	UAnimationSequenceBrowserContextMenuContext(const UAnimationSequenceBrowserContextMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UAnimationSequenceBrowserContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSequenceBrowserContextMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSequenceBrowserContextMenuContext) \
	PERSONA_API virtual ~UAnimationSequenceBrowserContextMenuContext();


#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_13_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSequenceBrowserContextMenuContext;

// ********** End Class UAnimationSequenceBrowserContextMenuContext ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
