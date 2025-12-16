// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtSubsystem.h"

#ifdef MASSAIBEHAVIOR_MassLookAtSubsystem_generated_h
#error "MassLookAtSubsystem.generated.h already included, missing '#pragma once' in MassLookAtSubsystem.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EMassLookAtInterpolationSpeed : uint8;
struct FMassLookAtPriority;
struct FMassLookAtRequestHandle;

// ********** Begin ScriptStruct FMassLookAtRequestHandle ******************************************
struct Z_Construct_UScriptStruct_FMassLookAtRequestHandle_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtRequestHandle_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct();


struct FMassLookAtRequestHandle;
// ********** End ScriptStruct FMassLookAtRequestHandle ********************************************

// ********** Begin Class UMassLookAtSubsystem *****************************************************
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteRequest); \
	DECLARE_FUNCTION(execCreateLookAtActorRequest); \
	DECLARE_FUNCTION(execCreateLookAtPositionRequest);


struct Z_Construct_UClass_UMassLookAtSubsystem_Statics;
MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLookAtSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassLookAtSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSAIBEHAVIOR_API UClass* ::Z_Construct_UClass_UMassLookAtSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLookAtSubsystem, UMassTickableSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), Z_Construct_UClass_UMassLookAtSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassLookAtSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSAIBEHAVIOR_API UMassLookAtSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLookAtSubsystem(UMassLookAtSubsystem&&) = delete; \
	UMassLookAtSubsystem(const UMassLookAtSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSAIBEHAVIOR_API, UMassLookAtSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLookAtSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLookAtSubsystem) \
	MASSAIBEHAVIOR_API virtual ~UMassLookAtSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_41_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLookAtSubsystem;

// ********** End Class UMassLookAtSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
