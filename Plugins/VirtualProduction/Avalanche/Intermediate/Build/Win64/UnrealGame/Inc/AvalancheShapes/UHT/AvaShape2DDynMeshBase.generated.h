// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShape2DDynMeshBase.h"

#ifdef AVALANCHESHAPES_AvaShape2DDynMeshBase_generated_h
#error "AvaShape2DDynMeshBase.generated.h already included, missing '#pragma once' in AvaShape2DDynMeshBase.h"
#endif
#define AVALANCHESHAPES_AvaShape2DDynMeshBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaShape2DDynMeshBase ***************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ACCESSORS \
static void GetPixelSize2D_WrapperImpl(const void* Object, void* OutValue); \
static void SetPixelSize2D_WrapperImpl(void* Object, const void* InValue); \
static void GetSize2D_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize2D_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaShape2DDynMeshBase_Statics;
AVALANCHESHAPES_API UClass* Z_Construct_UClass_UAvaShape2DDynMeshBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShape2DDynMeshBase(); \
	friend struct ::Z_Construct_UClass_UAvaShape2DDynMeshBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESHAPES_API UClass* ::Z_Construct_UClass_UAvaShape2DDynMeshBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaShape2DDynMeshBase, UAvaShapeDynamicMeshBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), Z_Construct_UClass_UAvaShape2DDynMeshBase_NoRegister) \
	DECLARE_SERIALIZER(UAvaShape2DDynMeshBase)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaShape2DDynMeshBase(UAvaShape2DDynMeshBase&&) = delete; \
	UAvaShape2DDynMeshBase(const UAvaShape2DDynMeshBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShape2DDynMeshBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShape2DDynMeshBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaShape2DDynMeshBase)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaShape2DDynMeshBase;

// ********** End Class UAvaShape2DDynMeshBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
