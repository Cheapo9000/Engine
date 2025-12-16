// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Avoidance/MassAvoidanceTrait.h"

#ifdef MASSNAVIGATION_MassAvoidanceTrait_generated_h
#error "MassAvoidanceTrait.generated.h already included, missing '#pragma once' in MassAvoidanceTrait.h"
#endif
#define MASSNAVIGATION_MassAvoidanceTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassObstacleAvoidanceTrait **********************************************
struct Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics;
MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassObstacleAvoidanceTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassObstacleAvoidanceTrait(); \
	friend struct ::Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATION_API UClass* ::Z_Construct_UClass_UMassObstacleAvoidanceTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassObstacleAvoidanceTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassNavigation"), Z_Construct_UClass_UMassObstacleAvoidanceTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassObstacleAvoidanceTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSNAVIGATION_API UMassObstacleAvoidanceTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassObstacleAvoidanceTrait(UMassObstacleAvoidanceTrait&&) = delete; \
	UMassObstacleAvoidanceTrait(const UMassObstacleAvoidanceTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATION_API, UMassObstacleAvoidanceTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassObstacleAvoidanceTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassObstacleAvoidanceTrait) \
	MASSNAVIGATION_API virtual ~UMassObstacleAvoidanceTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_11_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassObstacleAvoidanceTrait;

// ********** End Class UMassObstacleAvoidanceTrait ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
