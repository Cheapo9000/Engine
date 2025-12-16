// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataTypes/PVGrowthData.h"

#ifdef PROCEDURALVEGETATION_PVGrowthData_generated_h
#error "PVGrowthData.generated.h already included, missing '#pragma once' in PVGrowthData.h"
#endif
#define PROCEDURALVEGETATION_PVGrowthData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVDataTypeInfoGrowth *********************************************
struct Z_Construct_UScriptStruct_FPVDataTypeInfoGrowth_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVDataTypeInfoGrowth_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPVDataTypeInfoGrowth;
// ********** End ScriptStruct FPVDataTypeInfoGrowth ***********************************************

// ********** Begin Class UPVGrowthData ************************************************************
struct Z_Construct_UClass_UPVGrowthData_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVGrowthData_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVGrowthData(); \
	friend struct ::Z_Construct_UClass_UPVGrowthData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVGrowthData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVGrowthData, UPVData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVGrowthData_NoRegister) \
	DECLARE_SERIALIZER(UPVGrowthData)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVGrowthData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVGrowthData(UPVGrowthData&&) = delete; \
	UPVGrowthData(const UPVGrowthData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVGrowthData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVGrowthData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVGrowthData) \
	NO_API virtual ~UPVGrowthData();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVGrowthData;

// ********** End Class UPVGrowthData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVGrowthData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
