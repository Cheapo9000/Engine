// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeNGonDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeNGonDynMesh_generated_h
#error "AvaShapeNGonDynMesh.generated.h already included, missing '#pragma once' in AvaShapeNGonDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeNGonDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeNGonDynamicMesh *************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ACCESSORS \
static void GetNumSides_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumSides_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeNGonDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeNGonDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeNGonDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeNGonDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeNGonDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeNGonDynamicMesh, UAvaShapeRoundedPolygonDynamicMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeNGonDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeNGonDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeNGonDynamicMesh(UAvaShapeNGonDynamicMesh&&) = delete; \
	UAvaShapeNGonDynamicMesh(const UAvaShapeNGonDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeNGonDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeNGonDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeNGonDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeNGonDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeNGonDynamicMesh;

// ********** End Class UAvaShapeNGonDynamicMesh ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeNGonDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
