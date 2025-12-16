// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGBasePointData.h"

#ifdef PCG_PCGBasePointData_generated_h
#error "PCGBasePointData.generated.h already included, missing '#pragma once' in PCGBasePointData.h"
#endif
#define PCG_PCGBasePointData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGBasePointData;
struct FPCGPoint;
struct FPCGPointInputRange;
struct FPCGPointOutputRange;

// ********** Begin ScriptStruct FPCGPointInputRange ***********************************************
struct Z_Construct_UScriptStruct_FPCGPointInputRange_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPointInputRange_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPointInputRange;
// ********** End ScriptStruct FPCGPointInputRange *************************************************

// ********** Begin ScriptStruct FPCGPointOutputRange **********************************************
struct Z_Construct_UScriptStruct_FPCGPointOutputRange_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPointOutputRange_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPointOutputRange;
// ********** End ScriptStruct FPCGPointOutputRange ************************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoPoint *********************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoPoint;
// ********** End ScriptStruct FPCGDataTypeInfoPoint ***********************************************

// ********** Begin Class UPCGBasePointData ********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPointOnRange); \
	DECLARE_FUNCTION(execGetPointFromRange); \
	DECLARE_FUNCTION(execSetMetadataEntryValuesOnRange); \
	DECLARE_FUNCTION(execSetSeedValuesOnRange); \
	DECLARE_FUNCTION(execSetSteepnessValuesOnRange); \
	DECLARE_FUNCTION(execSetColorValuesOnRange); \
	DECLARE_FUNCTION(execSetBoundsMaxValuesOnRange); \
	DECLARE_FUNCTION(execSetBoundsMinValuesOnRange); \
	DECLARE_FUNCTION(execSetDensityValuesOnRange); \
	DECLARE_FUNCTION(execSetTransformValuesOnRange); \
	DECLARE_FUNCTION(execGetMetadataEntryValuesFromRange); \
	DECLARE_FUNCTION(execGetSeedValuesFromRange); \
	DECLARE_FUNCTION(execGetSteepnessValuesFromRange); \
	DECLARE_FUNCTION(execGetColorValuesFromRange); \
	DECLARE_FUNCTION(execGetBoundsMaxValuesFromRange); \
	DECLARE_FUNCTION(execGetBoundsMinValuesFromRange); \
	DECLARE_FUNCTION(execGetDensityValuesFromRange); \
	DECLARE_FUNCTION(execGetTransformValuesFromRange); \
	DECLARE_FUNCTION(execBP_SetPointsFrom); \
	DECLARE_FUNCTION(execGetScaledLocalSize); \
	DECLARE_FUNCTION(execGetLocalSize); \
	DECLARE_FUNCTION(execGetScaledExtents); \
	DECLARE_FUNCTION(execGetExtents); \
	DECLARE_FUNCTION(execGetLocalCenter); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetLocalDensityBounds); \
	DECLARE_FUNCTION(execGetDensityBounds); \
	DECLARE_FUNCTION(execGetMetadataEntry); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execGetSteepness); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execGetBoundsMax); \
	DECLARE_FUNCTION(execGetBoundsMin); \
	DECLARE_FUNCTION(execGetDensity); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execSetLocalCenter); \
	DECLARE_FUNCTION(execSetExtents); \
	DECLARE_FUNCTION(execSetMetadataEntry); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execSetSteepness); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetBoundsMax); \
	DECLARE_FUNCTION(execSetBoundsMin); \
	DECLARE_FUNCTION(execSetDensity); \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execBP_AllocateProperties); \
	DECLARE_FUNCTION(execSetNumPoints); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execGetNumPoints);


struct Z_Construct_UClass_UPCGBasePointData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBasePointData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBasePointData(); \
	friend struct ::Z_Construct_UClass_UPCGBasePointData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBasePointData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBasePointData, UPCGSpatialData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBasePointData_NoRegister) \
	DECLARE_SERIALIZER(UPCGBasePointData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBasePointData(UPCGBasePointData&&) = delete; \
	UPCGBasePointData(const UPCGBasePointData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBasePointData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBasePointData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBasePointData) \
	PCG_API virtual ~UPCGBasePointData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_61_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBasePointData;

// ********** End Class UPCGBasePointData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGBasePointData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
