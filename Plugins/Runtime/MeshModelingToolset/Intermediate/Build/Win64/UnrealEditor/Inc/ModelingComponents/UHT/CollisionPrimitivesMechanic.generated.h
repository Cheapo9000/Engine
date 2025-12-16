// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/CollisionPrimitivesMechanic.h"

#ifdef MODELINGCOMPONENTS_CollisionPrimitivesMechanic_generated_h
#error "CollisionPrimitivesMechanic.generated.h already included, missing '#pragma once' in CollisionPrimitivesMechanic.h"
#endif
#define MODELINGCOMPONENTS_CollisionPrimitivesMechanic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCollisionPrimitivesMechanic *********************************************
struct Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionPrimitivesMechanic(); \
	friend struct ::Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UCollisionPrimitivesMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister) \
	DECLARE_SERIALIZER(UCollisionPrimitivesMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UCollisionPrimitivesMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCollisionPrimitivesMechanic(UCollisionPrimitivesMechanic&&) = delete; \
	UCollisionPrimitivesMechanic(const UCollisionPrimitivesMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UCollisionPrimitivesMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionPrimitivesMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollisionPrimitivesMechanic) \
	MODELINGCOMPONENTS_API virtual ~UCollisionPrimitivesMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCollisionPrimitivesMechanic;

// ********** End Class UCollisionPrimitivesMechanic ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
