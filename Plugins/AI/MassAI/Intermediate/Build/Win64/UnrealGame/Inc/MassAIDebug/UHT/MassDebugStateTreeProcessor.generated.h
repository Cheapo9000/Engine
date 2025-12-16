// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebugStateTreeProcessor.h"

#ifdef MASSAIDEBUG_MassDebugStateTreeProcessor_generated_h
#error "MassDebugStateTreeProcessor.generated.h already included, missing '#pragma once' in MassDebugStateTreeProcessor.h"
#endif
#define MASSAIDEBUG_MassDebugStateTreeProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassDebugStateTreeProcessor *********************************************
struct Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics;
MASSAIDEBUG_API UClass* Z_Construct_UClass_UMassDebugStateTreeProcessor_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebugStateTreeProcessor(); \
	friend struct ::Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIDEBUG_API UClass* ::Z_Construct_UClass_UMassDebugStateTreeProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDebugStateTreeProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassAIDebug"), Z_Construct_UClass_UMassDebugStateTreeProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassDebugStateTreeProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDebugStateTreeProcessor(UMassDebugStateTreeProcessor&&) = delete; \
	UMassDebugStateTreeProcessor(const UMassDebugStateTreeProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIDEBUG_API, UMassDebugStateTreeProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebugStateTreeProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassDebugStateTreeProcessor) \
	MASSAIDEBUG_API virtual ~UMassDebugStateTreeProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_15_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDebugStateTreeProcessor;

// ********** End Class UMassDebugStateTreeProcessor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
