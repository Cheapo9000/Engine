// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/ConstructionPlaneMechanic.h"

#ifdef MODELINGCOMPONENTS_ConstructionPlaneMechanic_generated_h
#error "ConstructionPlaneMechanic.generated.h already included, missing '#pragma once' in ConstructionPlaneMechanic.h"
#endif
#define MODELINGCOMPONENTS_ConstructionPlaneMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConstructionPlaneMechanic ***********************************************
struct Z_Construct_UClass_UConstructionPlaneMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstructionPlaneMechanic(); \
	friend struct ::Z_Construct_UClass_UConstructionPlaneMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstructionPlaneMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister) \
	DECLARE_SERIALIZER(UConstructionPlaneMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UConstructionPlaneMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstructionPlaneMechanic(UConstructionPlaneMechanic&&) = delete; \
	UConstructionPlaneMechanic(const UConstructionPlaneMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UConstructionPlaneMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructionPlaneMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstructionPlaneMechanic) \
	MODELINGCOMPONENTS_API virtual ~UConstructionPlaneMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstructionPlaneMechanic;

// ********** End Class UConstructionPlaneMechanic *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
