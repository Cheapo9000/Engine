// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShape2DDynMeshBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShape2DDynMeshBase_generated_h
#error "AvaShape2DDynMeshBase.generated.h already included, missing '#pragma once' in AvaShape2DDynMeshBase.h"
#endif
#define AVALANCHESHAPES_AvaShape2DDynMeshBase_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ACCESSORS \
static void GetPixelSize2D_WrapperImpl(const void* Object, void* OutValue); \
static void SetPixelSize2D_WrapperImpl(void* Object, const void* InValue); \
static void GetSize2D_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize2D_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShape2DDynMeshBase(); \
	friend struct Z_Construct_UClass_UAvaShape2DDynMeshBase_Statics; \
public: \
	DECLARE_CLASS(UAvaShape2DDynMeshBase, UAvaShapeDynamicMeshBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShape2DDynMeshBase)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShape2DDynMeshBase(UAvaShape2DDynMeshBase&&); \
	UAvaShape2DDynMeshBase(const UAvaShape2DDynMeshBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShape2DDynMeshBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShape2DDynMeshBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaShape2DDynMeshBase)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShape2DDynMeshBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape2DDynMeshBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
