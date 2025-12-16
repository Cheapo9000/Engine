// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSurfaceData.h"

#ifdef PCG_PCGSurfaceData_generated_h
#error "PCGSurfaceData.generated.h already included, missing '#pragma once' in PCGSurfaceData.h"
#endif
#define PCG_PCGSurfaceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoSurface *******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoSurface;
// ********** End ScriptStruct FPCGDataTypeInfoSurface *********************************************

// ********** Begin Class UPCGSurfaceData **********************************************************
struct Z_Construct_UClass_UPCGSurfaceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSurfaceData(); \
	friend struct ::Z_Construct_UClass_UPCGSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSurfaceData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGSurfaceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSurfaceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSurfaceData(UPCGSurfaceData&&) = delete; \
	UPCGSurfaceData(const UPCGSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSurfaceData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSurfaceData) \
	PCG_API virtual ~UPCGSurfaceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSurfaceData;

// ********** End Class UPCGSurfaceData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
