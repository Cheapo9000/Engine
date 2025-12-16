// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassComponentHitSubsystem.h"

#ifdef MASSAIBEHAVIOR_MassComponentHitSubsystem_generated_h
#error "MassComponentHitSubsystem.generated.h already included, missing '#pragma once' in MassComponentHitSubsystem.h"
#endif
#define MASSAIBEHAVIOR_MassComponentHitSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UMassComponentHitSubsystem ***********************************************
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHitCallback);


struct Z_Construct_UClass_UMassComponentHitSubsystem_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassComponentHitSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassComponentHitSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassComponentHitSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassComponentHitSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassComponentHitSubsystem, UMassTickableSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassComponentHitSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassComponentHitSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSAIBEHAVIOR_API UMassComponentHitSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassComponentHitSubsystem(UMassComponentHitSubsystem&&) = delete; \
	UMassComponentHitSubsystem(const UMassComponentHitSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassComponentHitSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassComponentHitSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassComponentHitSubsystem) \
	MASSAIBEHAVIOR_API virtual ~UMassComponentHitSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassComponentHitSubsystem;

// ********** End Class UMassComponentHitSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
