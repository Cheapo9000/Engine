// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShape3DDynMeshBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShape3DDynMeshBase_generated_h
#error "AvaShape3DDynMeshBase.generated.h already included, missing '#pragma once' in AvaShape3DDynMeshBase.h"
#endif
#define AVALANCHESHAPES_AvaShape3DDynMeshBase_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_ACCESSORS \
static void GetPixelSize3D_WrapperImpl(const void* Object, void* OutValue); \
static void SetPixelSize3D_WrapperImpl(void* Object, const void* InValue); \
static void GetSize3D_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize3D_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShape3DDynMeshBase(); \
	friend struct Z_Construct_UClass_UAvaShape3DDynMeshBase_Statics; \
public: \
	DECLARE_CLASS(UAvaShape3DDynMeshBase, UAvaShapeDynamicMeshBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShape3DDynMeshBase)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShape3DDynMeshBase(UAvaShape3DDynMeshBase&&); \
	UAvaShape3DDynMeshBase(const UAvaShape3DDynMeshBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShape3DDynMeshBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShape3DDynMeshBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaShape3DDynMeshBase) \
	AVALANCHESHAPES_API virtual ~UAvaShape3DDynMeshBase();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShape3DDynMeshBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShape3DDynMeshBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
