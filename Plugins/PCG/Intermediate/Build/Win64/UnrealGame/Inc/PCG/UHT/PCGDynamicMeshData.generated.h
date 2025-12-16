// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGDynamicMeshData.h"

#ifdef PCG_PCGDynamicMeshData_generated_h
#error "PCGDynamicMeshData.generated.h already included, missing '#pragma once' in PCGDynamicMeshData.h"
#endif
#define PCG_PCGDynamicMeshData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UMaterialInterface;

// ********** Begin ScriptStruct FPCGDataTypeInfoDynamicMesh ***************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoDynamicMesh;
// ********** End ScriptStruct FPCGDataTypeInfoDynamicMesh *****************************************

// ********** Begin Class UPCGDynamicMeshData ******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execK2_Initialize);


struct Z_Construct_UClass_UPCGDynamicMeshData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDynamicMeshData(); \
	friend struct ::Z_Construct_UClass_UPCGDynamicMeshData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDynamicMeshData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDynamicMeshData, UPCGSpatialData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDynamicMeshData_NoRegister) \
	DECLARE_SERIALIZER(UPCGDynamicMeshData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDynamicMeshData(UPCGDynamicMeshData&&) = delete; \
	UPCGDynamicMeshData(const UPCGDynamicMeshData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDynamicMeshData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDynamicMeshData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDynamicMeshData) \
	PCG_API virtual ~UPCGDynamicMeshData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDynamicMeshData;

// ********** End Class UPCGDynamicMeshData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDynamicMeshData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
