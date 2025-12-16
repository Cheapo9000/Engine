// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavMeshNavigationProcessors.h"

#ifdef MASSNAVMESHNAVIGATION_MassNavMeshNavigationProcessors_generated_h
#error "MassNavMeshNavigationProcessors.generated.h already included, missing '#pragma once' in MassNavMeshNavigationProcessors.h"
#endif
#define MASSNAVMESHNAVIGATION_MassNavMeshNavigationProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassNavMeshPathFollowProcessor ******************************************
struct Z_Construct_UClass_UMassNavMeshPathFollowProcessor_Statics;
MASSNAVMESHNAVIGATION_API UClass* Z_Construct_UClass_UMassNavMeshPathFollowProcessor_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavMeshPathFollowProcessor(); \
	friend struct ::Z_Construct_UClass_UMassNavMeshPathFollowProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVMESHNAVIGATION_API UClass* ::Z_Construct_UClass_UMassNavMeshPathFollowProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavMeshPathFollowProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavMeshNavigation"), Z_Construct_UClass_UMassNavMeshPathFollowProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassNavMeshPathFollowProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavMeshPathFollowProcessor(UMassNavMeshPathFollowProcessor&&) = delete; \
	UMassNavMeshPathFollowProcessor(const UMassNavMeshPathFollowProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVMESHNAVIGATION_API, UMassNavMeshPathFollowProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavMeshPathFollowProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassNavMeshPathFollowProcessor) \
	MASSNAVMESHNAVIGATION_API virtual ~UMassNavMeshPathFollowProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_14_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavMeshPathFollowProcessor;

// ********** End Class UMassNavMeshPathFollowProcessor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
