// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshes/AvaShapeDynMeshBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeDynMeshBase_generated_h
#error "AvaShapeDynMeshBase.generated.h already included, missing '#pragma once' in AvaShapeDynMeshBase.h"
#endif
#define AVALANCHESHAPES_AvaShapeDynMeshBase_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_ACCESSORS \
static void GetUniformScaledSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetUniformScaledSize_WrapperImpl(void* Object, const void* InValue); \
static void GetbUsePrimaryMaterialEverywhere_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUsePrimaryMaterialEverywhere_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaShapeDynamicMeshBase(); \
	friend struct Z_Construct_UClass_UAvaShapeDynamicMeshBase_Statics; \
public: \
	DECLARE_CLASS(UAvaShapeDynamicMeshBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), AVALANCHESHAPES_API) \
	DECLARE_SERIALIZER(UAvaShapeDynamicMeshBase) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaShapeDynamicMeshBase*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaShapeDynamicMeshBase(UAvaShapeDynamicMeshBase&&); \
	UAvaShapeDynamicMeshBase(const UAvaShapeDynamicMeshBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESHAPES_API, UAvaShapeDynamicMeshBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaShapeDynamicMeshBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaShapeDynamicMeshBase) \
	AVALANCHESHAPES_API virtual ~UAvaShapeDynamicMeshBase();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class UAvaShapeDynamicMeshBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_DynamicMeshes_AvaShapeDynMeshBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
