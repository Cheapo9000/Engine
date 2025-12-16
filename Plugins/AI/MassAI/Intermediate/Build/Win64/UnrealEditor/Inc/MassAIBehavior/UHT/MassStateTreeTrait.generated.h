// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassStateTreeTrait.h"

#ifdef MASSAIBEHAVIOR_MassStateTreeTrait_generated_h
#error "MassStateTreeTrait.generated.h already included, missing '#pragma once' in MassStateTreeTrait.h"
#endif
#define MASSAIBEHAVIOR_MassStateTreeTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassStateTreeTrait ******************************************************
struct Z_Construct_UClass_UMassStateTreeTrait_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassStateTreeTrait(); \
	friend struct ::Z_Construct_UClass_UMassStateTreeTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassStateTreeTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassStateTreeTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassStateTreeTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassStateTreeTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSAIBEHAVIOR_API UMassStateTreeTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassStateTreeTrait(UMassStateTreeTrait&&) = delete; \
	UMassStateTreeTrait(const UMassStateTreeTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassStateTreeTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassStateTreeTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassStateTreeTrait) \
	MASSAIBEHAVIOR_API virtual ~UMassStateTreeTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_15_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassStateTreeTrait;

// ********** End Class UMassStateTreeTrait ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
