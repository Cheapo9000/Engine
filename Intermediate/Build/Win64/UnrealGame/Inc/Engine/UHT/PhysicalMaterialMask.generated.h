// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicalMaterials/PhysicalMaterialMask.h"

#ifdef ENGINE_PhysicalMaterialMask_generated_h
#error "PhysicalMaterialMask.generated.h already included, missing '#pragma once' in PhysicalMaterialMask.h"
#endif
#define ENGINE_PhysicalMaterialMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicalMaterialMask ****************************************************
struct Z_Construct_UClass_UPhysicalMaterialMask_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalMaterialMask(); \
	friend struct ::Z_Construct_UClass_UPhysicalMaterialMask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicalMaterialMask_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicalMaterialMask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister) \
	DECLARE_SERIALIZER(UPhysicalMaterialMask)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicalMaterialMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterialMask) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterialMask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicalMaterialMask(UPhysicalMaterialMask&&) = delete; \
	UPhysicalMaterialMask(const UPhysicalMaterialMask&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicalMaterialMask;

// ********** End Class UPhysicalMaterialMask ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
