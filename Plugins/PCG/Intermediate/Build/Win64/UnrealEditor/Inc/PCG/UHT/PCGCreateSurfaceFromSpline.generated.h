// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreateSurfaceFromSpline.h"

#ifdef PCG_PCGCreateSurfaceFromSpline_generated_h
#error "PCGCreateSurfaceFromSpline.generated.h already included, missing '#pragma once' in PCGCreateSurfaceFromSpline.h"
#endif
#define PCG_PCGCreateSurfaceFromSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateSurfaceFromSplineSettings **************************************
struct Z_Construct_UClass_UPCGCreateSurfaceFromSplineSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreateSurfaceFromSplineSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateSurfaceFromSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreateSurfaceFromSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreateSurfaceFromSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateSurfaceFromSplineSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreateSurfaceFromSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateSurfaceFromSplineSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCreateSurfaceFromSplineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateSurfaceFromSplineSettings(UPCGCreateSurfaceFromSplineSettings&&) = delete; \
	UPCGCreateSurfaceFromSplineSettings(const UPCGCreateSurfaceFromSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreateSurfaceFromSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateSurfaceFromSplineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateSurfaceFromSplineSettings) \
	PCG_API virtual ~UPCGCreateSurfaceFromSplineSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateSurfaceFromSplineSettings;

// ********** End Class UPCGCreateSurfaceFromSplineSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSurfaceFromSpline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
