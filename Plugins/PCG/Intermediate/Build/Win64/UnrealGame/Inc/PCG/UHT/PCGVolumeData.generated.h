// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGVolumeData.h"

#ifdef PCG_PCGVolumeData_generated_h
#error "PCGVolumeData.generated.h already included, missing '#pragma once' in PCGVolumeData.h"
#endif
#define PCG_PCGVolumeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoVolume ********************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoVolume;
// ********** End ScriptStruct FPCGDataTypeInfoVolume **********************************************

// ********** Begin Class UPCGVolumeData ***********************************************************
struct Z_Construct_UClass_UPCGVolumeData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVolumeData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVolumeData(); \
	friend struct ::Z_Construct_UClass_UPCGVolumeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVolumeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVolumeData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVolumeData_NoRegister) \
	DECLARE_SERIALIZER(UPCGVolumeData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGVolumeData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVolumeData(UPCGVolumeData&&) = delete; \
	UPCGVolumeData(const UPCGVolumeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGVolumeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVolumeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVolumeData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVolumeData;

// ********** End Class UPCGVolumeData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
