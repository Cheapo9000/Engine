// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryMaskCanvas;
#ifdef GEOMETRYMASK_GeometryMaskSubsystem_generated_h
#error "GeometryMaskSubsystem.generated.h already included, missing '#pragma once' in GeometryMaskSubsystem.h"
#endif
#define GEOMETRYMASK_GeometryMaskSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultCanvas);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_ACCESSORS \
static void GetCanvasResources_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskSubsystem(); \
	friend struct Z_Construct_UClass_UGeometryMaskSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(UGeometryMaskSubsystem)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskSubsystem(UGeometryMaskSubsystem&&); \
	UGeometryMaskSubsystem(const UGeometryMaskSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeometryMaskSubsystem) \
	NO_API virtual ~UGeometryMaskSubsystem();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
