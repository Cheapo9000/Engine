// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGWaterSplineData.h"

#ifdef PCGWATERINTEROP_PCGWaterSplineData_generated_h
#error "PCGWaterSplineData.generated.h already included, missing '#pragma once' in PCGWaterSplineData.h"
#endif
#define PCGWATERINTEROP_PCGWaterSplineData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGWaterSplineMetadataStruct *************************************
struct Z_Construct_UScriptStruct_FPCGWaterSplineMetadataStruct_Statics;
#define FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWaterSplineMetadataStruct_Statics; \
	PCGWATERINTEROP_API static class UScriptStruct* StaticStruct();


struct FPCGWaterSplineMetadataStruct;
// ********** End ScriptStruct FPCGWaterSplineMetadataStruct ***************************************

// ********** Begin Class UPCGWaterSplineData ******************************************************
struct Z_Construct_UClass_UPCGWaterSplineData_Statics;
PCGWATERINTEROP_API UClass* Z_Construct_UClass_UPCGWaterSplineData_NoRegister();

#define FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWaterSplineData(); \
	friend struct ::Z_Construct_UClass_UPCGWaterSplineData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGWATERINTEROP_API UClass* ::Z_Construct_UClass_UPCGWaterSplineData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWaterSplineData, UPCGSplineData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGWaterInterop"), Z_Construct_UClass_UPCGWaterSplineData_NoRegister) \
	DECLARE_SERIALIZER(UPCGWaterSplineData)


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGWaterSplineData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWaterSplineData(UPCGWaterSplineData&&) = delete; \
	UPCGWaterSplineData(const UPCGWaterSplineData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWaterSplineData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWaterSplineData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGWaterSplineData) \
	NO_API virtual ~UPCGWaterSplineData();


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWaterSplineData;

// ********** End Class UPCGWaterSplineData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCGInterops_PCGWaterInterop_Source_PCGWaterInterop_Public_Data_PCGWaterSplineData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
