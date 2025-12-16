// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGSurfaceFromPolygon2D.h"

#ifdef PCG_PCGSurfaceFromPolygon2D_generated_h
#error "PCGSurfaceFromPolygon2D.generated.h already included, missing '#pragma once' in PCGSurfaceFromPolygon2D.h"
#endif
#define PCG_PCGSurfaceFromPolygon2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateSurfaceFromPolygon2DSettings ***********************************
struct Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateSurfaceFromPolygon2DSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateSurfaceFromPolygon2DSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCreateSurfaceFromPolygon2DSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateSurfaceFromPolygon2DSettings(UPCGCreateSurfaceFromPolygon2DSettings&&) = delete; \
	UPCGCreateSurfaceFromPolygon2DSettings(const UPCGCreateSurfaceFromPolygon2DSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreateSurfaceFromPolygon2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateSurfaceFromPolygon2DSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateSurfaceFromPolygon2DSettings) \
	PCG_API virtual ~UPCGCreateSurfaceFromPolygon2DSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateSurfaceFromPolygon2DSettings;

// ********** End Class UPCGCreateSurfaceFromPolygon2DSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
