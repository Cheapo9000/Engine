// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeEllipseDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeEllipseDynMesh_generated_h
#error "AvaShapeEllipseDynMesh.generated.h already included, missing '#pragma once' in AvaShapeEllipseDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeEllipseDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeEllipseDynamicMesh **********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_ACCESSORS \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleDegree_WrapperImpl(void* Object, const void* InValue); \
static void GetStartDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartDegree_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeEllipseDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeEllipseDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeEllipseDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeEllipseDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeEllipseDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeEllipseDynamicMesh, UAvaShape2DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeEllipseDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeEllipseDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeEllipseDynamicMesh(UAvaShapeEllipseDynamicMesh&&) = delete; \
	UAvaShapeEllipseDynamicMesh(const UAvaShapeEllipseDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeEllipseDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeEllipseDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeEllipseDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeEllipseDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeEllipseDynamicMesh;

// ********** End Class UAvaShapeEllipseDynamicMesh ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeEllipseDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
