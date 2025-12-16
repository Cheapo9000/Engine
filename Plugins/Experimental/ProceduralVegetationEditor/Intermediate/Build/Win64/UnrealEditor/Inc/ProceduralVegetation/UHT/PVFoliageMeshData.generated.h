// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataTypes/PVFoliageMeshData.h"

#ifdef PROCEDURALVEGETATION_PVFoliageMeshData_generated_h
#error "PVFoliageMeshData.generated.h already included, missing '#pragma once' in PVFoliageMeshData.h"
#endif
#define PROCEDURALVEGETATION_PVFoliageMeshData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVDataTypeInfoFoliageMesh ****************************************
struct Z_Construct_UScriptStruct_FPVDataTypeInfoFoliageMesh_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVDataTypeInfoFoliageMesh_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPVDataTypeInfoFoliageMesh;
// ********** End ScriptStruct FPVDataTypeInfoFoliageMesh ******************************************

// ********** Begin Class UPVFoliageMeshData *******************************************************
struct Z_Construct_UClass_UPVFoliageMeshData_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVFoliageMeshData_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVFoliageMeshData(); \
	friend struct ::Z_Construct_UClass_UPVFoliageMeshData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVFoliageMeshData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVFoliageMeshData, UPVData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVFoliageMeshData_NoRegister) \
	DECLARE_SERIALIZER(UPVFoliageMeshData)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVFoliageMeshData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVFoliageMeshData(UPVFoliageMeshData&&) = delete; \
	UPVFoliageMeshData(const UPVFoliageMeshData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVFoliageMeshData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVFoliageMeshData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVFoliageMeshData) \
	NO_API virtual ~UPVFoliageMeshData();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVFoliageMeshData;

// ********** End Class UPVFoliageMeshData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVFoliageMeshData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
