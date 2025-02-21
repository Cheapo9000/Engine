// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeIrregularPolygonDynMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeIrregularPolygonDynMesh_generated_h
#error "AvaShapeIrregularPolygonDynMesh.generated.h already included, missing '#pragma once' in AvaShapeIrregularPolygonDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeIrregularPolygonDynMesh_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaShapeRoundedCornerSettings_Statics; \
	AVALANCHESHAPES_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESHAPES_API UScriptStruct* StaticStruct<struct FAvaShapeRoundedCornerSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaShapeRoundedCorner_Statics; \
	AVALANCHESHAPES_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESHAPES_API UScriptStruct* StaticStruct<struct FAvaShapeRoundedCorner>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_ACCESSORS \
static void GetGlobalBevelSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalBevelSize_WrapperImpl(void* Object, const void* InValue); \
static void GetGlobalBevelSubdivisions_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalBevelSubdivisions_WrapperImpl(void* Object, const void* InValue); \
static void GetPoints_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoints_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeIrregularPolygonDynamicMesh(); \
	friend struct Z_Construct_UClass_UAvaShapeIrregularPolygonDynamicMesh_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeIrregularPolygonDynamicMesh, UAvaShape2DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeIrregularPolygonDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeIrregularPolygonDynamicMesh(UAvaShapeIrregularPolygonDynamicMesh&&); \
	UAvaShapeIrregularPolygonDynamicMesh(const UAvaShapeIrregularPolygonDynamicMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeIrregularPolygonDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeIrregularPolygonDynamicMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaShapeIrregularPolygonDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeIrregularPolygonDynamicMesh();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeIrregularPolygonDynamicMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeIrregularPolygonDynMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
