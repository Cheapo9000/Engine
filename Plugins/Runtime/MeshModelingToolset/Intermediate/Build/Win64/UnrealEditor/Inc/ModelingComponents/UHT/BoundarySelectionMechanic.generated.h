// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/BoundarySelectionMechanic.h"

#ifdef MODELINGCOMPONENTS_BoundarySelectionMechanic_generated_h
#error "BoundarySelectionMechanic.generated.h already included, missing '#pragma once' in BoundarySelectionMechanic.h"
#endif
#define MODELINGCOMPONENTS_BoundarySelectionMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBoundarySelectionMechanic ***********************************************
struct Z_Construct_UClass_UBoundarySelectionMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoundarySelectionMechanic(); \
	friend struct ::Z_Construct_UClass_UBoundarySelectionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoundarySelectionMechanic, UMeshTopologySelectionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UBoundarySelectionMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UBoundarySelectionMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoundarySelectionMechanic(UBoundarySelectionMechanic&&) = delete; \
	UBoundarySelectionMechanic(const UBoundarySelectionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UBoundarySelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoundarySelectionMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoundarySelectionMechanic) \
	MODELINGCOMPONENTS_API virtual ~UBoundarySelectionMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoundarySelectionMechanic;

// ********** End Class UBoundarySelectionMechanic *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
