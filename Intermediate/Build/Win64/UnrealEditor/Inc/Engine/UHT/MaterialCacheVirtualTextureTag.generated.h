// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialCache/MaterialCacheVirtualTextureTag.h"

#ifdef ENGINE_MaterialCacheVirtualTextureTag_generated_h
#error "MaterialCacheVirtualTextureTag.generated.h already included, missing '#pragma once' in MaterialCacheVirtualTextureTag.h"
#endif
#define ENGINE_MaterialCacheVirtualTextureTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialCacheVirtualTextureTag ******************************************
struct Z_Construct_UClass_UMaterialCacheVirtualTextureTag_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialCacheVirtualTextureTag_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialCacheVirtualTextureTag(); \
	friend struct ::Z_Construct_UClass_UMaterialCacheVirtualTextureTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialCacheVirtualTextureTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialCacheVirtualTextureTag, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialCacheVirtualTextureTag_NoRegister) \
	DECLARE_SERIALIZER(UMaterialCacheVirtualTextureTag)


#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialCacheVirtualTextureTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialCacheVirtualTextureTag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialCacheVirtualTextureTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialCacheVirtualTextureTag); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialCacheVirtualTextureTag(UMaterialCacheVirtualTextureTag&&) = delete; \
	UMaterialCacheVirtualTextureTag(const UMaterialCacheVirtualTextureTag&) = delete; \
	ENGINE_API virtual ~UMaterialCacheVirtualTextureTag();


#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialCacheVirtualTextureTag;

// ********** End Class UMaterialCacheVirtualTextureTag ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
