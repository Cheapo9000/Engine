// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtProcessors.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSAIBEHAVIOR_MassLookAtProcessors_generated_h
#error "MassLookAtProcessors.generated.h already included, missing '#pragma once' in MassLookAtProcessors.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtProcessors_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLookAtProcessor(); \
	friend struct Z_Construct_UClass_UMassLookAtProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassLookAtProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), NO_API) \
	DECLARE_SERIALIZER(UMassLookAtProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassLookAtProcessor(UMassLookAtProcessor&&); \
	UMassLookAtProcessor(const UMassLookAtProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassLookAtProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLookAtProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLookAtProcessor) \
	NO_API virtual ~UMassLookAtProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_21_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSAIBEHAVIOR_API UClass* StaticClass<class UMassLookAtProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
