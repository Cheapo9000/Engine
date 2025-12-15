// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicalMaterials/PhysicalMaterialPropertyBase.h"

#ifdef PHYSICSCORE_PhysicalMaterialPropertyBase_generated_h
#error "PhysicalMaterialPropertyBase.generated.h already included, missing '#pragma once' in PhysicalMaterialPropertyBase.h"
#endif
#define PHYSICSCORE_PhysicalMaterialPropertyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_PhysicalMaterialPropertyBase *********************************
struct Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics;
PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();

#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCORE_API UClass* ::Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_PhysicalMaterialPropertyBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/PhysicsCore"), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_PhysicalMaterialPropertyBase)


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCORE_API UDEPRECATED_PhysicalMaterialPropertyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_PhysicalMaterialPropertyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCORE_API, UDEPRECATED_PhysicalMaterialPropertyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PhysicalMaterialPropertyBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_PhysicalMaterialPropertyBase(UDEPRECATED_PhysicalMaterialPropertyBase&&) = delete; \
	UDEPRECATED_PhysicalMaterialPropertyBase(const UDEPRECATED_PhysicalMaterialPropertyBase&) = delete; \
	PHYSICSCORE_API virtual ~UDEPRECATED_PhysicalMaterialPropertyBase();


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_31_PROLOG
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_34_INCLASS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_PhysicalMaterialPropertyBase;

// ********** End Class UDEPRECATED_PhysicalMaterialPropertyBase ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
