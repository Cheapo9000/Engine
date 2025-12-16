// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeLineDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeLineDynMesh_generated_h
#error "AvaShapeLineDynMesh.generated.h already included, missing '#pragma once' in AvaShapeLineDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeLineDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeLineDynamicMesh *************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ACCESSORS \
static void GetLineWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetVector_WrapperImpl(const void* Object, void* OutValue); \
static void SetVector_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeLineDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeLineDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeLineDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeLineDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeLineDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeLineDynamicMesh, UAvaShapeRoundedPolygonDynamicMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeLineDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeLineDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeLineDynamicMesh(UAvaShapeLineDynamicMesh&&) = delete; \
	UAvaShapeLineDynamicMesh(const UAvaShapeLineDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeLineDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeLineDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeLineDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeLineDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeLineDynamicMesh;

// ********** End Class UAvaShapeLineDynamicMesh ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
