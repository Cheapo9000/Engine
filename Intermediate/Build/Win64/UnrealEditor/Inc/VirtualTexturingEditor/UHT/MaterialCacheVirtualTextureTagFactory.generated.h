// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialCacheVirtualTextureTagFactory.h"

#ifdef VIRTUALTEXTURINGEDITOR_MaterialCacheVirtualTextureTagFactory_generated_h
#error "MaterialCacheVirtualTextureTagFactory.generated.h already included, missing '#pragma once' in MaterialCacheVirtualTextureTagFactory.h"
#endif
#define VIRTUALTEXTURINGEDITOR_MaterialCacheVirtualTextureTagFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialCacheVirtualTextureTagFactory ***********************************
struct Z_Construct_UClass_UMaterialCacheVirtualTextureTagFactory_Statics;
VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UMaterialCacheVirtualTextureTagFactory_NoRegister();

#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialCacheVirtualTextureTagFactory(); \
	friend struct ::Z_Construct_UClass_UMaterialCacheVirtualTextureTagFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALTEXTURINGEDITOR_API UClass* ::Z_Construct_UClass_UMaterialCacheVirtualTextureTagFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialCacheVirtualTextureTagFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualTexturingEditor"), Z_Construct_UClass_UMaterialCacheVirtualTextureTagFactory_NoRegister) \
	DECLARE_SERIALIZER(UMaterialCacheVirtualTextureTagFactory)


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialCacheVirtualTextureTagFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialCacheVirtualTextureTagFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialCacheVirtualTextureTagFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialCacheVirtualTextureTagFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialCacheVirtualTextureTagFactory(UMaterialCacheVirtualTextureTagFactory&&) = delete; \
	UMaterialCacheVirtualTextureTagFactory(const UMaterialCacheVirtualTextureTagFactory&) = delete; \
	NO_API virtual ~UMaterialCacheVirtualTextureTagFactory();


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_12_PROLOG
#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_15_INCLASS \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialCacheVirtualTextureTagFactory;

// ********** End Class UMaterialCacheVirtualTextureTagFactory *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_MaterialCacheVirtualTextureTagFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
