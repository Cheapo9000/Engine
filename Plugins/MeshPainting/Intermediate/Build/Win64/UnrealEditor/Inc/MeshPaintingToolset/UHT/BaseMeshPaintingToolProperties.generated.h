// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseMeshPaintingToolProperties.h"

#ifdef MESHPAINTINGTOOLSET_BaseMeshPaintingToolProperties_generated_h
#error "BaseMeshPaintingToolProperties.generated.h already included, missing '#pragma once' in BaseMeshPaintingToolProperties.h"
#endif
#define MESHPAINTINGTOOLSET_BaseMeshPaintingToolProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshPaintingToolProperties **********************************************
struct Z_Construct_UClass_UMeshPaintingToolProperties_Statics;
MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintingToolProperties_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintingToolProperties(); \
	friend struct ::Z_Construct_UClass_UMeshPaintingToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTINGTOOLSET_API UClass* ::Z_Construct_UClass_UMeshPaintingToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintingToolProperties, UBrushBaseProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshPaintingToolset"), Z_Construct_UClass_UMeshPaintingToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintingToolProperties)


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINTINGTOOLSET_API UMeshPaintingToolProperties(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintingToolProperties(UMeshPaintingToolProperties&&) = delete; \
	UMeshPaintingToolProperties(const UMeshPaintingToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTINGTOOLSET_API, UMeshPaintingToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintingToolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshPaintingToolProperties) \
	MESHPAINTINGTOOLSET_API virtual ~UMeshPaintingToolProperties();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_8_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintingToolProperties;

// ********** End Class UMeshPaintingToolProperties ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_BaseMeshPaintingToolProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
