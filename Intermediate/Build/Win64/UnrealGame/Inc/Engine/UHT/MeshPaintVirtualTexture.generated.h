// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/MeshPaintVirtualTexture.h"

#ifdef ENGINE_MeshPaintVirtualTexture_generated_h
#error "MeshPaintVirtualTexture.generated.h already included, missing '#pragma once' in MeshPaintVirtualTexture.h"
#endif
#define ENGINE_MeshPaintVirtualTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshPaintVirtualTexture *************************************************
struct Z_Construct_UClass_UMeshPaintVirtualTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMeshPaintVirtualTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMeshPaintVirtualTexture(); \
	friend struct ::Z_Construct_UClass_UMeshPaintVirtualTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMeshPaintVirtualTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintVirtualTexture, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMeshPaintVirtualTexture_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshPaintVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshPaintVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintVirtualTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintVirtualTexture(UMeshPaintVirtualTexture&&) = delete; \
	UMeshPaintVirtualTexture(const UMeshPaintVirtualTexture&) = delete; \
	ENGINE_API virtual ~UMeshPaintVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintVirtualTexture;

// ********** End Class UMeshPaintVirtualTexture ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
