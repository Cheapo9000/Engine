// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskCanvasResource.h"

#ifdef GEOMETRYMASK_GeometryMaskCanvasResource_generated_h
#error "GeometryMaskCanvasResource.generated.h already included, missing '#pragma once' in GeometryMaskCanvasResource.h"
#endif
#define GEOMETRYMASK_GeometryMaskCanvasResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryMaskCanvasResource **********************************************
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_ACCESSORS \
static void GetMaxViewportSize_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UGeometryMaskCanvasResource_Statics;
GEOMETRYMASK_API UClass* Z_Construct_UClass_UGeometryMaskCanvasResource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskCanvasResource(); \
	friend struct ::Z_Construct_UClass_UGeometryMaskCanvasResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMASK_API UClass* ::Z_Construct_UClass_UGeometryMaskCanvasResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryMaskCanvasResource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMask"), Z_Construct_UClass_UGeometryMaskCanvasResource_NoRegister) \
	DECLARE_SERIALIZER(UGeometryMaskCanvasResource)


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryMaskCanvasResource(UGeometryMaskCanvasResource&&) = delete; \
	UGeometryMaskCanvasResource(const UGeometryMaskCanvasResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskCanvasResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskCanvasResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryMaskCanvasResource) \
	NO_API virtual ~UGeometryMaskCanvasResource();


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_AUTOGETTERSETTER_DECLS \
	const FIntPoint GetMaxViewportSize() const;


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_AUTOGETTERSETTER_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryMaskCanvasResource;

// ********** End Class UGeometryMaskCanvasResource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
