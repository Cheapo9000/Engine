// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassStateTreeSchema.h"

#ifdef MASSAIBEHAVIOR_MassStateTreeSchema_generated_h
#error "MassStateTreeSchema.generated.h already included, missing '#pragma once' in MassStateTreeSchema.h"
#endif
#define MASSAIBEHAVIOR_MassStateTreeSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassStateTreeSchema *****************************************************
struct Z_Construct_UClass_UMassStateTreeSchema_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSchema_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassStateTreeSchema(); \
	friend struct ::Z_Construct_UClass_UMassStateTreeSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassStateTreeSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassStateTreeSchema, UStateTreeSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassStateTreeSchema_NoRegister) \
	DECLARE_SERIALIZER(UMassStateTreeSchema)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSAIBEHAVIOR_API UMassStateTreeSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassStateTreeSchema(UMassStateTreeSchema&&) = delete; \
	UMassStateTreeSchema(const UMassStateTreeSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassStateTreeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassStateTreeSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassStateTreeSchema) \
	MASSAIBEHAVIOR_API virtual ~UMassStateTreeSchema();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_14_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassStateTreeSchema;

// ********** End Class UMassStateTreeSchema *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
