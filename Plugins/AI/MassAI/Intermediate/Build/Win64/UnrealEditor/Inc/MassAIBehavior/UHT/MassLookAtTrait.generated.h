// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtTrait.h"

#ifdef MASSAIBEHAVIOR_MassLookAtTrait_generated_h
#error "MassLookAtTrait.generated.h already included, missing '#pragma once' in MassLookAtTrait.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassLookAtTrait *********************************************************
struct Z_Construct_UClass_UMassLookAtTrait_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLookAtTrait(); \
	friend struct ::Z_Construct_UClass_UMassLookAtTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassLookAtTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLookAtTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassLookAtTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassLookAtTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassLookAtTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLookAtTrait(UMassLookAtTrait&&) = delete; \
	UMassLookAtTrait(const UMassLookAtTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassLookAtTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLookAtTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassLookAtTrait) \
	NO_API virtual ~UMassLookAtTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_11_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLookAtTrait;

// ********** End Class UMassLookAtTrait ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
