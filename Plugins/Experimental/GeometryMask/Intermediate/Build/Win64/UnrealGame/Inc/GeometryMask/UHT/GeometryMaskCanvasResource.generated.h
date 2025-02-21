// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskCanvasResource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMASK_GeometryMaskCanvasResource_generated_h
#error "GeometryMaskCanvasResource.generated.h already included, missing '#pragma once' in GeometryMaskCanvasResource.h"
#endif
#define GEOMETRYMASK_GeometryMaskCanvasResource_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_ACCESSORS \
static void GetMaxViewportSize_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskCanvasResource(); \
	friend struct Z_Construct_UClass_UGeometryMaskCanvasResource_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskCanvasResource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(UGeometryMaskCanvasResource)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskCanvasResource(UGeometryMaskCanvasResource&&); \
	UGeometryMaskCanvasResource(const UGeometryMaskCanvasResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskCanvasResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskCanvasResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryMaskCanvasResource) \
	NO_API virtual ~UGeometryMaskCanvasResource();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_AUTOGETTERSETTER_DECLS \
	const FIntPoint GetMaxViewportSize() const;


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_AUTOGETTERSETTER_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskCanvasResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
