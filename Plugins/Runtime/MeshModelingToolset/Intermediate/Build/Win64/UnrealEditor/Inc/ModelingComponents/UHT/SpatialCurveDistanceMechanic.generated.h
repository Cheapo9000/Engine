// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/SpatialCurveDistanceMechanic.h"

#ifdef MODELINGCOMPONENTS_SpatialCurveDistanceMechanic_generated_h
#error "SpatialCurveDistanceMechanic.generated.h already included, missing '#pragma once' in SpatialCurveDistanceMechanic.h"
#endif
#define MODELINGCOMPONENTS_SpatialCurveDistanceMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpatialCurveDistanceMechanic ********************************************
struct Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialCurveDistanceMechanic(); \
	friend struct ::Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialCurveDistanceMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister) \
	DECLARE_SERIALIZER(USpatialCurveDistanceMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API USpatialCurveDistanceMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialCurveDistanceMechanic(USpatialCurveDistanceMechanic&&) = delete; \
	USpatialCurveDistanceMechanic(const USpatialCurveDistanceMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, USpatialCurveDistanceMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialCurveDistanceMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpatialCurveDistanceMechanic) \
	MODELINGCOMPONENTS_API virtual ~USpatialCurveDistanceMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialCurveDistanceMechanic;

// ********** End Class USpatialCurveDistanceMechanic **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
