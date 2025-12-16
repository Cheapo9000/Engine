// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Data/PCGProxyForGPUData.h"

#ifdef PCG_PCGProxyForGPUData_generated_h
#error "PCGProxyForGPUData.generated.h already included, missing '#pragma once' in PCGProxyForGPUData.h"
#endif
#define PCG_PCGProxyForGPUData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoProxyForGPU ***************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoProxyForGPU_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoProxyForGPU_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoProxyForGPU;
// ********** End ScriptStruct FPCGDataTypeInfoProxyForGPU *****************************************

// ********** Begin Class UPCGProxyForGPUData ******************************************************
struct Z_Construct_UClass_UPCGProxyForGPUData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGProxyForGPUData(); \
	friend struct ::Z_Construct_UClass_UPCGProxyForGPUData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGProxyForGPUData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGProxyForGPUData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGProxyForGPUData_NoRegister) \
	DECLARE_SERIALIZER(UPCGProxyForGPUData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGProxyForGPUData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGProxyForGPUData(UPCGProxyForGPUData&&) = delete; \
	UPCGProxyForGPUData(const UPCGProxyForGPUData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGProxyForGPUData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGProxyForGPUData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGProxyForGPUData) \
	PCG_API virtual ~UPCGProxyForGPUData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_32_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGProxyForGPUData;

// ********** End Class UPCGProxyForGPUData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_Data_PCGProxyForGPUData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
