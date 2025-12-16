// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSpatialData.h"

#ifdef PCG_PCGSpatialData_generated_h
#error "PCGSpatialData.generated.h already included, missing '#pragma once' in PCGSpatialData.h"
#endif
#define PCG_PCGSpatialData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGBasePointData;
class UPCGDifferenceData;
class UPCGIntersectionData;
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
class UPCGUnionData;
struct FPCGBlueprintContextHandle;
struct FPCGContext;
struct FPCGInitializeFromDataParams;
struct FPCGPoint;
struct FPCGProjectionParams;

// ********** Begin ScriptStruct FPCGInitializeFromDataParams **************************************
struct Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGInitializeFromDataParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGInitializeFromDataParams;
// ********** End ScriptStruct FPCGInitializeFromDataParams ****************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoSpatial *******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoSpatial;
// ********** End ScriptStruct FPCGDataTypeInfoSpatial *********************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoConcrete ******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoSpatial Super;


struct FPCGDataTypeInfoConcrete;
// ********** End ScriptStruct FPCGDataTypeInfoConcrete ********************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoComposite *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoSpatial Super;


struct FPCGDataTypeInfoComposite;
// ********** End ScriptStruct FPCGDataTypeInfoComposite *******************************************

// ********** Begin Class UPCGSpatialData **********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeFromDataWithParams); \
	DECLARE_FUNCTION(execInitializeFromData); \
	DECLARE_FUNCTION(execCreateEmptyMetadata); \
	DECLARE_FUNCTION(execK2_Subtract); \
	DECLARE_FUNCTION(execK2_UnionWith); \
	DECLARE_FUNCTION(execK2_ProjectOn); \
	DECLARE_FUNCTION(execK2_IntersectWith); \
	DECLARE_FUNCTION(execHasNonTrivialTransform); \
	DECLARE_FUNCTION(execK2_ProjectPoint); \
	DECLARE_FUNCTION(execK2_SamplePoint); \
	DECLARE_FUNCTION(execToBasePointDataWithContext); \
	DECLARE_FUNCTION(execToPointDataWithContext); \
	DECLARE_FUNCTION(execToPointData); \
	DECLARE_FUNCTION(execGetDensityAtPosition); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetStrictBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetDimension);


struct Z_Construct_UClass_UPCGSpatialData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialData(); \
	friend struct ::Z_Construct_UClass_UPCGSpatialData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpatialData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpatialData, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpatialData_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpatialData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpatialData(UPCGSpatialData&&) = delete; \
	UPCGSpatialData(const UPCGSpatialData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSpatialData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialData) \
	PCG_API virtual ~UPCGSpatialData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_107_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpatialData;

// ********** End Class UPCGSpatialData ************************************************************

// ********** Begin ScriptStruct FPCGPointDataCache ************************************************
struct Z_Construct_UScriptStruct_FPCGPointDataCache_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_303_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPointDataCache_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPointDataCache;
// ********** End ScriptStruct FPCGPointDataCache **************************************************

// ********** Begin Class UPCGSpatialDataWithPointCache ********************************************
struct Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_321_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialDataWithPointCache(); \
	friend struct ::Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpatialDataWithPointCache, UPCGSpatialData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpatialDataWithPointCache)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_321_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSpatialDataWithPointCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpatialDataWithPointCache(UPCGSpatialDataWithPointCache&&) = delete; \
	UPCGSpatialDataWithPointCache(const UPCGSpatialDataWithPointCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSpatialDataWithPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialDataWithPointCache); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialDataWithPointCache) \
	PCG_API virtual ~UPCGSpatialDataWithPointCache();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_318_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_321_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_321_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_321_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpatialDataWithPointCache;

// ********** End Class UPCGSpatialDataWithPointCache **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
