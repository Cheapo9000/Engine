// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CADKernelSurfaceExtension.h"

#ifdef CADKERNELSURFACE_CADKernelSurfaceExtension_generated_h
#error "CADKernelSurfaceExtension.generated.h already included, missing '#pragma once' in CADKernelSurfaceExtension.h"
#endif
#define CADKERNELSURFACE_CADKernelSurfaceExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCADKernelParametricSurfaceData ******************************************
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCADKernelParametricSurfaceData, NO_API)


struct Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics;
CADKERNELSURFACE_API UClass* Z_Construct_UClass_UCADKernelParametricSurfaceData_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCADKernelParametricSurfaceData(); \
	friend struct ::Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CADKERNELSURFACE_API UClass* ::Z_Construct_UClass_UCADKernelParametricSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCADKernelParametricSurfaceData, UDatasmithParametricSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CADKernelSurface"), Z_Construct_UClass_UCADKernelParametricSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UCADKernelParametricSurfaceData) \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCADKernelParametricSurfaceData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCADKernelParametricSurfaceData(UCADKernelParametricSurfaceData&&) = delete; \
	UCADKernelParametricSurfaceData(const UCADKernelParametricSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCADKernelParametricSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCADKernelParametricSurfaceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCADKernelParametricSurfaceData) \
	NO_API virtual ~UCADKernelParametricSurfaceData();


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_15_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCADKernelParametricSurfaceData;

// ********** End Class UCADKernelParametricSurfaceData ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
