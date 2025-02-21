// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskCanvas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasRenderTarget2D;
enum class EGeometryMaskColorChannel : uint8;
#ifdef GEOMETRYMASK_GeometryMaskCanvas_generated_h
#error "GeometryMaskCanvas.generated.h already included, missing '#pragma once' in GeometryMaskCanvas.h"
#endif
#define GEOMETRYMASK_GeometryMaskCanvas_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetColorChannel); \
	DECLARE_FUNCTION(execGetTexture);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_ACCESSORS \
static void GetCanvasName_WrapperImpl(const void* Object, void* OutValue); \
static void GetbApplyBlur_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyBlur_WrapperImpl(void* Object, const void* InValue); \
static void GetBlurStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlurStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetbApplyFeather_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyFeather_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterFeatherRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerFeatherRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetColorChannel_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskCanvas(); \
	friend struct Z_Construct_UClass_UGeometryMaskCanvas_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(UGeometryMaskCanvas)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskCanvas(UGeometryMaskCanvas&&); \
	UGeometryMaskCanvas(const UGeometryMaskCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskCanvas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskCanvas) \
	NO_API virtual ~UGeometryMaskCanvas();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_AUTOGETTERSETTER_DECLS \
	const FName GetCanvasName() const;


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_AUTOGETTERSETTER_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
