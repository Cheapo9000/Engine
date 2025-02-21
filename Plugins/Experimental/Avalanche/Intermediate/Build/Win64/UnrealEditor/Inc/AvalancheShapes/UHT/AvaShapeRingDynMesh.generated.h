// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeRingDynMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeRingDynMesh_generated_h
#error "AvaShapeRingDynMesh.generated.h already included, missing '#pragma once' in AvaShapeRingDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeRingDynMesh_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_ACCESSORS \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerSize_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleDegree_WrapperImpl(void* Object, const void* InValue); \
static void GetStartDegree_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartDegree_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeRingDynamicMesh(); \
	friend struct Z_Construct_UClass_UAvaShapeRingDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeRingDynamicMesh, UAvaShape2DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeRingDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeRingDynamicMesh(UAvaShapeRingDynamicMesh&&); \
	UAvaShapeRingDynamicMesh(const UAvaShapeRingDynamicMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeRingDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeRingDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeRingDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeRingDynamicMesh();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeRingDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRingDynMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
