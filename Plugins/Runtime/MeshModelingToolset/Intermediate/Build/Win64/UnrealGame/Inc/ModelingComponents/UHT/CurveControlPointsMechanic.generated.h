// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/CurveControlPointsMechanic.h"

#ifdef MODELINGCOMPONENTS_CurveControlPointsMechanic_generated_h
#error "CurveControlPointsMechanic.generated.h already included, missing '#pragma once' in CurveControlPointsMechanic.h"
#endif
#define MODELINGCOMPONENTS_CurveControlPointsMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveControlPointsMechanic **********************************************
struct Z_Construct_UClass_UCurveControlPointsMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveControlPointsMechanic(); \
	friend struct ::Z_Construct_UClass_UCurveControlPointsMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveControlPointsMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister) \
	DECLARE_SERIALIZER(UCurveControlPointsMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UCurveControlPointsMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveControlPointsMechanic(UCurveControlPointsMechanic&&) = delete; \
	UCurveControlPointsMechanic(const UCurveControlPointsMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UCurveControlPointsMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveControlPointsMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveControlPointsMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveControlPointsMechanic;

// ********** End Class UCurveControlPointsMechanic ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
