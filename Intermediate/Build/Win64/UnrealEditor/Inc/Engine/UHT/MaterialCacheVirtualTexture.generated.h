// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialCache/MaterialCacheVirtualTexture.h"

#ifdef ENGINE_MaterialCacheVirtualTexture_generated_h
#error "MaterialCacheVirtualTexture.generated.h already included, missing '#pragma once' in MaterialCacheVirtualTexture.h"
#endif
#define ENGINE_MaterialCacheVirtualTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialCacheVirtualTexture *********************************************
struct Z_Construct_UClass_UMaterialCacheVirtualTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialCacheVirtualTexture(); \
	friend struct ::Z_Construct_UClass_UMaterialCacheVirtualTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialCacheVirtualTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister) \
	DECLARE_SERIALIZER(UMaterialCacheVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialCacheVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialCacheVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialCacheVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialCacheVirtualTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialCacheVirtualTexture(UMaterialCacheVirtualTexture&&) = delete; \
	UMaterialCacheVirtualTexture(const UMaterialCacheVirtualTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialCacheVirtualTexture;

// ********** End Class UMaterialCacheVirtualTexture ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
