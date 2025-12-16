// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSplineData.h"

#ifdef PCG_PCGSplineData_generated_h
#error "PCGSplineData.generated.h already included, missing '#pragma once' in PCGSplineData.h"
#endif
#define PCG_PCGSplineData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
struct FSplinePoint;

// ********** Begin ScriptStruct FPCGDataTypeInfoSpline ********************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoPolyline Super;


struct FPCGDataTypeInfoSpline;
// ********** End ScriptStruct FPCGDataTypeInfoSpline **********************************************

// ********** Begin Class UPCGSplineData ***********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMetadataEntryKeysForSplinePoints); \
	DECLARE_FUNCTION(execGetSplinePoints); \
	DECLARE_FUNCTION(execK2_Initialize); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UPCGSplineData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplineData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplineData(); \
	friend struct ::Z_Construct_UClass_UPCGSplineData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplineData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplineData, UPCGPolyLineData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplineData_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplineData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplineData(UPCGSplineData&&) = delete; \
	UPCGSplineData(const UPCGSplineData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplineData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplineData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSplineData) \
	PCG_API virtual ~UPCGSplineData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_35_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplineData;

// ********** End Class UPCGSplineData *************************************************************

// ********** Begin Class UPCGSplineProjectionData *************************************************
struct Z_Construct_UClass_UPCGSplineProjectionData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplineProjectionData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplineProjectionData(); \
	friend struct ::Z_Construct_UClass_UPCGSplineProjectionData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplineProjectionData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplineProjectionData, UPCGProjectionData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplineProjectionData_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplineProjectionData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSplineProjectionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplineProjectionData(UPCGSplineProjectionData&&) = delete; \
	UPCGSplineProjectionData(const UPCGSplineProjectionData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplineProjectionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplineProjectionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSplineProjectionData) \
	PCG_API virtual ~UPCGSplineProjectionData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_152_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplineProjectionData;

// ********** End Class UPCGSplineProjectionData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
