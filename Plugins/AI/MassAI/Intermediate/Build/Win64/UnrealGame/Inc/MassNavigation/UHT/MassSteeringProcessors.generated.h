// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Steering/MassSteeringProcessors.h"

#ifdef MASSNAVIGATION_MassSteeringProcessors_generated_h
#error "MassSteeringProcessors.generated.h already included, missing '#pragma once' in MassSteeringProcessors.h"
#endif
#define MASSNAVIGATION_MassSteeringProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSteerToMoveTargetProcessor ******************************************
struct Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics;
MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteerToMoveTargetProcessor_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSteerToMoveTargetProcessor(); \
	friend struct ::Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATION_API UClass* ::Z_Construct_UClass_UMassSteerToMoveTargetProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSteerToMoveTargetProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavigation"), Z_Construct_UClass_UMassSteerToMoveTargetProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassSteerToMoveTargetProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSteerToMoveTargetProcessor(UMassSteerToMoveTargetProcessor&&) = delete; \
	UMassSteerToMoveTargetProcessor(const UMassSteerToMoveTargetProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATION_API, UMassSteerToMoveTargetProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSteerToMoveTargetProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSteerToMoveTargetProcessor) \
	MASSNAVIGATION_API virtual ~UMassSteerToMoveTargetProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSteerToMoveTargetProcessor;

// ********** End Class UMassSteerToMoveTargetProcessor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
