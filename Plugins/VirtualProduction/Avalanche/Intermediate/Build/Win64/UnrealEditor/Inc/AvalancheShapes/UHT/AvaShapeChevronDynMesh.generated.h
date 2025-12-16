// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeChevronDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeChevronDynMesh_generated_h
#error "AvaShapeChevronDynMesh.generated.h already included, missing '#pragma once' in AvaShapeChevronDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeChevronDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShapeChevronDynamicMesh **********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_ACCESSORS \
static void GetRatioChevron_WrapperImpl(const void* Object, void* OutValue); \
static void SetRatioChevron_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeChevronDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeChevronDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeChevronDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeChevronDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeChevronDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeChevronDynamicMesh, UAvaShape2DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeChevronDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeChevronDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeChevronDynamicMesh(UAvaShapeChevronDynamicMesh&&) = delete; \
	UAvaShapeChevronDynamicMesh(const UAvaShapeChevronDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeChevronDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeChevronDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeChevronDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeChevronDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeChevronDynamicMesh;

// ********** End Class UAvaShapeChevronDynamicMesh ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeChevronDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
