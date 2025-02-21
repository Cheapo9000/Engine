// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Steering/MassSteeringProcessors.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSNAVIGATION_MassSteeringProcessors_generated_h
#error "MassSteeringProcessors.generated.h already included, missing '#pragma once' in MassSteeringProcessors.h"
#endif
#define MASSNAVIGATION_MassSteeringProcessors_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSteerToMoveTargetProcessor(); \
	friend struct Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassSteerToMoveTargetProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavigation"), NO_API) \
	DECLARE_SERIALIZER(UMassSteerToMoveTargetProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassSteerToMoveTargetProcessor(UMassSteerToMoveTargetProcessor&&); \
	UMassSteerToMoveTargetProcessor(const UMassSteerToMoveTargetProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSteerToMoveTargetProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSteerToMoveTargetProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSteerToMoveTargetProcessor) \
	NO_API virtual ~UMassSteerToMoveTargetProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_12_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSNAVIGATION_API UClass* StaticClass<class UMassSteerToMoveTargetProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
