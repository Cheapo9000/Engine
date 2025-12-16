// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/PlaneDistanceFromHitMechanic.h"

#ifdef MODELINGCOMPONENTS_PlaneDistanceFromHitMechanic_generated_h
#error "PlaneDistanceFromHitMechanic.generated.h already included, missing '#pragma once' in PlaneDistanceFromHitMechanic.h"
#endif
#define MODELINGCOMPONENTS_PlaneDistanceFromHitMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlaneDistanceFromHitMechanic ********************************************
struct Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlaneDistanceFromHitMechanic(); \
	friend struct ::Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlaneDistanceFromHitMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister) \
	DECLARE_SERIALIZER(UPlaneDistanceFromHitMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UPlaneDistanceFromHitMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlaneDistanceFromHitMechanic(UPlaneDistanceFromHitMechanic&&) = delete; \
	UPlaneDistanceFromHitMechanic(const UPlaneDistanceFromHitMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UPlaneDistanceFromHitMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlaneDistanceFromHitMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlaneDistanceFromHitMechanic) \
	MODELINGCOMPONENTS_API virtual ~UPlaneDistanceFromHitMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlaneDistanceFromHitMechanic;

// ********** End Class UPlaneDistanceFromHitMechanic **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
