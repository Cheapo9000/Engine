// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeRectangleDynMesh.h"

#ifdef AVALANCHESHAPES_AvaShapeRectangleDynMesh_generated_h
#error "AvaShapeRectangleDynMesh.generated.h already included, missing '#pragma once' in AvaShapeRectangleDynMesh.h"
#endif
#define AVALANCHESHAPES_AvaShapeRectangleDynMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaShapeRectangleCornerSettings **********************************
struct Z_Construct_UScriptStruct_FAvaShapeRectangleCornerSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaShapeRectangleCornerSettings_Statics; \
	AVALANCHESHAPES_API static class UScriptStruct* StaticStruct();


struct FAvaShapeRectangleCornerSettings;
// ********** End ScriptStruct FAvaShapeRectangleCornerSettings ************************************

// ********** Begin Class UAvaShapeRectangleDynamicMesh ********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetLeftSlant_WrapperImpl(const void* Object, void* OutValue); \
static void SetLeftSlant_WrapperImpl(void* Object, const void* InValue); \
static void GetRightSlant_WrapperImpl(const void* Object, void* OutValue); \
static void SetRightSlant_WrapperImpl(void* Object, const void* InValue); \
static void GetGlobalBevelSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalBevelSize_WrapperImpl(void* Object, const void* InValue); \
static void GetGlobalBevelSubdivisions_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalBevelSubdivisions_WrapperImpl(void* Object, const void* InValue); \
static void GetTopLeft_WrapperImpl(const void* Object, void* OutValue); \
static void SetTopLeft_WrapperImpl(void* Object, const void* InValue); \
static void GetTopRight_WrapperImpl(const void* Object, void* OutValue); \
static void SetTopRight_WrapperImpl(void* Object, const void* InValue); \
static void GetBottomLeft_WrapperImpl(const void* Object, void* OutValue); \
static void SetBottomLeft_WrapperImpl(void* Object, const void* InValue); \
static void GetBottomRight_WrapperImpl(const void* Object, void* OutValue); \
static void SetBottomRight_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeRectangleDynamicMesh_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeRectangleDynamicMesh_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeRectangleDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UAvaShapeRectangleDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeRectangleDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeRectangleDynamicMesh, UAvaShape2DDynMeshBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeRectangleDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeRectangleDynamicMesh) \
	DECLARE_WITHIN(AAvaShapeActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeRectangleDynamicMesh(UAvaShapeRectangleDynamicMesh&&) = delete; \
	UAvaShapeRectangleDynamicMesh(const UAvaShapeRectangleDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeRectangleDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeRectangleDynamicMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaShapeRectangleDynamicMesh) \
	AVALANCHESHAPES_API virtual ~UAvaShapeRectangleDynamicMesh();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeRectangleDynamicMesh;

// ********** End Class UAvaShapeRectangleDynamicMesh **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeRectangleDynMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
