// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassStateTreeTrait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSAIBEHAVIOR_MassStateTreeTrait_generated_h
#error "MassStateTreeTrait.generated.h already included, missing '#pragma once' in MassStateTreeTrait.h"
#endif
#define MASSAIBEHAVIOR_MassStateTreeTrait_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassStateTreeTrait(); \
	friend struct Z_Construct_UClass_UMassStateTreeTrait_Statics; \
public: \
	DECLARE_CLASS(UMassStateTreeTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), NO_API) \
	DECLARE_SERIALIZER(UMassStateTreeTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassStateTreeTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassStateTreeTrait(UMassStateTreeTrait&&); \
	UMassStateTreeTrait(const UMassStateTreeTrait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassStateTreeTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassStateTreeTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassStateTreeTrait) \
	NO_API virtual ~UMassStateTreeTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_13_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSAIBEHAVIOR_API UClass* StaticClass<class UMassStateTreeTrait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
