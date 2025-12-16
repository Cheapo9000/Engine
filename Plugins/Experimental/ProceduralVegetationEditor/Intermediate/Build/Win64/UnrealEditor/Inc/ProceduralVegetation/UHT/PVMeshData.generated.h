// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataTypes/PVMeshData.h"

#ifdef PROCEDURALVEGETATION_PVMeshData_generated_h
#error "PVMeshData.generated.h already included, missing '#pragma once' in PVMeshData.h"
#endif
#define PROCEDURALVEGETATION_PVMeshData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVDataTypeInfoMesh ***********************************************
struct Z_Construct_UScriptStruct_FPVDataTypeInfoMesh_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVDataTypeInfoMesh_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPVDataTypeInfoMesh;
// ********** End ScriptStruct FPVDataTypeInfoMesh *************************************************

// ********** Begin Class UPVMeshData **************************************************************
struct Z_Construct_UClass_UPVMeshData_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVMeshData_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVMeshData(); \
	friend struct ::Z_Construct_UClass_UPVMeshData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVMeshData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVMeshData, UPVData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVMeshData_NoRegister) \
	DECLARE_SERIALIZER(UPVMeshData)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVMeshData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVMeshData(UPVMeshData&&) = delete; \
	UPVMeshData(const UPVMeshData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVMeshData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVMeshData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVMeshData) \
	NO_API virtual ~UPVMeshData();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVMeshData;

// ********** End Class UPVMeshData ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVMeshData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
