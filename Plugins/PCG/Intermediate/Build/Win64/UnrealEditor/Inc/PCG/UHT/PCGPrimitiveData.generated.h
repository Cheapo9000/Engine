// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPrimitiveData.h"

#ifdef PCG_PCGPrimitiveData_generated_h
#error "PCGPrimitiveData.generated.h already included, missing '#pragma once' in PCGPrimitiveData.h"
#endif
#define PCG_PCGPrimitiveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoPrimitive *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoPrimitive;
// ********** End ScriptStruct FPCGDataTypeInfoPrimitive *******************************************

// ********** Begin Class UPCGPrimitiveData ********************************************************
struct Z_Construct_UClass_UPCGPrimitiveData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPrimitiveData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPrimitiveData(); \
	friend struct ::Z_Construct_UClass_UPCGPrimitiveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPrimitiveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPrimitiveData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPrimitiveData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPrimitiveData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPrimitiveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPrimitiveData(UPCGPrimitiveData&&) = delete; \
	UPCGPrimitiveData(const UPCGPrimitiveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPrimitiveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPrimitiveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPrimitiveData) \
	PCG_API virtual ~UPCGPrimitiveData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPrimitiveData;

// ********** End Class UPCGPrimitiveData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
