// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeConeDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeConeDynMesh_generated_h
#error "AvaShapeConeDynMesh.generated.h already included, missing '#pragma once' in AvaShapeConeDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeConeDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeConeDynamicMesh *************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_ACCESSORS \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue); \
static void GetTopRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetTopRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleDegree_WrapperImpl(void* Object, const void* InValue); \
static void GetStartDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartDegree_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeConeDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeConeDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeConeDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeConeDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeConeDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeConeDynamicMesh, UAvaShape3DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeConeDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeConeDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeConeDynamicMesh(UAvaShapeConeDynamicMesh&&) = delete; \
	UAvaShapeConeDynamicMesh(const UAvaShapeConeDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeConeDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeConeDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeConeDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeConeDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeConeDynamicMesh;

// ********** End Class UAvaShapeConeDynamicMesh ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeConeDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
