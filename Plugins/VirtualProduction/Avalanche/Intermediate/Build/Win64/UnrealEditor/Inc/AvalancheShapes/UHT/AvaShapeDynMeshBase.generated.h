// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeDynMeshBase.h"

#ifdef AVALANCHESHAPES_AvaShapeDynMeshBase_generated_h
#error "AvaShapeDynMeshBase.generated.h already included, missing '#pragma once' in AvaShapeDynMeshBase.h"
#endif
#define AVALANCHESHAPES_AvaShapeDynMeshBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class EMaterialType : uint8;
struct FAvaShapeMaterialUVParameters;
struct FAvaShapeParametricMaterial;

// ********** Begin Class UAvaShapeDynamicMeshBase *************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialUVParams); \
	DECLARE_FUNCTION(execSetMaterialUVParams); \
	DECLARE_FUNCTION(execGetOverridePrimaryUVParams); \
	DECLARE_FUNCTION(execSetOverridePrimaryUVParams); \
	DECLARE_FUNCTION(execGetParametricMaterial); \
	DECLARE_FUNCTION(execSetParametricMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialType); \
	DECLARE_FUNCTION(execSetMaterialType); \
	DECLARE_FUNCTION(execIsValidMeshIndex); \
	DECLARE_FUNCTION(execGetUniformScaledSize); \
	DECLARE_FUNCTION(execSetUniformScaledSize); \
	DECLARE_FUNCTION(execGetUsePrimaryMaterialEverywhere); \
	DECLARE_FUNCTION(execSetUsePrimaryMaterialEverywhere); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execGetSize2D); \
	DECLARE_FUNCTION(execSetSize2D); \
	DECLARE_FUNCTION(execGetSize3D); \
	DECLARE_FUNCTION(execSetSize3D); \
	DECLARE_FUNCTION(execGetAllowEditSize); \
	DECLARE_FUNCTION(execGetMeshSectionNames);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_ACCESSORS \
static void GetbAllowEditSize_WrapperImpl(const void* Object, void* OutValue); \
static void GetUniformScaledSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetUniformScaledSize_WrapperImpl(void* Object, const void* InValue); \
static void GetbUsePrimaryMaterialEverywhere_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUsePrimaryMaterialEverywhere_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShapeDynamicMeshBase_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShapeDynamicMeshBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeDynamicMeshBase(); \
	friend struct ::Z_Construct_UClass_UAvaShapeDynamicMeshBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShapeDynamicMeshBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShapeDynamicMeshBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShapeDynamicMeshBase_NoRegister) \
	DECLARE_SERIALIZER(UAvaShapeDynamicMeshBase) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaShapeDynamicMeshBase*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShapeDynamicMeshBase(UAvaShapeDynamicMeshBase&&) = delete; \
	UAvaShapeDynamicMeshBase(const UAvaShapeDynamicMeshBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeDynamicMeshBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeDynamicMeshBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaShapeDynamicMeshBase) \
	AVALANCHESHAPES_API virtual ~UAvaShapeDynamicMeshBase();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShapeDynamicMeshBase;

// ********** End Class UAvaShapeDynamicMeshBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
