// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassStateTreeSubsystem.h"

#ifdef MASSAIBEHAVIOR_MassStateTreeSubsystem_generated_h
#error "MassStateTreeSubsystem.generated.h already included, missing '#pragma once' in MassStateTreeSubsystem.h"
#endif
#define MASSAIBEHAVIOR_MassStateTreeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassStateTreeInstanceDataItem ************************************
struct Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct();


struct FMassStateTreeInstanceDataItem;
// ********** End ScriptStruct FMassStateTreeInstanceDataItem **************************************

// ********** Begin Class UMassStateTreeSubsystem **************************************************
struct Z_Construct_UClass_UMassStateTreeSubsystem_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassStateTreeSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassStateTreeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassStateTreeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassStateTreeSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassStateTreeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassStateTreeSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSAIBEHAVIOR_API UMassStateTreeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassStateTreeSubsystem(UMassStateTreeSubsystem&&) = delete; \
	UMassStateTreeSubsystem(const UMassStateTreeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassStateTreeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassStateTreeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassStateTreeSubsystem) \
	MASSAIBEHAVIOR_API virtual ~UMassStateTreeSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_42_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassStateTreeSubsystem;

// ********** End Class UMassStateTreeSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
