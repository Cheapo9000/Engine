// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskCanvasActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasRenderTarget2D;
#ifdef GEOMETRYMASK_GeometryMaskCanvasActor_generated_h
#error "GeometryMaskCanvasActor.generated.h already included, missing '#pragma once' in GeometryMaskCanvasActor.h"
#endif
#define GEOMETRYMASK_GeometryMaskCanvasActor_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTexture);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryMaskCanvasActor(); \
	friend struct Z_Construct_UClass_AGeometryMaskCanvasActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryMaskCanvasActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(AGeometryMaskCanvasActor)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGeometryMaskCanvasActor(AGeometryMaskCanvasActor&&); \
	AGeometryMaskCanvasActor(const AGeometryMaskCanvasActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryMaskCanvasActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryMaskCanvasActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryMaskCanvasActor) \
	NO_API virtual ~AGeometryMaskCanvasActor();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class AGeometryMaskCanvasActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskCanvasActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
