// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtTargetTrait.h"

#ifdef MASSAIBEHAVIOR_MassLookAtTargetTrait_generated_h
#error "MassLookAtTargetTrait.generated.h already included, missing '#pragma once' in MassLookAtTargetTrait.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtTargetTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassLookAtTargetTrait ***************************************************
struct Z_Construct_UClass_UMassLookAtTargetTrait_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTargetTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLookAtTargetTrait(); \
	friend struct ::Z_Construct_UClass_UMassLookAtTargetTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassLookAtTargetTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLookAtTargetTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassLookAtTargetTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassLookAtTargetTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassLookAtTargetTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLookAtTargetTrait(UMassLookAtTargetTrait&&) = delete; \
	UMassLookAtTargetTrait(const UMassLookAtTargetTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassLookAtTargetTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLookAtTargetTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassLookAtTargetTrait) \
	NO_API virtual ~UMassLookAtTargetTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_12_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLookAtTargetTrait;

// ********** End Class UMassLookAtTargetTrait *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
