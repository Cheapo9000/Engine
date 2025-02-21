// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeSphereDynMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeSphereDynMesh_generated_h
#error "AvaShapeSphereDynMesh.generated.h already included, missing '#pragma once' in AvaShapeSphereDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeSphereDynMesh_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_ACCESSORS \
static void GetStartLongitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartLongitude_WrapperImpl(void* Object, const void* InValue); \
static void GetEndLongitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetEndLongitude_WrapperImpl(void* Object, const void* InValue); \
static void GetStartLatitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartLatitude_WrapperImpl(void* Object, const void* InValue); \
static void GetLatitudeDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetLatitudeDegree_WrapperImpl(void* Object, const void* InValue); \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeSphereDynamicMesh(); \
	friend struct Z_Construct_UClass_UAvaShapeSphereDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeSphereDynamicMesh, UAvaShape3DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeSphereDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeSphereDynamicMesh(UAvaShapeSphereDynamicMesh&&); \
	UAvaShapeSphereDynamicMesh(const UAvaShapeSphereDynamicMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeSphereDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeSphereDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeSphereDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeSphereDynamicMesh();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeSphereDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeSphereDynMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
