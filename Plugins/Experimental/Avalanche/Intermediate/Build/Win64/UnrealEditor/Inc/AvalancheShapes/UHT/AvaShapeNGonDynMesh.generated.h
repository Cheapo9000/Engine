// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeNGonDynMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeNGonDynMesh_generated_h
#error "AvaShapeNGonDynMesh.generated.h already included, missing '#pragma once' in AvaShapeNGonDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeNGonDynMesh_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ACCESSORS \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeNGonDynamicMesh(); \
	friend struct Z_Construct_UClass_UAvaShapeNGonDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeNGonDynamicMesh, UAvaShapeRoundedPolygonDynamicMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeNGonDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeNGonDynamicMesh(UAvaShapeNGonDynamicMesh&&); \
	UAvaShapeNGonDynamicMesh(const UAvaShapeNGonDynamicMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeNGonDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeNGonDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeNGonDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeNGonDynamicMesh();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeNGonDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
