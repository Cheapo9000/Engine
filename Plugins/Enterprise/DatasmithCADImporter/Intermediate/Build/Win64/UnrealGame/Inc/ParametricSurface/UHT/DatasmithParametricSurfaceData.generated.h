// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithParametricSurfaceData.h"

#ifdef PARAMETRICSURFACE_DatasmithParametricSurfaceData_generated_h
#error "DatasmithParametricSurfaceData.generated.h already included, missing '#pragma once' in DatasmithParametricSurfaceData.h"
#endif
#define PARAMETRICSURFACE_DatasmithParametricSurfaceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParametricSceneParameters ****************************************
struct Z_Construct_UScriptStruct_FParametricSceneParameters_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParametricSceneParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FParametricSceneParameters;
// ********** End ScriptStruct FParametricSceneParameters ******************************************

// ********** Begin ScriptStruct FParametricMeshParameters *****************************************
struct Z_Construct_UScriptStruct_FParametricMeshParameters_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParametricMeshParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FParametricMeshParameters;
// ********** End ScriptStruct FParametricMeshParameters *******************************************

// ********** Begin Class UDatasmithParametricSurfaceData ******************************************
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithParametricSurfaceData, NO_API)


struct Z_Construct_UClass_UDatasmithParametricSurfaceData_Statics;
PARAMETRICSURFACE_API UClass* Z_Construct_UClass_UDatasmithParametricSurfaceData_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithParametricSurfaceData(); \
	friend struct ::Z_Construct_UClass_UDatasmithParametricSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARAMETRICSURFACE_API UClass* ::Z_Construct_UClass_UDatasmithParametricSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithParametricSurfaceData, UDatasmithAdditionalData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParametricSurface"), Z_Construct_UClass_UDatasmithParametricSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithParametricSurfaceData) \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithParametricSurfaceData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithParametricSurfaceData(UDatasmithParametricSurfaceData&&) = delete; \
	UDatasmithParametricSurfaceData(const UDatasmithParametricSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithParametricSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithParametricSurfaceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithParametricSurfaceData) \
	NO_API virtual ~UDatasmithParametricSurfaceData();


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_68_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithParametricSurfaceData;

// ********** End Class UDatasmithParametricSurfaceData ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_DatasmithParametricSurfaceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
