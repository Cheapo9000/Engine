// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/LatticeControlPointsMechanic.h"

#ifdef MODELINGCOMPONENTS_LatticeControlPointsMechanic_generated_h
#error "LatticeControlPointsMechanic.generated.h already included, missing '#pragma once' in LatticeControlPointsMechanic.h"
#endif
#define MODELINGCOMPONENTS_LatticeControlPointsMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULatticeControlPointsMechanic ********************************************
struct Z_Construct_UClass_ULatticeControlPointsMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatticeControlPointsMechanic(); \
	friend struct ::Z_Construct_UClass_ULatticeControlPointsMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeControlPointsMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister) \
	DECLARE_SERIALIZER(ULatticeControlPointsMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API ULatticeControlPointsMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeControlPointsMechanic(ULatticeControlPointsMechanic&&) = delete; \
	ULatticeControlPointsMechanic(const ULatticeControlPointsMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, ULatticeControlPointsMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeControlPointsMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULatticeControlPointsMechanic) \
	MODELINGCOMPONENTS_API virtual ~ULatticeControlPointsMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeControlPointsMechanic;

// ********** End Class ULatticeControlPointsMechanic **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
