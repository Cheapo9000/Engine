// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeLineDynMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeLineDynMesh_generated_h
#error "AvaShapeLineDynMesh.generated.h already included, missing '#pragma once' in AvaShapeLineDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeLineDynMesh_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ACCESSORS \
static void GetLineWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetVector_WrapperImpl(const void* Object, void* OutValue); \
static void SetVector_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeLineDynamicMesh(); \
	friend struct Z_Construct_UClass_UAvaShapeLineDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeLineDynamicMesh, UAvaShapeRoundedPolygonDynamicMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeLineDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeLineDynamicMesh(UAvaShapeLineDynamicMesh&&); \
	UAvaShapeLineDynamicMesh(const UAvaShapeLineDynamicMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeLineDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeLineDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeLineDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeLineDynamicMesh();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeLineDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeLineDynMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
